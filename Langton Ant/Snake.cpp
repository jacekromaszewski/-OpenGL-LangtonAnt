#include "pch.h"
#include "Snake.h"
#include "GL/glut.h"
#include <iostream>

using namespace std;

Snake::Snake(int height, int width)
{
	this->height = height;
	this->width = width;
	this->direction = 0;
	this->length = 1;
	this->x = 5;
	this->y = 5;
	for (int i = 0; i < 200; i++)
		for (int j = 0; j < 200; j++)
		{
			Squares[i][j] = 0;
			Snake1[i][j] = 0;
		}
	Snake1[x][y] = 1;

}

void Snake::Run()
{
	/*
	if (Snake1[x][y]==1)
		PaintSquare(x, y, 1);
	else PaintSquare(x, y, 0);*/
	
	Snake1[x][y] = 0;
	PaintSquare(x, y, 0);
	if (this->direction == 0) { y++; }
	if (this->direction == 1) { x++; }
	if (this->direction == 2) { y--; }
	if (this->direction == 3) { x--; }
	Snake1[x][y] = 1;
	PaintSquare(x, y, 1);
	

	Sleep(200);
}

void Snake::PaintSquare(int x, int y,int flag)
{
	int i = 5;
	if(flag)
		glColor3f(0, 0, 0);
	else 
		glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(x * i, y * i);
	glVertex2i(x * i, y * i + i);
	glVertex2i(x * i + i, y * i + i);
	glVertex2i(x * i + i, y * i);
	glEnd();
	glFlush();
	
}

Snake::Snake()
{
}


Snake::~Snake()
{
}
