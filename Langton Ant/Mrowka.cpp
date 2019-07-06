#include "pch.h"
#include "Mrowka.h"
#include <GL/glut.h>
#include <iostream>

using namespace std;

Mrowka::Mrowka()
{
	
	
}

Mrowka::Mrowka(int height, int width)
{
	this->direction = 0;
	this->height = height;
	this->width = width;
	this->x = 50;
	this->y = 40;
	for (int i = 0; i < 500; i++)
		for (int j = 0; j < 500; j++)
			Squares[i][j] = 0;
	
}


Mrowka::~Mrowka()
{
}

void Mrowka::PaintSquare(int x, int y, bool fill)
{
	int i = 2;
	if (fill) glColor3f(0, 0, 0);
	else glColor3f(1.0, 1.0,1.0);

	glBegin(GL_POLYGON);
	glVertex2i(x * i, y * i);
	glVertex2i(x * i, y * i+ i);
	glVertex2i(x * i + i, y * i + i);
	glVertex2i(x * i +i, y * i);
	glEnd();
	glFlush();
	return;
	
}

//RED
void Mrowka::PaintSquare(int x, int y)
{
	int i = 2;
	 glColor3f(1.0, 0, 0);
	
	glBegin(GL_POLYGON);
	glVertex2i(x * i, y * i);
	glVertex2i(x * i, y * i + i);
	glVertex2i(x * i + i, y * i + i);
	glVertex2i(x * i + i, y * i);
	glEnd();
	glFlush();
	return;

}

void Mrowka::Run()
{
	
	bool filled;
	if (Squares[x][y] == 0) filled = true;
	else filled = false;
	if (filled)
	{
		direction++;
		if (direction > 3) direction = 0;
		Squares[x][y] = 1;
	}	
	else {
		direction--;
		if (direction < 0) direction = 3;
		Squares[x][y] = 0;
	}

	PaintSquare(x, y, filled);
	
	if (this->direction == 0) y++;
	if (this->direction == 1)  x++;
	if (this->direction == 2)  y--;
	if (this->direction == 3)  x--;
	PaintSquare(x, y); //RED
	Sleep(5);
	
}



