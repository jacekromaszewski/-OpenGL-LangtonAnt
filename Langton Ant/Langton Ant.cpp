#include "pch.h"
#include <iostream>
#include <GL/glut.h>
#include "Mrowka.h"

using namespace std;







int main(int argc, char** argv)
{
	
	int height = 500, width = 500,i=0;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(width, height);
	glutCreateWindow("Langton Ant");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 200.0, 0, 150.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0);
	
	
	Mrowka mrowka(height,width);

	while (i!=11000)
	{
		mrowka.Run();
		i++;
	}


	glutMainLoop();

}


