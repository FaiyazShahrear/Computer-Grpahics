#include <iostream>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>
#include<mmsystem.h>

using namespace std;


float vpos;
float _run = 3.0;
float _run1 = 0.0;
float _run2 = 0.0;
float _run3 = 0.0;
float _run4 = 0.0;
float _rain = 0.0;

int wcr=255, wcg=255, wcb=255;
int lcr=255, lcg=255, lcb=255;
int scr=54, scg=162, scb=255;
int ocr=0, ocg=102, ocb=204;
bool Bmoon=false;
bool Bcloud=true;
bool rainday=false;
bool Bstar=false;
bool Bsun = true;
float r=0.0;

 void update(int value)
 {

	vpos +=_run;
	if (vpos > 1000)
    {
        vpos -= 1700;
    }

    _run1 += 4.5f;
	if (_run1 > 1000)
    {
        _run1 -= 1300;
    }

    _run2 += 0.8f;
	if (_run2 > 1000)
    {
        _run2 -= 1300;
    }

     _run3 += 0.8f;
	if (_run3 > 1024)
    {
        _run3 -= 1700;
    }

    _run4 += 0.8f;
	if (_run4 > 1024)
    {
        _run4-= 1700;
    }



	 glutPostRedisplay();
	glutTimerFunc(25, update, 0);
 }
void drawCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int angleAmount = 50; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.1416;

    //glColor3ub(23,60,43);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= angleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / angleAmount)),
            y + (radius * sin(i * twicePi / angleAmount))
        );
    }
        glEnd();
}




void sky()
   {

    glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2i(0, 400);

	glColor3ub(255, 255, 255);
	glVertex2i(1024, 400);

	glColor3ub(scr, scg, scb);
	glVertex2i(1024, 768);

	glColor3ub(scr, scg, scb);
	glVertex2i(0, 768);

	glEnd();




	glPopMatrix();


	}

void star()
{
    if(Bstar){
  glColor3ub(255, 255, 255);
		drawCircle(10, 750, 1);
		drawCircle(100, 700, 2);
		drawCircle(30, 550, 3);
		drawCircle(50, 650, 2);
		drawCircle(150, 680, 2);
		drawCircle(115, 765, 2);
		drawCircle(300, 762, 2);
		drawCircle(440, 710, 1);
		drawCircle(390, 690, 2);
		drawCircle(470, 730, 2);
		drawCircle(650, 690, 2);
		drawCircle(800, 720, 3);
		drawCircle(300, 700, 3);
		drawCircle(610, 720, 2);
		drawCircle(650, 650, 3);
		drawCircle(710, 660, 1);
		drawCircle(750, 680, 3);
		drawCircle(900, 730, 2);
		drawCircle(880, 650, 2);
		drawCircle(910, 700, 2);
		drawCircle(1000, 750, 3);
		drawCircle(990, 650, 2);
		drawCircle(980, 700, 3);
}}

void cloud()
    {
        if(Bcloud){
//FIRST CLOUD
        glPushMatrix();
    glTranslatef(_run3,55,0);
    glColor3ub(195,195,195);
    drawCircle(100.0f,592.0f,35.0f);
     glColor3ub(255,255,255);
    drawCircle(105.0f,595.0f,35.0f);
     glColor3ub(255,255,255);
    drawCircle(125.0f,615.0f,35.0f);
    glColor3ub(255,255,255);
    drawCircle(145.0f,645.0f,35.0f);
    glColor3ub(195,195,195);
    drawCircle(185.0f,635.0f,35.0f);
    glColor3ub(255,255,255);
    drawCircle(190.0f,640.0f,35.0f);
      glColor3ub(195,195,195);
    drawCircle(148.0f,595.0f,35.0f);
      glColor3ub(255,255,255);
    drawCircle(150.0f,600.0f,35.0f);
      glColor3ub(255,255,255);
    drawCircle(200.0f,600.0f,35.0f);


    glColor3ub(255,255,255);
    drawCircle(250.0f,600.0f,35.0f);

    glColor3ub(255,255,255);
    drawCircle(250.0f,650.0f,35.0f);

    glColor3ub(255,255,255);
    drawCircle(270.0f,620.0f,35.0f);

    glPopMatrix();

    //2ND CLOUD


     glPushMatrix();
    glTranslatef(_run4,55,0);
    glColor3ub(195,195,195);
    drawCircle(750.0f,592.0f,35.0f);
     glColor3ub(255,255,255);
    drawCircle(755.0f,595.0f,35.0f);
     glColor3ub(255,255,255);
    drawCircle(775.0f,615.0f,35.0f);
    glColor3ub(255,255,255);
    drawCircle(795.0f,645.0f,35.0f);
    glColor3ub(195,195,195);
    drawCircle(835.0f,635.0f,35.0f);
    glColor3ub(255,255,255);
    drawCircle(840.0f,640.0f,35.0f);
      glColor3ub(195,195,195);
    drawCircle(798.0f,595.0f,35.0f);
      glColor3ub(255,255,255);
    drawCircle(800.0f,600.0f,35.0f);

      glColor3ub(255,255,255);
    drawCircle(850.0f,600.0f,35.0f);

    glColor3ub(255,255,255);
    drawCircle(900.0f,600.0f,35.0f);

    glColor3ub(255,255,255);
    drawCircle(900.0f,650.0f,35.0f);

    glColor3ub(255,255,255);
    drawCircle(920.0f,620.0f,35.0f);


    glPopMatrix();


    glutPostRedisplay();}


    }


void house()
{
    glPushMatrix();
	glTranslated(0.0,-20,0.0);
	//House no.1
	glColor3ub(0, 0, 255);
	glBegin(GL_QUADS);
	glVertex2i(5, 520);
	glVertex2i(60, 520);
	glVertex2i(60, 450);
	glVertex2i(5, 450);
	glEnd();
	//right shape of house
	glColor3ub(25, 25, 112);
	glBegin(GL_QUADS);
	glVertex2i(60, 520);
	glVertex2i(68, 500);
	glVertex2i(68, 450);
	glVertex2i(60, 450);
	glEnd();

	//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(10, 470);
glVertex2i(30, 470);
glVertex2i(30, 500);
glVertex2i(10, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(35, 470);
glVertex2i(55, 470);
glVertex2i(55, 500);
glVertex2i(35, 500);
glEnd();

//House no.2
glColor3ub (32,178,170);
glBegin(GL_QUADS);
glVertex2i(70, 550);
glVertex2i(125, 550);
glVertex2i(125, 450);
glVertex2i(70, 450);
glEnd();
//right side
glColor3ub (0,128,128);
glBegin(GL_QUADS);
glVertex2i(125, 550);
glVertex2i(133, 535);
glVertex2i(133, 450);
glVertex2i(125, 450);
glEnd();
//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(75, 470);
glVertex2i(95, 470);
glVertex2i(95, 500);
glVertex2i(75, 500);
glEnd();

//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(100, 470);
glVertex2i(120, 470);
glVertex2i(120, 500);
glVertex2i(100, 500);
glEnd();

//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(75, 540);
glVertex2i(95, 540);
glVertex2i(95, 510);
glVertex2i(75, 510);
glEnd();

//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(100, 540);
glVertex2i(120, 540);
glVertex2i(120, 510);
glVertex2i(100, 510);
glEnd();

//House no.3
glColor3ub (72,61, 139);
glBegin(GL_QUADS);
glVertex2i(135, 580);
glVertex2i(180, 580);
glVertex2i(180, 450);
glVertex2i(135, 450);
glEnd();
//right side
glColor3ub (75,0, 130);
glBegin(GL_QUADS);
glVertex2i(180, 580);
glVertex2i(188, 560);
glVertex2i(188, 450);
glVertex2i(180, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(140, 470);
glVertex2i(155, 470);
glVertex2i(155, 500);
glVertex2i(140, 500);
glEnd();


//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(160, 470);
glVertex2i(175, 470);
glVertex2i(175, 500);
glVertex2i(160, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(140, 540);
glVertex2i(155, 540);
glVertex2i(155, 510);
glVertex2i(140, 510);
glEnd();

//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(160, 540);
glVertex2i(175, 540);
glVertex2i(175, 510);
glVertex2i(160, 510);
glEnd();

//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(140, 550);
glVertex2i(155, 550);
glVertex2i(155, 570);
glVertex2i(140, 570);
glEnd();

//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(160, 550);
glVertex2i(175, 550);
glVertex2i(175, 570);
glVertex2i(160, 570);
glEnd();


//House no.4
glColor3ub (165,42,42);
glBegin(GL_QUADS);
glVertex2i(190, 510);
glVertex2i(245, 510);
glVertex2i(245, 450);
glVertex2i(190, 450);
glEnd();
//right shape
glColor3ub (128, 0, 0);
glBegin(GL_QUADS);
glVertex2i(245, 510);
glVertex2i(253, 495);
glVertex2i(253, 450);
glVertex2i(245, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(215, 470);
glVertex2i(195, 470);
glVertex2i(195, 500);
glVertex2i(215, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(220, 470);
glVertex2i(240, 470);
glVertex2i(240, 500);
glVertex2i(220, 500);
glEnd();

//House no.5
glColor3ub (0, 0, 255);
glBegin(GL_QUADS);
glVertex2i(255, 630);
glVertex2i(310, 630);
glVertex2i(310, 450);
glVertex2i(255, 450);
glEnd();
//right shape
glColor3ub (25,25,112);
glBegin(GL_QUADS);
glVertex2i(310, 630);
glVertex2i(318, 600);
glVertex2i(318, 450);
glVertex2i(310, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(260, 470);
glVertex2i(280, 470);
glVertex2i(280, 500);
glVertex2i(260, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(285, 470);
glVertex2i(305, 470);
glVertex2i(305, 500);
glVertex2i(285, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(260, 510);
glVertex2i(280, 510);
glVertex2i(280, 540);
glVertex2i(260, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(285, 510);
glVertex2i(305, 510);
glVertex2i(305, 540);
glVertex2i(285, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(260, 550);
glVertex2i(280, 550);
glVertex2i(280, 580);
glVertex2i(260, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(285, 550);
glVertex2i(305, 550);
glVertex2i(305, 580);
glVertex2i(285, 580);
glEnd();
//window 7
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(260, 590);
glVertex2i(280, 590);
glVertex2i(280, 620);
glVertex2i(260, 620);
glEnd();
//window 8
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(285, 590);
glVertex2i(305, 590);
glVertex2i(305, 620);
glVertex2i(285, 620);
glEnd();
//House no.6
glColor3ub (153,50,204);
glBegin(GL_QUADS);
glVertex2i(320, 590);
glVertex2i(380, 590);
glVertex2i(380, 450);
glVertex2i(320, 450);
glEnd();

//right shape
glColor3ub (139,0,139);
glBegin(GL_QUADS);
glVertex2i(380, 590);
glVertex2i(388, 570);
glVertex2i(388, 450);
glVertex2i(380, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(325, 470);
glVertex2i(345, 470);
glVertex2i(345, 500);
glVertex2i(325, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(350, 470);
glVertex2i(370, 470);
glVertex2i(370, 500);
glVertex2i(350, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(325, 510);
glVertex2i(345, 510);
glVertex2i(345, 540);
glVertex2i(325, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(350, 510);
glVertex2i(370, 510);
glVertex2i(370, 540);
glVertex2i(350, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(325, 550);
glVertex2i(345, 550);
glVertex2i(345, 580);
glVertex2i(325, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(350, 550);
glVertex2i(370, 550);
glVertex2i(370, 580);
glVertex2i(350, 580);
glEnd();



//House no.7
glColor3ub (128, 128, 128);
glBegin(GL_QUADS);
glVertex2i(390, 520);
glVertex2i(445, 520);
glVertex2i(445, 450);
glVertex2i(390, 450);
glEnd();
//right shape
glColor3ub (105, 105, 105);
glBegin(GL_QUADS);
glVertex2i(445, 520);
glVertex2i(453, 505);
glVertex2i(453, 450);
glVertex2i(445, 450);
glEnd();
//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(395, 470);
glVertex2i(415, 470);
glVertex2i(415, 510);
glVertex2i(395, 510);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(420, 470);
glVertex2i(440, 470);
glVertex2i(440, 510);
glVertex2i(420, 510);
glEnd();


//House no.8
glColor3ub (143,188,143);
glBegin(GL_QUADS);
glVertex2i(455, 650);
glVertex2i(510, 650);
glVertex2i(510, 450);
glVertex2i(455, 450);
glEnd();
//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(460, 470);
glVertex2i(480, 470);
glVertex2i(480, 500);
glVertex2i(460, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(485, 470);
glVertex2i(505, 470);
glVertex2i(505, 500);
glVertex2i(485, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(460, 510);
glVertex2i(480, 510);
glVertex2i(480, 540);
glVertex2i(460, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(485, 510);
glVertex2i(505, 510);
glVertex2i(505, 540);
glVertex2i(485, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(460, 550);
glVertex2i(480, 550);
glVertex2i(480, 580);
glVertex2i(460, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(485, 550);
glVertex2i(505, 550);
glVertex2i(505, 580);
glVertex2i(485, 580);
glEnd();
//window 7
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(460, 590);
glVertex2i(480, 590);
glVertex2i(480, 620);
glVertex2i(460, 620);
glEnd();
//window 8
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(485, 590);
glVertex2i(505, 590);
glVertex2i(505, 620);
glVertex2i(485, 620);
glEnd();

//window 9
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(460, 625);
glVertex2i(480, 625);
glVertex2i(480, 645);
glVertex2i(460, 645);
glEnd();
//window 10
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(485, 625);
glVertex2i(505, 625);
glVertex2i(505, 645);
glVertex2i(485, 645);
glEnd();


//House no.9
glColor3ub (220,20,60);
glBegin(GL_QUADS);
glVertex2i(525, 630);
glVertex2i(580, 630);
glVertex2i(580, 450);
glVertex2i(525, 450);
glEnd();
//right shape
glColor3ub (139, 0, 0);
glBegin(GL_QUADS);
glVertex2i(525, 630);
glVertex2i(517, 610);
glVertex2i(517, 450);
glVertex2i(525, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(530, 470);
glVertex2i(550, 470);
glVertex2i(550, 500);
glVertex2i(530, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(555, 470);
glVertex2i(575, 470);
glVertex2i(575, 500);
glVertex2i(555, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(530, 510);
glVertex2i(550, 510);
glVertex2i(550, 540);
glVertex2i(530, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(555, 510);
glVertex2i(575, 510);
glVertex2i(575, 540);
glVertex2i(555, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(530, 550);
glVertex2i(550, 550);
glVertex2i(550, 580);
glVertex2i(530, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(555, 550);
glVertex2i(575, 550);
glVertex2i(575, 580);
glVertex2i(555, 580);
glEnd();
//window 7
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(530, 590);
glVertex2i(550, 590);
glVertex2i(550, 620);
glVertex2i(530, 620);
glEnd();
//window 8
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(555, 590);
glVertex2i(575, 590);
glVertex2i(575, 620);
glVertex2i(555, 620);
glEnd();


//House no.10
glColor3ub (60,179,113);
glBegin(GL_QUADS);
glVertex2i(590, 650);
glVertex2i(645, 650);
glVertex2i(645, 450);
glVertex2i(590, 450);
glEnd();
//right shape
glColor3ub (46,139,87);
glBegin(GL_QUADS);
glVertex2i(590, 650);
glVertex2i(582, 630);
glVertex2i(582, 450);
glVertex2i(590, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(595, 470);
glVertex2i(615, 470);
glVertex2i(615, 500);
glVertex2i(595, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(620, 470);
glVertex2i(640, 470);
glVertex2i(640, 500);
glVertex2i(620, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(595, 510);
glVertex2i(615, 510);
glVertex2i(615, 540);
glVertex2i(595, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(620, 510);
glVertex2i(640, 510);
glVertex2i(640, 540);
glVertex2i(620, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(595, 550);
glVertex2i(615, 550);
glVertex2i(615, 580);
glVertex2i(595, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(620, 550);
glVertex2i(640, 550);
glVertex2i(640, 580);
glVertex2i(620, 580);
glEnd();
//window 7
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(595, 590);
glVertex2i(615, 590);
glVertex2i(615, 620);
glVertex2i(595, 620);
glEnd();
//window 8
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(620, 590);
glVertex2i(640, 590);
glVertex2i(640, 620);
glVertex2i(620, 620);
glEnd();

//window 9
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(595, 645);
glVertex2i(640, 645);
glVertex2i(640, 625);
glVertex2i(595, 625);
glEnd();

//House no.11
glColor3ub (240,128,128);
glBegin(GL_QUADS);
glVertex2i(655, 590);
glVertex2i(710, 590);
glVertex2i(710, 450);
glVertex2i(655, 450);
glEnd();

//right shape
glColor3ub (205,92,92);
glBegin(GL_QUADS);
glVertex2i(655, 590);
glVertex2i(647, 575);
glVertex2i(647, 450);
glVertex2i(655, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(660, 470);
glVertex2i(680, 470);
glVertex2i(680, 500);
glVertex2i(660, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(685, 470);
glVertex2i(705, 470);
glVertex2i(705, 500);
glVertex2i(685, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(660, 510);
glVertex2i(680, 510);
glVertex2i(680, 540);
glVertex2i(660, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(685, 510);
glVertex2i(705, 510);
glVertex2i(705, 540);
glVertex2i(685, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(660, 550);
glVertex2i(680, 550);
glVertex2i(680, 580);
glVertex2i(660, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(685, 550);
glVertex2i(705, 550);
glVertex2i(705, 580);
glVertex2i(685, 580);
glEnd();

//House no.12
glColor3ub (160, 82, 45);
glBegin(GL_QUADS);
glVertex2i(720, 550);
glVertex2i(775, 550);
glVertex2i(775, 450);
glVertex2i(720, 450);
glEnd();

//right shape
glColor3ub (139, 69, 19);
glBegin(GL_QUADS);
glVertex2i(720, 550);
glVertex2i(712, 535);
glVertex2i(712, 450);
glVertex2i(720, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(725, 470);
glVertex2i(745, 470);
glVertex2i(745, 500);
glVertex2i(725, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(750, 470);
glVertex2i(770, 470);
glVertex2i(770, 500);
glVertex2i(750, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(725, 510);
glVertex2i(745, 510);
glVertex2i(745, 540);
glVertex2i(725, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(750, 510);
glVertex2i(770, 510);
glVertex2i(770, 540);
glVertex2i(750, 540);
glEnd();
//House no.13
glColor3ub (0, 191, 255);
glBegin(GL_QUADS);
glVertex2i(785, 510);
glVertex2i(840, 510);
glVertex2i(840, 450);
glVertex2i(785, 450);
glEnd();
//right shape
glColor3ub (30, 144, 255);
glBegin(GL_QUADS);
glVertex2i(785, 510);
glVertex2i(777, 500);
glVertex2i(777, 450);
glVertex2i(785, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(790, 470);
glVertex2i(810, 470);
glVertex2i(810, 500);
glVertex2i(790, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(815, 470);
glVertex2i(835, 470);
glVertex2i(835, 500);
glVertex2i(815, 500);
glEnd();
//window

//House no.14
glColor3ub (165, 42, 42);
glBegin(GL_QUADS);
glVertex2i(850, 520);
glVertex2i(905, 520);
glVertex2i(905, 450);
glVertex2i(850, 450);
glEnd();
//right shape
glColor3ub (128, 0, 0);
glBegin(GL_QUADS);
glVertex2i(850, 520);
glVertex2i(842, 510);
glVertex2i(842, 450);
glVertex2i(850, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(855, 470);
glVertex2i(875, 470);
glVertex2i(875, 500);
glVertex2i(855, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(880, 470);
glVertex2i(900, 470);
glVertex2i(900, 500);
glVertex2i(880, 500);
glEnd();

//House no.15
glColor3ub (68, 179, 113);
glBegin(GL_QUADS);
glVertex2i(915, 650);
glVertex2i(970, 650);
glVertex2i(970, 450);
glVertex2i(915, 450);
glEnd();
//right shape
glColor3ub (46,139, 87);
glBegin(GL_QUADS);
glVertex2i(915, 650);
glVertex2i(907, 630);
glVertex2i(907, 450);
glVertex2i(915, 450);
glEnd();
//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(920, 470);
glVertex2i(940, 470);
glVertex2i(940, 500);
glVertex2i(920, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(945, 470);
glVertex2i(965, 470);
glVertex2i(965, 500);
glVertex2i(945, 500);
glEnd();
//window 3
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(920, 510);
glVertex2i(940, 510);
glVertex2i(940, 540);
glVertex2i(920, 540);
glEnd();
//window 4
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(945, 510);
glVertex2i(965, 510);
glVertex2i(965, 540);
glVertex2i(945, 540);
glEnd();
//window 5
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(920, 550);
glVertex2i(940, 550);
glVertex2i(940, 580);
glVertex2i(920, 580);
glEnd();
//window 6
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(945, 550);
glVertex2i(965, 550);
glVertex2i(965, 580);
glVertex2i(945, 580);
glEnd();
//window 7
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(920, 590);
glVertex2i(940, 590);
glVertex2i(940, 620);
glVertex2i(920, 620);
glEnd();
//window 8
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(945, 590);
glVertex2i(965, 590);
glVertex2i(965, 620);
glVertex2i(945, 620);
glEnd();
//house no.16
glColor3ub (205,133,63);
glBegin(GL_QUADS);
glVertex2i(980, 550);
glVertex2i(1020, 550);
glVertex2i(1020, 450);
glVertex2i(980, 450);
glEnd();
//right shape
glColor3ub (210,105,30);
glBegin(GL_QUADS);
glVertex2i(980, 550);
glVertex2i(972, 540);
glVertex2i(972, 450);
glVertex2i(980, 450);
glEnd();

//window 1
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(985, 470);
glVertex2i(1015, 470);
glVertex2i(1015, 500);
glVertex2i(985, 500);
glEnd();
//window 2
glColor3ub (wcr, wcg, wcb);
glBegin(GL_QUADS);
glVertex2i(985, 510);
glVertex2i(1015, 510);
glVertex2i(1015, 540);
glVertex2i(985, 540);
glEnd();



	glPopMatrix();

	//building side border
	glColor3ub(0, 0 , 0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 425);
	glVertex2i(1024, 425);
	glVertex2i(1024, 430);
	glVertex2i(0, 430);
	glEnd();

    glutPostRedisplay();
}

void moon()
{

    if(Bmoon){
    glPushMatrix();
    glTranslatef(450,90,0);
    glColor3ub(244,241,201);
    drawCircle(100.0f,592.0f,50.0f);
    glPopMatrix();}



}


void sun()
{

    if(Bsun){
    glPushMatrix();
    glTranslatef(450,10,0);
    glColor3ub(252, 212, 64);
    drawCircle(100.0f,592.0f,100.0f);
    glPopMatrix();}



}


void ocean()
{
    //Atlantic Ocean

	glBegin(GL_POLYGON);


    glColor3ub(255, 255, 255);
	glVertex2i(0, 250);


    glColor3ub(255, 255, 255);
	glVertex2i(1024, 250);

    glColor3ub(ocr, ocg, ocb);
	glVertex2i(1024, 425);

	glColor3ub(ocr, ocg, ocb);
	glVertex2i(0, 425);

	glEnd();
}

void ship()
{
    //ship 2 base
    glPushMatrix();
    glTranslated(-_run2,-25,0.0);
	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);
	glVertex2i(800, 420);
	glVertex2i(900, 420);
	glVertex2i(900, 450);
	glVertex2i(770, 450);
	glEnd();

	//ship 2 tops
	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2i(800, 450);
	glVertex2i(890, 450);
	glVertex2i(890, 470);
	glVertex2i(840, 470);
	glEnd();

	glColor3ub(47, 79, 79);
	glBegin(GL_POLYGON);
	glVertex2i(850, 470);
	glVertex2i(880, 470);
	glVertex2i(880, 490);
	glVertex2i(860, 490);
	glEnd();

	//ship 2 window
	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(840, 455);
	glVertex2i(855, 455);
	glVertex2i(855, 465);
	glVertex2i(840, 465);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(865, 455);
	glVertex2i(880, 455);
	glVertex2i(880, 465);
	glVertex2i(865, 465);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(865, 475);
	glVertex2i(875, 475);
	glVertex2i(875, 485);
	glVertex2i(865, 485);
	glEnd();
	glPopMatrix();

	//ship 1 base
	glPushMatrix();
	glTranslated(_run2,-40,0.0);
	glColor3ub(128, 128, 128);
	glBegin(GL_POLYGON);
	glVertex2i(200, 350);
	glVertex2i(400, 350);
	glVertex2i(460, 400);
	glVertex2i(200, 400);
	glEnd();

	//ship 1 tops
	glColor3ub(105, 105, 105);
	glBegin(GL_POLYGON);
	glVertex2i(220, 400);
	glVertex2i(380, 400);
	glVertex2i(340, 430);
	glVertex2i(220, 430);
	glEnd();

	glColor3ub(112, 128, 144);
	glBegin(GL_POLYGON);
	glVertex2i(230, 430);
	glVertex2i(330, 430);
	glVertex2i(300, 455);
	glVertex2i(230, 455);
	glEnd();

	glColor3ub(47, 79, 79);
	glBegin(GL_POLYGON);
	glVertex2i(240, 455);
	glVertex2i(290, 455);
	glVertex2i(270, 475);
	glVertex2i(240, 475);
	glEnd();

	//ship 1 window
	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(240, 405);
	glVertex2i(260, 405);
	glVertex2i(260, 425);
	glVertex2i(240, 425);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(270, 405);
	glVertex2i(290, 405);
	glVertex2i(290, 425);
	glVertex2i(270, 425);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(300, 405);
	glVertex2i(320, 405);
	glVertex2i(320, 425);
	glVertex2i(300, 425);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(245, 435);
	glVertex2i(265, 435);
	glVertex2i(265, 450);
	glVertex2i(245, 450);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(280, 435);
	glVertex2i(300, 435);
	glVertex2i(300, 450);
	glVertex2i(280, 450);
	glEnd();

	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);
	glVertex2i(250, 460);
	glVertex2i(270, 460);
	glVertex2i(270, 470);
	glVertex2i(250, 470);
	glEnd();
	glPopMatrix();
}

void streetlight()
{
    //light stand 1
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(138, 250);
	glVertex2i(148, 250);
	glVertex2i(148, 320);
	glVertex2i(138, 320);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(105, 285);
	glVertex2i(110, 285);
	glVertex2i(110, 305);
	glVertex2i(105, 305);
	glEnd();

	glColor3ub(0, 0, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(105, 285);
	glVertex2i(180, 285);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(175, 285);
	glVertex2i(180, 285);
	glVertex2i(180, 305);
	glVertex2i(175, 305);
	glEnd();


		//Halogen lamp 1
	glPushMatrix();
	glTranslatef(143, 335, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 17;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(107, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(177, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	//light stand 2
	glPushMatrix();
	glTranslated(70,0,0);
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(438, 250);
	glVertex2i(448, 250);
	glVertex2i(448, 320);
	glVertex2i(438, 320);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(405, 285);
	glVertex2i(410, 285);
	glVertex2i(410, 305);
	glVertex2i(405, 305);
	glEnd();

	glColor3ub(0, 0, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(405, 285);
	glVertex2i(480, 285);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(475, 285);
	glVertex2i(480, 285);
	glVertex2i(480, 305);
	glVertex2i(475, 305);
	glEnd();
	glPopMatrix();




	//Halogen lamp 2
	glPushMatrix();
	glTranslatef(513, 335, 0);

	glBegin(GL_POLYGON);
    glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 17;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(477, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(547, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();



	//light stand 3
	glPushMatrix();
	glTranslated(120,0,0);
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(738, 250);
	glVertex2i(748, 250);
	glVertex2i(748, 320);
	glVertex2i(738, 320);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(705, 285);
	glVertex2i(710, 285);
	glVertex2i(710, 305);
	glVertex2i(705, 305);
	glEnd();

	glColor3ub(0, 0, 0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(705, 285);
	glVertex2i(780, 285);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(775, 285);
	glVertex2i(780, 285);
	glVertex2i(780, 305);
	glVertex2i(775, 305);
	glEnd();

    glPopMatrix();

	//Halogen lamp 3
	glPushMatrix();
	glTranslatef(863, 335, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 17;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(827, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(897, 319, 0);


	glBegin(GL_POLYGON);
	glColor3ub(lcr, lcg, lcb);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 14;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
}

void road()
{
    //road boarder
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(0, 230);
	glVertex2i(1024, 255);
	glVertex2i(1024, 265);
	glVertex2i(0, 260);
	glEnd();


	//border block 1
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(0, 234);
	glVertex2i(128, 237);
	glVertex2i(128, 261);
	glVertex2i(0, 260);
	glEnd();



	//border block 2
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(256, 240);
	glVertex2i(384, 243);
	glVertex2i(384, 263);
	glVertex2i(256, 262);
	glEnd();



	//border block 3
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(512, 245);
	glVertex2i(640, 248);
	glVertex2i(640, 264);
	glVertex2i(512, 263);
	glEnd();


	//border block 4
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(768, 250);
	glVertex2i(896, 252);
	glVertex2i(896, 264);
	glVertex2i(768, 264);
	glEnd();


	//street
	glColor3ub(52, 52, 52);
	glBegin(GL_QUADS);
	glVertex2i(0, 8);
	glVertex2i(1024, 8);
	glVertex2i(1024, 255);
	glVertex2i(0, 234);
	glEnd();

	//street cross line 1
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(135, 108);
	glVertex2i(225, 110);
	glVertex2i(215, 115);
	glVertex2i(125, 115);
	glEnd();

	//street cross line 2
	glPushMatrix();
	glColor3ub(255, 255, 255);
	glTranslated(225,9,0.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 108);
	glVertex2i(225, 110);
	glVertex2i(215, 115);
	glVertex2i(125, 115);
	glEnd();
	glPopMatrix();



	//street cross line 3
	glPushMatrix();
	glColor3ub(255, 255, 255);
	glTranslated(450,18,0.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 108);
	glVertex2i(225, 110);
	glVertex2i(215, 115);
	glVertex2i(125, 115);
	glEnd();
	glPopMatrix();

	//street cross line 4
	glPushMatrix();
	glColor3ub(255, 255, 255);
	glTranslated(675,27,0.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 108);
	glVertex2i(225, 110);
	glVertex2i(215, 115);
	glVertex2i(125, 115);
	glEnd();
	glPopMatrix();




	//Bottom border
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(1024, 0);
	glVertex2i(1024, 30);
	glVertex2i(0, 8);
	glEnd();


	//Bottom border of street 1
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(128, 0);
	glVertex2i(256, 0);
	glVertex2i(256, 14);
	glVertex2i(128, 10);
	glEnd();




	//Bottom border of street 2
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(384, 0);
	glVertex2i(512, 0);
	glVertex2i(512, 20);
	glVertex2i(384, 16);
	glEnd();




	//Bottom border of street 3
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(640, 0);
	glVertex2i(768, 0);
	glVertex2i(768, 24);
	glVertex2i(640, 20);
	glEnd();




	//Bottom border of street 4
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(896, 0);
	glVertex2i(1024, 0);
	glVertex2i(1024, 30);
	glVertex2i(896, 26);
	glEnd();
}

void vehicle()
{
    	//bus
    	glPushMatrix();
    	glTranslated(vpos,0.0,0.0);
	glColor3ub(0, 14, 165);
	glBegin(GL_QUADS);
	glVertex2i(50, 180);
	glVertex2i(270, 180);
	glVertex2i(270, 274);
	glVertex2i(50, 274);
	glEnd();


	//bus outside of the window red colour
	glColor3ub(255, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(50, 225);
	glVertex2i(270, 225);
	glVertex2i(270, 274);
	glVertex2i(50, 274);
	glEnd();



	//bus driver window
	glColor3ub(145,202,225);
	glBegin(GL_QUADS);
	glVertex2i(215, 225);
	glVertex2i(270, 225);
	glVertex2i(270, 265);
	glVertex2i(215, 265);
	glEnd();


	//bus 1st window from left
	glColor3ub(255,250,205);
	glBegin(GL_QUADS);
	glVertex2i(60, 231);
	glVertex2i(100, 231);
	glVertex2i(100, 263);
	glVertex2i(60, 263);
	glEnd();

	//bus 2nd window from left
	glColor3ub(255,250,205);
	glBegin(GL_QUADS);
	glVertex2i(110, 231);
	glVertex2i(150, 231);
	glVertex2i(150, 263);
	glVertex2i(110, 263);
	glEnd();


	//bus 3rd window from left
	glColor3ub(255,250,205);
	glBegin(GL_QUADS);
	glVertex2i(160, 231);
	glVertex2i(200, 231);
	glVertex2i(200, 263);
	glVertex2i(160, 263);
	glEnd();


	//door of the bus
	glColor3ub(145,202,225);
	glBegin(GL_QUADS);
	glVertex2i(200, 195);
	glVertex2i(215, 195);
	glVertex2i(215, 225);
	glVertex2i(200, 225);
	glEnd();


	//headlight of the bus
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(270, 206);
	glVertex2i(275, 206);
	glVertex2i(275, 214);
	glVertex2i(270, 214);
	glEnd();

	//Bus Wheel
	glPushMatrix();
	glTranslatef(215, 182, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 21;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(100, 182, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 21;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();



	//car
	glColor3ub(255, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(545, 200);
	glVertex2i(740, 200);
	glVertex2i(720, 250);
	glVertex2i(545, 250);
	glEnd();


	//car roof
	glColor3ub(155,142,39);
	glBegin(GL_QUADS);
	glVertex2i(560, 250);
	glVertex2i(705, 250);
	glVertex2i(675, 280);
	glVertex2i(590, 280);


	//car window 1
	glColor3ub(255,239,174);
	glBegin(GL_QUADS);
	glVertex2i(595, 255);
	glVertex2i(630, 255);
	glVertex2i(630, 275);
	glVertex2i(595, 275);
	glEnd();


    //car window 2
	glColor3ub(255,239,174);
	glBegin(GL_QUADS);
	glVertex2i(640, 255);
	glVertex2i(675, 255);
	glVertex2i(675, 275);
	glVertex2i(640, 275);
	glEnd();


	//car door
	glColor3ub(155,142,39);
	glBegin(GL_QUADS);
	glVertex2i(632, 205);
	glVertex2i(638, 205);
	glVertex2i(638, 250);
	glVertex2i(632, 250);
	glEnd();



	//car headlight
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(730, 220);
	glVertex2i(735, 220);
	glVertex2i(733, 226);
	glVertex2i(728, 226);
	glEnd();

	//Car Wheel
	glPushMatrix();
	glTranslatef(690, 200, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 18;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(595, 200, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 18;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPopMatrix();




	//mini van
	glPushMatrix();
    glTranslated(-vpos,0.0,0.0);
	glColor3ub(75, 0, 130);
	glBegin(GL_QUADS);
	glVertex2i(735, 55);
	glVertex2i(937, 55);
	glVertex2i(937, 120);
	glVertex2i(735, 120);
	glEnd();

	//mini van roof
	glColor3ub(128, 0, 128);
	glBegin(GL_QUADS);
	glVertex2i(800, 120);
	glVertex2i(937, 120);
	glVertex2i(937, 165);
	glVertex2i(800, 165);
	glEnd();

	//mini van driver window
	glColor3ub(145,202,225);
	glBegin(GL_TRIANGLES);
	glVertex2i(735, 120);
	glVertex2i(800, 120);
	glVertex2i(800, 165);
	glEnd();


	//mini van window 1
	glColor3ub(255, 239, 174);
	glBegin(GL_QUADS);
	glVertex2i(810, 126);
	glVertex2i(865, 126);
	glVertex2i(865, 159);
	glVertex2i(810, 159);
	glEnd();

	//mini van window 2
	glColor3ub(255, 239, 174);
	glBegin(GL_QUADS);
	glVertex2i(875, 126);
	glVertex2i(930, 126);
	glVertex2i(930, 159);
	glVertex2i(875, 159);
	glEnd();

	//mini van door
	glColor3ub(145,202,225);
	glBegin(GL_QUADS);
	glVertex2i(800, 75);
	glVertex2i(808, 75);
	glVertex2i(808, 120);
	glVertex2i(800, 120);
	glEnd();


	//mini van headlight
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2i(735, 79);
	glVertex2i(730, 79);
	glVertex2i(730, 87);
	glVertex2i(735, 87);
	glEnd();

	//Mini van Wheel
	glPushMatrix();
	glTranslatef(798, 56, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(900, 56, 0);


	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 20;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
	glPopMatrix();


	glutPostRedisplay();
}


void rain(int value)
{
    if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();


    }


	glutPostRedisplay();
	glutTimerFunc(5, rain, 0);

    glFlush();

}
}

void night()
{
    if( wcr=255, wcg=255, wcb=255){

             wcr=249, wcg=243, wcb=82;
           lcr=249, lcg=243, lcb=82;
           scr=12, scg=20, scb=69;
           ocr=6, ocg=66, ocb=115;}








}




void day(){

if(wcr=249, wcg=243, wcb=82) {wcr=255, wcg=255, wcb=255;
 lcr=255, lcg=255, lcb=255;
 scr=54, scg=162, scb=255;
 ocr=0, ocg=102, ocb=204;}
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


	sky();
	sun();
	cloud();

	star();
	house();
	ocean();
	ship();
	streetlight();
	road();
	vehicle();


	moon();
















	glFlush();
	glutSwapBuffers();
}


void myKeyboard(unsigned char key, int x, int y)
{
  switch (key)
	{
	case 'a':

	    _run += 1.0f;

	break;

	case 's':
	    _run -= 1.0f;

	    break;


    case 'r':
        rainday = true;
        rain(_rain);
        sndPlaySound("rain-01.wav", SND_ASYNC);


        break;

    case 'e':
        rainday = false;
		sndPlaySound(NULL,SND_ASYNC);
        break;

    case 'n':
        Bsun= false;
        Bmoon= true;
        moon();
        night();
        Bcloud=false;
        Bstar=true;
        star();



        break;

    case 'm':

        Bsun= true;
        Bstar=false;
        Bmoon=false;
        Bcloud=true;
        day();



        break;



	default:
	break;
	}
}






void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1024.0, 0.0, 768.0);
}

int main(int argc, char** argv)
{

    printf(" ***** Town View *****\n");
    printf(" Press a key: To Speed Up Cars\n");
    printf(" Press s key: To Start Reverse Cars \n");

    printf(" Press n key: For Night View\n ");
    printf(" Press m key: For Day View \n");

    printf(" Press r key: For Rain View with sound and \n");
    printf(" Press e key: for stop rain \n");

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(400, 100);
	glutCreateWindow("Town View");
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyboard);
	myInit();

	glutTimerFunc(1000, update, 0);

	glutMainLoop();
	return 0;
}
