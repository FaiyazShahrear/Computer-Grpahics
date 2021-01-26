#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_LINES);
glVertex2i(100, 50);
glVertex2i(100, 190);
glVertex2i(120, 50);
glVertex2i(120,170);
glVertex2i(150, 50);
glVertex2i(150, 170);
glVertex2i(170, 50);
glVertex2i(170,190);
glVertex2i(120, 170);
glVertex2i(150, 170);
glVertex2i(80, 50);
glVertex2i(100,50);
glVertex2i(170, 50);
glVertex2i(190, 50);
glVertex2i(170, 190);
glVertex2i(100, 190);
glVertex2i(90, 150);
glVertex2i(100, 150);
glVertex2i(180, 150);
glVertex2i(170,150);
glVertex2i(90, 150);
glVertex2i(90, 250);
glVertex2i(180, 150);
glVertex2i(180,250);
glVertex2i(90, 250);
glVertex2i(180, 250);
glVertex2i(115, 250);
glVertex2i(115, 265);
glVertex2i(115, 265);
glVertex2i(100, 265);
glVertex2i(100, 265);
glVertex2i(100,300);
glVertex2i(155, 250);
glVertex2i(155, 300);
glVertex2i(155, 300);
glVertex2i(100,300);
glVertex2i(100, 300);
glVertex2i(90, 300);
glVertex2i(90, 300);
glVertex2i(90,320);
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
