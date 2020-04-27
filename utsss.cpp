#include<GL/glut.h>
#include<math.h>

float Angka=0;

float sumbuX=0;
float sumbuY=1;
float sumbuZ=1;

int flag=0;

void Segitiga()
{
	glBegin(GL_TRIANGLES);
		glColor3f(1, 1, 1);
		glVertex2f(-0.4,-0.9);
		glColor3f(1, 0, 0.5);
		glVertex2f(0.4,-0.9);
		glColor3f(0, 1, 1);
		glVertex2f(0.0,-0.1);
	glEnd();
}

void Segitiga2()
{
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.4,-0.9);
		glVertex2f(0.4,-0.9);
		glVertex2f(0.0,-0.1);
	glEnd();
}
void Segitiga3()
{
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.4,-0.9);
		glVertex2f(0.4,-0.9);
		glVertex2f(0.0,-0.1);
	glEnd();
}
void Segitiga4()
{
	glColor3f(1, 1, 1);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.4,-0.9);
		glVertex2f(0.4,-0.9);
		glVertex2f(0.0,-0.1);
	glEnd();
}

void roket()
{			
	glPushMatrix();
    glTranslatef(4,2,0);
    glScalef(4,4.2,4);
    Segitiga2();
	glPopMatrix();
	
    glPushMatrix();
    glTranslatef(4,3,0);
    glScalef(5,5,5);
    Segitiga();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(4,2,0);
    glScalef(2,4,2);
    Segitiga3();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(4,2,0);
    glScalef(1,2,1);
    Segitiga4();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(8,4,0);
    glScalef(4,4.2,4);
    Segitiga2();
	glPopMatrix();
	
    glPushMatrix();
    glTranslatef(8,5,0);
    glScalef(5,5,5);
    Segitiga();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(8,4,0);
    glScalef(2,4,2);
    Segitiga3();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(8,4,0);
    glScalef(1,2,1);
    Segitiga4();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(12,2,0);
    glScalef(4,4.2,4);
    Segitiga2();
	glPopMatrix();
	
    glPushMatrix();
    glTranslatef(12,3,0);
    glScalef(5,5,5);
    Segitiga();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(12,2,0);
    glScalef(2,4,2);
    Segitiga3();
	glPopMatrix();
	
	glPushMatrix();
    glTranslatef(12,2,0);
    glScalef(1,2,1);
    Segitiga4();
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
    roket();
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(s,t,0);
    glTranslatef(-1,1*Angka/60,0);
    glScalef(.8,.6,1);
    roket();
	glPopMatrix();
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
    glutPostRedisplay();
    glutTimerFunc(30,Terbang,0);
}
void init() {
	glClearColor(1,1,0.4,0.7);
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
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Formasi Pesawat");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(200,Terbang,0);
    glutKeyboardFunc(geserKanan_kiri);
    glutMainLoop();
    return 0;
}

