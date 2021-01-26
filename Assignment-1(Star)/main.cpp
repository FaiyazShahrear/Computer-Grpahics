#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glPointSize(15.0);
glColor3ub (0,0,0);


glBegin(GL_POLYGON);


glVertex2i(320,150);
glVertex2i(408,212);
glVertex2i(374,310);
glVertex2i(266,310);
glVertex2i(237,212);

glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,0,0);
glVertex2i(120,305);
glVertex2i(266,310);
glVertex2i(237,212);
glVertex2i(408,212);
glVertex2i(374,310);
glVertex2i(520,305);
glVertex2i(320,150);
glVertex2i(237,212);
glVertex2i(195,70);
glVertex2i(320,150);
glVertex2i(408,212);
glVertex2i(445,70);
glVertex2i(320,450);
glVertex2i(266,310);
glVertex2i(374,310);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 250);
glutCreateWindow ("POINT");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
