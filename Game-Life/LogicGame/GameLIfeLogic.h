#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
class GameLifeLogic
{
private: 
	bool **mas;
	int size_field;
public:
	GameLifeLogic(int _size_field = 10);
	GameLifeLogic(const GameLifeLogic & gl);
	~GameLifeLogic();
	void operator=(const GameLifeLogic gl);
	bool CheckFile();
	void SetLine(std::string line, int pos);
	void CreateData();
	int ReturnBigger();
	void ResizeMas(int new_size);
	void ReadData();
	void PrintData();
	void ClearData();
	void Start();
	void CheckRule(int i ,int j,const GameLifeLogic gl);

};

