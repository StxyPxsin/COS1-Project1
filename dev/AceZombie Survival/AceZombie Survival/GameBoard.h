#pragma once
#include <string>
class GameBoard
{
public:
	static const int Width = 50;
	static const int height= 22;
	static const int FrameDelayMs = 33;
	
};

struct Position {
	double x;
	double y;
	void bound() {
		if (x < 0) x = 0;
		if (x >= GameBoard::height) x = GameBoard::Width - 1;
	}
};

