#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;
GLfloat randx = 0.0f;
GLfloat randy = 0.0f;
int randin;
float randfl;
bool enemy1=false;

void update(int value) {
    if(enemy1==true) {
        randin = (rand()%200);
        randx = ((float)randin/100)-1;
        randin = (rand()%200);
        randy = ((float)randin/100)-1;
      enemy1=false;
    }
	glutTimerFunc(70, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
		    float a=((float)x-350)/350;
		    float b=((float)y-350)/350*(-1);
		    if(a>(randx-0.1) && a<(randx+0.1) && b>(randy-0.1) && b<(randy+0.1))
            {
                enemy1 =true;
            }
		}
	}
	glutPostRedisplay();
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

    glColor3f(255, 0, 0);
    glPushMatrix();
    glTranslatef(randx,randy, 0.0f);
    {
    glBegin(GL_POLYGON);
      glVertex2f(-0.1f, 0.1f);
      glVertex2f( 0.0f,0.0f);
      glVertex2f( 0.1f, 0.1f);
    glEnd();
    }
    glPopMatrix();


glPushMatrix();

   glFlush();
}
int main(int argc, char** argv) {

   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Assignmen1");
   glutDisplayFunc(display);
   init();

   glutMouseFunc(handleMouse);
   glutTimerFunc(70, update, 0);
   glutMainLoop();
   return 0;
}
