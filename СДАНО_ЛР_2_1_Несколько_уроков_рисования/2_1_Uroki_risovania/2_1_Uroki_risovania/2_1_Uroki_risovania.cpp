#include <windows.h>
#include <glut.h>   //Подключение библиотеки glut.h
#include <gl/GLU.h>
#include <stdlib.h>
#include <gl/GL.h>
#include <cmath>

void Draw_Line_1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2d(0.5, 0.8);
	glVertex2d(-0.5, -0.8);
	glEnd();
	glFinish();

}

void Draw_Line_2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2d(-0.8, 0.8);
	glVertex2d(0.8, 0.8);
	glVertex2d(0.0, 0.3);
	glVertex2d(0.0, -0.3);
	glVertex2d(-0.8, -0.8);
	glVertex2d(0.8, -0.8);
	glEnd();
	glFinish();
}

void Draw_Line_3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0.0, 0.0, 1.0);
	glLineWidth(3);
	glBegin(GL_TRIANGLES);
	glVertex2d(-0.8, 0.8);
	glVertex2d(0.8, 0.8);
	glVertex2d(0.0, 0.3);
	glVertex2d(0.0, -0.3);
	glVertex2d(-0.8, -0.8);
	glVertex2d(0.8, -0.8);
	glEnd();
	glFinish();
}
void Draw_Line_4()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 0.0, 0.0);
	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glVertex2d(-0.8, 0.8);
	glVertex2d(0.8, 0.8);
	glVertex2d(0.0, 0.3);
	glVertex2d(0.0, -0.3);
	glVertex2d(-0.8, -0.8);
	glVertex2d(0.8, -0.8);
	glEnd();
	glFinish();
}

void Draw_Grid()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (int i = 0; i <= 10; i++)
	{
		glVertex2d(-1.0 + 0.2 * i, 1.0);
		glVertex2d(-1.0 + 0.2 * i, -1.0);
		glVertex2d(-1.0, -1.0 + 0.2 * i);
		glVertex2d(1.0, -1.0 + 0.2 * i);
	}
	glEnd();
	glFinish();

}
void Draw_Elips_1()
{
	double a = 0.7, b = 0.4; int n = 100;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < n; i++)
	{
		double x = a * sin(2 * 3.1416 * i / n);
		double y = b * cos(2 * 3.1416 * i / n);
		glColor3d(i /80, i/50, i /15);
		glVertex2d(x, y);
	}
	glEnd();
	glColor3d(1.0, 0.0, 0.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2d(0.0, 1.0);
	glVertex2d(0.0, -1.0);
	glVertex2d(1.0, 0.0);
	glVertex2d(-1.0, 0.0);
	glEnd();
	glFinish();

}
void Draw_Elips_2()
{
	double a = 0.7, b = 0.3; int n = 100;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < n; i++)
	{
		double x = a * sin(2 * 3.1416 * i / n);
		double y = b * cos(2 * 3.1416 * i / n);
		glColor3d(i / 80, i / 50, i / 15);
		glVertex2d(x, y);
	}
	glEnd();
	glColor3d(1.0, 0.0, 0.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2d(0.0, 1.0);
	glVertex2d(0.0, -1.0);
	glVertex2d(1.0, 0.0);
	glVertex2d(-1.0, 0.0);
	glEnd();
	glFinish();

}
void Draw_Elips_3()
{
	double a = 0.3, b = 0.7; int n = 100;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < n; i++)
	{
		double x = a * sin(2 * 3.1416 * i / n);
		double y = b * cos(2 * 3.1416 * i / n);
		glColor3d(i / 80, i / 50, i / 15);
		glVertex2d(x, y);
	}
	glEnd();
	glColor3d(1.0, 0.0, 0.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2d(0.0, 1.0);
	glVertex2d(0.0, -1.0);
	glVertex2d(1.0, 0.0);
	glVertex2d(-1.0, 0.0);
	glEnd();
	glFinish();

}
void Draw_Huperbola()
{
	double a = 0.4, b = 0.4; int n = 200;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(3);

	glBegin(GL_LINE_STRIP);
	for (int i = -n; i < n; i++)
	{
		double y = +a * (exp(0.01 * i) + exp(-0.01 * i)) / 2;
		double x = b * (exp(0.01 * i) - exp(-0.01 * i)) / 2;
		glColor3d(i / 80, i / 50, i / 15);
		glVertex2d(x, y);
	}
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	for (int i = -n; i < n; i++)
	{
		double y = -a * (exp(0.01 * i) + exp(-0.01 * i)) / 2;
		double x = b * (exp(0.01 * i) - exp(-0.01 * i)) / 2;
		glColor3d(i / 80, i / 50, i / 15);
		glVertex2d(x, y);
	}
	glEnd();

	glColor3d(0.0, 1.0, 0.0);
	glLineWidth(1);
	glColor3d(1.0, 1.0, 1.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2d(-1.0, -b/a);
	glVertex2d(1.0, b / a);
	glVertex2d(-1.0, b / a);
	glVertex2d(1.0, -b / a);
	glEnd();

	glColor3d(0.0, 0.0, 1.0);
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex2d(0.0, 1.0);
	glVertex2d(0.0, -1.0);
	glVertex2d(1.0, 0.0);
	glVertex2d(-1.0, 0.0);
	glEnd();

	glFinish();

}
void Act1()
{
	glTranslated(0.3, -0.3, 0.0);
	glScaled(0.3, 0.1, 1.0);
	glRotated(45.0, 0.0, 0.0, 1.0);
}

void Window1()
{
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Белая линия");
	glClearColor(0.0, 0.0, 0.5, 1.0);
	glutDisplayFunc(Draw_Line_1);
}

void Window2()
{
	glutInitWindowPosition(240, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Белые линии");
	glClearColor(0.0, 0.0, 0.5, 1.0);
	glutDisplayFunc(Draw_Line_2);
}
void Window3()
{
	glutInitWindowPosition(480, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Синие треугольники");
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glutDisplayFunc(Draw_Line_3);
}
void Window4()
{
	glutInitWindowPosition(720, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Красная линия");
	glClearColor(0.0, 1.0, 0.0, 1.0);
	glutDisplayFunc(Draw_Line_4);
}
void Window5()
{
	glutInitWindowPosition(940, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Сетка");
	glClearColor(0.0, 0.0, 0.5, 1.0);
	glutDisplayFunc(Draw_Grid);
}
void Window6()
{
	glutInitWindowPosition(1160, 0);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Сетка 2");
	glClearColor(0.0, 0.0, 0.5, 1.0);
	glutDisplayFunc(Draw_Grid);
	Act1();
}
void Window7()
{
	glutInitWindowPosition(0, 300);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Элипс 1");
	glClearColor(0.0, 0.5, 1.0, 1.0);
	glutDisplayFunc(Draw_Elips_1);
}
void Window8()
{
	glutInitWindowPosition(240, 300);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Элипс 2");
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glutDisplayFunc(Draw_Elips_2);
}
void Window9()
{
	glutInitWindowPosition(480, 300);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Элипс 3");
	glClearColor(1.0, 0.0, 1.0, 1.0);
	glutDisplayFunc(Draw_Elips_3);
}
void Window10()
{
	glutInitWindowPosition(720, 300);
	glutInitWindowSize(240, 300);
	glutCreateWindow("Гипербола");
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glutDisplayFunc(Draw_Huperbola);
}
void main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	Window1();
	Window2();
	Window3();
	Window4();
	Window5();
	Window6();
	Window7();
	Window8();
	Window9();
	Window10();
	glutMainLoop();
};