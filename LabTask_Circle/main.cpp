#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;

float angle1 = 120.0f;
float angle2 = 30.0f;
float angle3 = 50.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

     glPushMatrix();
	glRotatef(angle1, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0, 0);
	glColor3f(255,255,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();


	 glPopMatrix();

	      glPushMatrix();
	glRotatef(angle2, 0.0, 0.0, 1.0);
	glTranslatef(0.6, 0, 0);
	glColor3f(0.0,128,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	 glPopMatrix();
	      glPushMatrix();
	glRotatef(angle3, 0.0, 0.0, 1.0);
	glTranslatef(0.9, 0, 0);
	glColor3f(0,0,255);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	 glPopMatrix();
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
glEnd();


glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
glEnd();

glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.9;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
glEnd();


    glPushMatrix();
        glColor3f(0.81,0.0,0.0);
        glutSolidSphere(.16,50,50);
    glPopMatrix();
	glutSwapBuffers();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutMainLoop();
	return 0;
}
