#pragma once
#include <iostream>
#include <fstream>
#include <string>

class GameLifeLogic
{
private: 
	bool **mas;
	int size_field;
public:
	GameLifeLogic(int _size_field = 10);
	~GameLifeLogic();
	bool CheckFile();
	void SetLine(std::string line, int pos);
	void CreateData();
	int ReturnBigger();
	void ResizeMas(int new_size);
	void ReadData();
	void PrintData();
	

};

