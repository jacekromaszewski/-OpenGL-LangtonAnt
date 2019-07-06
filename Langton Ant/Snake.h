#pragma once
class Snake
{

public:
	int x, y, direction,length;
	int Snake1[200][200];
	int height, width;
	int Squares[200][200];
	bool fill = true;
	
	Snake(int height, int width);
	
	void Run();
	
	void PaintSquare(int x, int y,int flag);

	Snake();
	~Snake();
};

