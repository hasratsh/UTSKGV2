#include<windows.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<math.h>

float Angka=0;
float sumbuX=0;
float sumbuY=1;
float sumbuZ=1;

int flag=0;

void Segitiga()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5,1.0);
    glVertex2f(0.5,1.0);
    glVertex2f(0.0,-0.5*sumbuX);
    glEnd();
}
void Hitung1(double radius)
{
    glBegin(GL_POLYGON);
    for(int i=1;i<360;i++)
    {
        glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));
    }
    glEnd();
    glFlush();
}
 void Hitung2(double radius)
{
    glBegin(GL_POLYGON);
    for(int i=180;i<360;i++)
    {
        glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));
    }
    glEnd();
    glFlush();
}
 void Hitung3(double radius)
{
    glBegin(GL_POLYGON);
    for(int i=0;i<180;i++)
    {
        glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));
        }
        glEnd();

    glFlush();

}
void Tahap()
{

    glBegin(GL_POLYGON);
    glVertex2f(-2.0,2.0);
    glVertex2f(0.0,2.5);
    glVertex2f(2.0,2.0);
    glVertex2f(0.0,-2.0);
    glEnd();
}
void Awan()
{
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslated(0,0,0);
    glScalef(2.8,3.0,1);
    Hitung1(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    glScalef(2.5,3.0,1);
    Hitung1(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(4.3,0,0);
    glScalef(2.8,3.0,1);
    Hitung1(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6.3,0,0);
    glScalef(3.0,3.0,1);
    Hitung1(.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.3,0,0);
    glScalef(3.0,3.0,1);
    Hitung1(.5);
    glPopMatrix();
}

void Tahap2()
{
    glBegin(GL_POLYGON);
    glVertex2f(-1.5,2.0);
    glVertex2f(1.5,1.0);
    glVertex2f(0.0,-2.0);
   	glVertex2f(-0.5,0.8);
   	glVertex2f(-1.5,1.0);
    glEnd();
}
void Garis()
{
    glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-2,0);
    glVertex2f(2,0);
    glEnd();
}
void gas()
{
    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.3,3,0);
    Segitiga();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(3.3,3,0);
    glScalef(1,1.15,1);
    Segitiga();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.5,3,0);
    Segitiga();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.7,3,0);
    Segitiga();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.8,3,0);
    Segitiga();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.9,3,0);
    Segitiga();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(4.0,3,0);
    glScalef(1,1.2,1);
    Segitiga();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.7);
    glPushMatrix();
    glTranslatef(4.1,3,0);
    glScalef(1,1.35,1);
    Segitiga();
	glPopMatrix();

	glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(3.6,3,0);
    glScalef(1,1.15,1);
    Segitiga();
	glPopMatrix();
}
void roket()
{
    //Gas roket
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslatef(4.0,-9.6,0);
    glScalef(1.1,3,1);
    gas();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(8,5,0);
    glScalef(.5,2.1,1);
    glColor3f(0.0, 0.0, 0.0);
    Hitung1(3);
	glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(8,5,0);
    glScalef(.45,2.0,1);
    Hitung1(3);
	glPopMatrix();

    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,8,0);
    glScalef(.382,1,1);
    Hitung3(3);
	glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,8,0);
    glScalef(.65,1,1);
    Garis();
	glPopMatrix();

    glColor3f(0.745, 0.823, 0.835);
    glPushMatrix();
    glTranslatef(8,2.5,0);
    glScalef(.63,1.75,1);
    Hitung2(2);
	glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,2.5,0);
    glScalef(.65,1,1);
    Garis();
	glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    Hitung1(1.7);
	glPopMatrix();

    glColor3f(0.745, 0.823, 0.835);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    Hitung1(1.45);
	glPopMatrix();

	glColor3f(0.419, 0.870, 0.937);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    Hitung1(1);
	glPopMatrix();


    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,1,0);
    glScalef(1,1.1,1);
    Hitung3(.4);
	glPopMatrix();
    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(8,-1,0);
    glScalef(.2,1,1);
    Tahap();
	glPopMatrix();


    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(9.5,0,0);
    glScalef(.4,1,1);
    Tahap2();
	glPopMatrix();

    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(6.5,0,0);
    glScalef(-.4,1,1);
    Tahap2();
	glPopMatrix();
}
void gasRoket()
{
    glPushMatrix();
    glTranslated(0,0,0);
    glScalef(3.8,3.0,1);
    Hitung3(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    glScalef(2.5,3.0,1);
    Hitung3(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(4.3,0,0);
    glScalef(2.8,3.0,1);
    Hitung3(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6.3,0,0);
    glScalef(3.0,3.0,1);
    Hitung3(.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.3,0,0);
    glScalef(3.0,3.0,1);
    Hitung3(.5);
    glPopMatrix();
}
GLfloat s=0, t=0,k=0,l=0;
void geserKanan_kiri(unsigned char key,int x, int y)
{
    if(key=='a')
    {
        s-=1;
    }
    else if(key=='d')
    {
        s+=1;
    }
    else if(key=='w')
    {
        t+=1;
    }
    else if(key=='s')
    {
        t-=1;
    }
}

void display()
{
    Tahap2();
    Tahap();
    Segitiga();
    gas();
    roket();
    gasRoket();
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(1+(sumbuY/200),10,0);
    glScalef(.23,.2,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(3+(sumbuY/200),10.5,0);
    glScalef(.23,.2,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(6+(sumbuY/200),10,0);
    glScalef(.23,.2,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(8.3+(sumbuY/200),10.4,0);
    glScalef(.23,.2,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.2+(sumbuY/200),10,0);
    glScalef(.14,.14,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(4.2+(sumbuY/200),9,0);
    glScalef(.14,.14,1);
    Awan();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(10.2+(sumbuY/200),9,0);
    glScalef(.14,.14,1);
    Awan();
	glPopMatrix();



    //Badan Roket
    glPushMatrix();
    glTranslatef(s,t,0);
    glTranslatef(-1,1*Angka/60,0);
    glScalef(.8,.6,1);
    roket();
	glPopMatrix();
	if(Angka>3&&sumbuZ==1)
        {
            glColor4f(0.635, 0.525, 0.525,.8);
            glPushMatrix();
            glTranslatef(-2.5,-3.0,0);
            glScalef(.3,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,1);
            glPushMatrix();
            glTranslatef(1.5,-2.5,0);
            glScalef(.3,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,1);
            glPushMatrix();
            glTranslatef(0.5,-3.0,0);
            glScalef(.2,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,.7);
            glPushMatrix();
            glTranslatef(-0.5,-3.0,0);
            glScalef(.2,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,.7);
            glPushMatrix();
            glTranslatef(2.3,-3.0,0);
            glScalef(.2,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,.7);
            glPushMatrix();
            glTranslatef(3.3,-3.0,0);
            glScalef(.4,.4+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();


            glPushMatrix();
            glTranslatef(8.5,-3.0,0);
            glScalef(.3,.6+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,1);
            glPushMatrix();
            glTranslatef(4.5,-2,5);
            glScalef(.3,.6+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,.7);
            glPushMatrix();
            glTranslatef(6,-2.5,0);
            glScalef(.3,1+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,1);
            glPushMatrix();
            glTranslatef(6.5,-3.0,0);
            glScalef(.3,.9+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();


            glPushMatrix();
            glTranslatef(8.5,-3.0,0);
            glScalef(.3,.8+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();

            glColor4f(0.635, 0.525, 0.525,1);
            glPushMatrix();
            glTranslatef(9.8,-3.0,0);
            glScalef(.3,.6+(sumbuY/250),1);
            gasRoket();
            glPopMatrix();
            }
            glFlush();
            glutSwapBuffers();
        }

void Terbang(int v) {
    Angka++;
    sumbuX++;

    if(flag==0)
    {
        sumbuY++;
    if(sumbuY>50)
        {
            flag=1;
        }
    }
    if(flag==1){
        sumbuY--;
        if(sumbuY==-100)
            {
            flag=0;
            sumbuZ=0;
        }
    }
    if(sumbuX>2)
    {
        sumbuX=0;
    }
    if(Angka>1200)
    {
        Angka=0;
        sumbuZ=100;
    }
    glutPostRedisplay();
    glutTimerFunc(30,Terbang,0);
}
void init() {
	glClearColor(0, 0, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glOrtho(-1, 12, -3, 12, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(600,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Animasi Roket");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(200,Terbang,0);
    glutKeyboardFunc(geserKanan_kiri);
    glutMainLoop();
    return 0;
}

