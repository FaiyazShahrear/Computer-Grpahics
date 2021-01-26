#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed = 0.001f;

void update(int value) {
	glutPostRedisplay();
	position2 +=0.1;
	position3 -=0.01;
	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'l':
    position1 -= 0.1f;
    break;
case 'r':
    position1 += 0.1f;
    break;

glutPostRedisplay();

	}
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,position3, 0.0f);
    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.1f, 0.9f);
      glVertex2f( 0.1f, 0.9f);
      glVertex2f( 0.1f, 0.8f);
      glVertex2f(-0.1f, 0.8f);
    glEnd();
    glPopMatrix();

glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.1f, -0.9f);
      glVertex2f( 0.1f, -0.9f);
      glVertex2f( 0.1f, -0.8f);
      glVertex2f(-0.1f, -0.8f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glVertex2f(-0.1f, -0.8f);
   glVertex2f( 0.1f, -0.8f);
   glVertex2f( 0.0f, -0.7f);
   glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(0.0f,position2, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.01f, -0.7f);
      glVertex2f( 0.01f, -0.7f);
      glVertex2f( 0.01f, -0.68f);
      glVertex2f(-0.01f, -0.68f);
   glEnd();
glPopMatrix();
   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
