#include "GameLifeLogic.h"

GameLifeLogic::GameLifeLogic(int _size_field)
{
	size_field = _size_field+2;
	mas = new bool*[size_field];
	for (int i = 0; i < size_field; ++i)
	{
		mas[i] = new bool[size_field];
	}
	for (int i = 0; i < size_field; ++i)
	{
		for (int j = 0; j < size_field; ++j)
		{
			mas[i][j] = false;
		}
	}
}
GameLifeLogic::~GameLifeLogic() 
{
	for (int i = 0; i < size_field; ++i)
	{
		delete[] mas[i];
	}
	delete[] mas;
}

bool GameLifeLogic::CheckFile()
{
	std::ifstream istr("file.txt");
	if (istr.is_open()) {
		istr.close();
		return true;
	}
	else
	{
		return false;
	}
}

void GameLifeLogic::SetLine(std::string line , int pos) 
{
	for (int i = 0; i < line.size(); ++i)
	{
		if (line[i] == '1')
		{
			mas[pos][i+1] = true;
		}
		else 
		{
			mas[pos][i+1] = false;
		}
	}
}

void GameLifeLogic::CreateData()
{
	if (CheckFile() == false) 
	{
		std::ofstream ofstr("file.txt");
		if (ofstr.is_open())
		{
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
			ofstr << "0000000000" << std::endl;
		}
		else
		{
			throw - 3; //Error Create file
		}
		ofstr.close();
	}
}

int GameLifeLogic::ReturnBigger()
{
	int countX = 0;
	int countY = 0;
	std::string line;
	std::ifstream istr("file.txt");
	if (istr.is_open()) 
	{
		while (std::getline(istr, line))
		{
			countY++;
			if (countX < line.size()) 
			{
				countX = line.size();
			}
		}
	}
	istr.close();
	if (countX > countY)
	{
		return countX;
	}
	else
	{
		return countY;
	}
}

void GameLifeLogic::ResizeMas(int new_size)
{
	for (int i = 0; i < size_field; ++i)
	{
		delete[] mas[i];
	}
	delete[] mas;
	size_field = new_size + 2;
	mas = new bool *[size_field];
	for (int i = 0; i < size_field; ++i)
	{
		mas[i] = new bool[size_field];
	}

}

void GameLifeLogic::ReadData()
{
	std::string line;
	std::ifstream istr("file.txt");
	if (istr.is_open()) 
	{
		int i = 1;
		while (std::getline(istr, line)) 
		{
			if (line.size() != size_field - 2)
			{
				ResizeMas(ReturnBigger());
			}
			SetLine(line, i);
			++i;
		}
	}
	else 
	{
		throw - 1; //Error open file
	}
	istr.close();
}
void GameLifeLogic::PrintData() 
{
	for (int i = 1; i < size_field - 1; ++i)
	{
		for (int j = 1; j < size_field - 1; ++j)
		{
			if (mas[i][j] == true)
				std::cout << "@" << " ";
			else 
				std::cout << "0" << " ";
		}
		std::cout << std::endl;
	}
}