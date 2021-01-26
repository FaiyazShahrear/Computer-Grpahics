#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(50, 20);
glVertex2i(550, 20);
glVertex2i(550, 430);
glVertex2i(50, 430);
glEnd();

glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(70, 30);
glVertex2i(530, 30);
glVertex2i(530, 400);
glVertex2i(70, 400);

glEnd();

glColor3f(0.4f, 0.4f, 0.4f);//3
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(70, 30);
glVertex2i(530, 30);
glVertex2i(530, 120);
glVertex2i(70, 120);

glEnd();
glColor3f(0.5f, 0.5f, 0.0f);//4
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(190, 60);
glVertex2i(510, 60);
glVertex2i(510, 220);
glVertex2i(190, 220);

glEnd();

glColor3ub(139,69,19);//5
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(250, 220);
glVertex2i(220, 300);
glVertex2i(500, 300);
glVertex2i(530, 220);

glEnd();
glColor3f(0.5f, 0.5f, 0.0f);//6
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(250, 220);
glVertex2i(220, 300);
glVertex2i(190, 220);
glEnd();
glColor3ub(139,69,19);//7
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(220, 300);
glVertex2i(180, 220);
glVertex2i(190, 220);
glVertex2i(225, 290);

glEnd();
glColor3f(0.0f, 0.0f, 0.0f);//8
glPointSize(5.0);
glBegin(GL_LINES);
glVertex2i(250, 220);
glVertex2i(180, 220);
glVertex2i(250, 220);
glVertex2i(250, 40);


glEnd();
glColor3f(0.5f, 0.5f, 0.0f);//9
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(190, 100);
glVertex2i(150, 100);
glVertex2i(150, 140);
glVertex2i(190, 140);

glEnd();
glColor3f(0.5f, 0.5f, 0.0f);//10
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(140, 100);
glVertex2i(190, 100);
glVertex2i(190, 80);
glVertex2i(140, 80);

glEnd();
glColor3f(0.5f, 0.5f, 0.0f);//11
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(130, 80);
glVertex2i(190, 80);
glVertex2i(190, 60);
glVertex2i(130, 60);

glEnd();

glColor3f(0.0f, 0.0f, 0.0f);//12
glPointSize(5.0);
glBegin(GL_LINES);
glVertex2i(140, 100);
glVertex2i(250, 100);
glVertex2i(140, 100);
glVertex2i(140, 80);
glVertex2i(140, 80);
glVertex2i(250, 80);
glVertex2i(250, 80);
glVertex2i(130, 80);
glVertex2i(130, 80);
glVertex2i(130, 60);
glVertex2i(130, 60);
glVertex2i(510, 60);
glVertex2i(120, 60);
glVertex2i(130, 60);
glVertex2i(120, 60);
glVertex2i(120, 40);
glVertex2i(120, 40);
glVertex2i(250, 40);
glVertex2i(510, 60);
glVertex2i(510, 220);
glVertex2i(190, 220);
glVertex2i(190, 60);
glVertex2i(120, 40);
glVertex2i(70, 40);


glVertex2i(250, 130);
glVertex2i(510, 130);
glVertex2i(250, 160);
glVertex2i(510, 160);
glVertex2i(250, 190);
glVertex2i(510, 190);

//glVertex2i(300, 200);
//glVertex2i(350, 200);
//glVertex2i(350, 200);
//glVertex2i(350, 130);









glEnd();
glColor3f(0.0f, 0.0f, 0.0f);//14
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(250, 90);
glVertex2i(510, 90);
glVertex2i(510, 100);
glVertex2i(250, 100);

glEnd();

glColor3f(0.4f, 0.4f, 0.4f);//15
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(300, 200);
glVertex2i(350, 200);
glVertex2i(350, 130);
glVertex2i(300, 130);

glEnd();
glColor3f(0.4f, 0.4f, 0.4f);//15
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(470, 200);
glVertex2i(420, 200);
glVertex2i(420, 130);
glVertex2i(470, 130);

glEnd();
glColor3ub (244,164,96);
glPointSize(2.0);
glBegin(GL_POINTS);
glVertex2i(100, 250);
glVertex2i(110, 330);
glVertex2i(250, 320);
glVertex2i(150, 250);
glVertex2i(180, 320);
glVertex2i(260, 320);
glVertex2i(100, 250);
glVertex2i(100, 330);
glVertex2i(50, 320);


glVertex2i(300, 380);
glVertex2i(350, 330);
glVertex2i(400, 300);
glVertex2i(450, 390);
glVertex2i(480, 310);
glVertex2i(360, 330);
glVertex2i(500, 355);
glVertex2i(480, 330);
glVertex2i(370, 340);

glVertex2i(395, 380);
glVertex2i(381, 330);
glVertex2i(462, 300);
glVertex2i(472, 390);
glVertex2i(483, 310);
glVertex2i(369, 330);
glVertex2i(510, 355);
glVertex2i(486, 330);
glVertex2i(379, 345);

glVertex2i(315, 381);
glVertex2i(353, 336);
glVertex2i(444, 333);
glVertex2i(450, 396);
glVertex2i(482, 318);
glVertex2i(330, 337);
glVertex2i(520, 358);
glVertex2i(487, 339);
glVertex2i(374, 349);

glVertex2i(3140, 389);
glVertex2i(310, 337);
glVertex2i(470, 320);
glVertex2i(450, 393);
glVertex2i(489, 313);
glVertex2i(366, 333);
glVertex2i(444, 355);
glVertex2i(489, 338);
glVertex2i(379, 345);
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
