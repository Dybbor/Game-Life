#include "GameLIfeLogic.h"

int main()
{
	GameLifeLogic gl;
	std::cout << "Lets Play" << std::endl;
	system("pause");
	try 
	{
		gl.CreateData();
		gl.ReadData();
		std::cout << gl.ReturnBigger() << std::endl;
		gl.PrintData();
	}
	catch (int some) 
	{
		if (some == -1)
			std::cout << "Error open file" << std::endl;
		else if (some == -2)
			std::cout << "Error size line in file" << std::endl;
		else if (some == -3)
			std::cout << "Error create file" << std::endl;
	}
	system("pause");
	return 0;
}