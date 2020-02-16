#include "GameLIfeLogic.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

Point pt(-1, -1);
bool newCoords = false;
int x, y;

void DrawGrid8(Mat mat)
{
	for (int i = 1; i < 8; i++)
	{
		line(mat, Point(0, mat.rows / 8 * i), Point(mat.cols, mat.rows / 8 * i), Scalar(0, 250, 0), 2);
		line(mat, Point(mat.cols / 8 * i, 0), Point(mat.cols / 8 * i, mat.rows), Scalar(0, 250, 0), 2);
	}
}

void mouse_callback(int  event, int  xt, int  yt, int  flag, void *param)
{
	if (event == EVENT_LBUTTONDOWN)
	{

		pt.x = xt;
		pt.y = yt;
		newCoords = true;
		std::cout << pt.x << " " << pt.y << std::endl;
	}
}

void Exit(Mat image)
{
	//DrawGrid8(image);
	putText(image, "Exit ", Point(image.cols / 8 * 2.8, image.rows / 8 * 2), FONT_ITALIC, 2, Scalar(255, 255, 255), 2);
	putText(image, "does ", Point(image.cols / 8 * 2.8, image.rows / 8 * 3.5), FONT_ITALIC, 2, Scalar(255, 255, 255), 2);
	putText(image, "not", Point(image.cols / 8 * 2.8, image.rows / 8 * 5), FONT_ITALIC, 2, Scalar(255, 255, 255), 2);
	putText(image, "exist", Point(image.cols / 8 * 2.8, image.rows / 8 * 6.5), FONT_ITALIC, 2, Scalar(255, 255, 255), 2);
	putText(image, "sorry :c", Point(image.cols / 8 * 5.5, image.rows / 8 * 7), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	
}
void Rules(Mat image)
{
	//DrawGrid8(image);
	putText(image, "Any live cell with two or three neighbors survives.", Point(image.cols / 8 * 0.5, image.rows / 8 * 2), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	putText(image, "Any dead cell with three live ", Point(image.cols / 8 * 0.5, image.rows / 8 * 4), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	putText(image, " neighbors becomes a live cell.", Point(image.cols / 8 * 1, image.rows / 8 * 4.5), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	putText(image, "All other live cells die in the next generation. ", Point(image.cols / 8 * 0.5, image.rows / 8 * 6.5), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	putText(image, "Similarly, all other dead cells stay dead. ", Point(image.cols / 8 * 1, image.rows / 8 * 7), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
	putText(image, "Exit", Point(image.cols / 8 *7.2, image.rows / 8), FONT_ITALIC, 1, Scalar(255, 255, 255), 1);
}
void Menu(Mat image)
{
	//DrawGrid8(image);
	putText(image, "Play", Point(image.cols / 8 * 2.8, image.rows / 8 * 2.5), FONT_ITALIC, 2, Scalar(255, 255, 255), 3);
	putText(image, "IIPaBuJla", Point(image.cols / 8 * 1, image.rows / 8 * 4.5), FONT_ITALIC, 2, Scalar(255, 255, 255), 5);
	putText(image, "Exit", Point(image.cols / 8 * 3, image.rows / 8 * 6.5), FONT_ITALIC, 2, Scalar(255, 255, 255), 5);
}


int main()
{
	cv::Mat menu(400,400,CV_8UC3);
	cv::Mat another(400, 400, CV_8UC3);
	cv::Mat exite(400, 400, CV_8UC3);
	cv::Mat rules(500, 900, CV_8UC3);
	GameLifeLogic gl;
	gl.CreateData();
	gl.ReadData();
	for (int i = 0; i < menu.rows; ++i)
		for (int j = 0; j < menu.cols; ++j)
			menu.at <Vec3b>(i, j) = Vec3b{ 0,146,237 };
	cv::namedWindow("Life is shit", cv::WINDOW_AUTOSIZE);
	setMouseCallback("Life is shit", mouse_callback);
	Menu(menu);
	x = menu.cols / 8;
	y = menu.rows / 8;
	bool exit = false;
	char c;
	Menu(menu);
	while (!exit) 
	{
		imshow("Life is shit", menu);
		char c = (char)waitKey(2);
		if (newCoords)
		{
			if (pt.x > x*2.8 && pt.x < x*5.4 && pt.y > y*1.5 && pt.y < y * 3)//Play
			{
				while (1) {	
					newCoords = false;
					int block = gl.ReturnBigger();
					int size = 50;
					GameLifeLogic copy(gl);
					Mat game(size*block, size*block, CV_8UC3);
					for (int i = 1; i <= block; ++i)
						for (int j = 1; j <= block ; j++)
						{
							gl.CheckRule(i, j, copy);
						}
					for (int i = 1; i <= block; ++i)
					{
						for (int j = 1; j <= block; j++)
						{
							if (gl.GetValue(i, j))
							{
								rectangle(game, Rect((j - 1)*size, (i - 1)*size, size, size), Scalar(0, 0, 255), -1);
							}
							else
							{
								rectangle(game, Rect((j - 1)*size, (i - 1)*size, size, size), Scalar(0, 0, 0), -1);
							}
						}
					}
					for (int i = 1; i < block; i++)
					{
						line(game, Point(0, game.rows / block * i), Point(game.cols, game.rows / block * i), Scalar(0, 250, 0), 2);
						line(game, Point(game.cols / block * i, 0), Point(game.cols / block * i, game.rows), Scalar(0, 250, 0), 2);
					}
					putText(game, "Exit", Point(game.cols / block * (block-1.5), game.rows / block), FONT_ITALIC, 1, Scalar(255, 255, 255), 2);
					Sleep(250);
					imshow("Life is shit", game);
					c = (char)waitKey(20);
					if (pt.x > x * 7 && pt.y < y * 1 || c=='q')
					{
						newCoords = false;
						break;
					}
				}
			}
			else if (pt.x > x*1 && pt.x < x*7.2 && pt.y > y*3.5 && pt.y < y * 5) //Rules
			{ 
				while (1) {
					newCoords = false;
					Rules(rules);
					//DrawGrid8(rules);
					imshow("Life is shit", rules);
					c = (char)waitKey(20);
					if (pt.x > x * 6.5 && pt.y < y * 1.5 || c == 'q')
					{
						newCoords = false;
						break;
					}
				}
				
			}
			else if  (pt.x > x*3 && pt.x < x*5 && pt.y > y*5.5 && pt.y < y * 7) //Exit
			{
				while (1) {
					newCoords = false;
					Exit(exite);
					imshow("Life is shit", exite);
					c = (char)waitKey(20);
					if (pt.x > x * 7 && pt.y < y * 1)
					{
						newCoords = false;
						exit = true;
						break;
					}
				}
			}
		}
	}
	
	/*std::cout << "Lets Play" << std::endl;
	try 
	{
		gl.CreateData();
		gl.ReadData();
		system("pause");
		gl.Start();
	}
	catch (int some) 
	{
		if (some == -1)
			std::cout << "Error open file" << std::endl;
		else if (some == -3)
			std::cout << "Error create file" << std::endl;
	}
	system("pause");*/
	return 0;
}