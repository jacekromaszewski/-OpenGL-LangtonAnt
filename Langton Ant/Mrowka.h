#pragma once
class Mrowka
{
	
public:
	int x, y,direction;
	int height, width;
	int Squares[500][500];
	bool fill = true;
	Mrowka();
	Mrowka(int height, int width);
	~Mrowka();
	void Run();
	void PaintSquare(int x,int y,bool fill);
	void PaintSquare(int x, int y);
	
};

