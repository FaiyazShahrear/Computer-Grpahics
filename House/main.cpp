#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(0.1f, 0.0f, 0.0f);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(80, 50);
glVertex2i(550, 50);
glVertex2i(550, 220);
glVertex2i(80, 220);

glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.5f, 0.5f, 0.5f);
 glVertex2i(50, 220);
glVertex2i(580, 220);
glVertex2i(315, 350);

glEnd();
glBegin(GL_QUADS);
glColor3f(0.5f, 0.5f, 0.5f);
glVertex2i(350, 60);
glVertex2i(500, 60);
glVertex2i(500, 200);
glVertex2i(350, 200);
glBegin(GL_LINES);
 glVertex2i(50, 50);
glVertex2i(580, 50);

glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
