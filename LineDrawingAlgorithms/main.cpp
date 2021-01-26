#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>


double a1,a2,b1,b2;

void myDisplay(void)
{
double da,db,slop,a,b,i,ax,bx;
da=a2-a1;
db=b2-b1;

if(floor(da)> floor(db))
{
    slop = floor(da);
}
else
{
    slop = floor(db);
}


ax = da/slop;
bx = db/slop;

a= a1;
b=b1;

glBegin(GL_POINTS);
glVertex2i(a,b);
glEnd();

for (i=1 ;i<=slop;i++)
{
a= a + ax;
b= b + bx;

glBegin(GL_POINTS);
glVertex2i(a,b);
glEnd();
}


glFlush();
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
printf("Enter an Initial Point:: ");
scanf("%lf",&a1);
scanf("%lf",&b1);
printf("Enter the Final Point: ");
scanf("%lf",&a2);
scanf("%lf",&b2);

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
