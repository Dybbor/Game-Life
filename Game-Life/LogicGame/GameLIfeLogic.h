#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

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
	int GetCount();
	bool GetValue(int i, int j);
};

