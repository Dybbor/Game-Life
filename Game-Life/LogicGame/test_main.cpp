#include "GameLIfeLogic.h"
#include "opencv2/highgui/highgui.hpp"
int main()
{
	GameLifeLogic gl;
	cv::Mat src;
	std::cout << "Lets Play" << std::endl;
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
	system("pause");
	return 0;
}