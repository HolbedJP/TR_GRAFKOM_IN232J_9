#include<windows.h>
#include<gl/glut.h>
#include <math.h>
#include <stdio.h>


void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);


float xrot =0.f;
float yrot = 0.f;
float xdiff = 0.f;
float ydiff = 0.f;
bool mouseDown = false;
int is_depth;

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 50);
	glutCreateWindow("TR_GRAFKOM_J_9");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutReshapeFunc(ukuran);
	glutDisplayFunc(tampil);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
  glEnable(GL_COLOR_MATERIAL);
  glEnable(GL_LIGHT0);

	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(3.5);
	glLineWidth(1);
}


void tampil(void)
{
	glPushMatrix();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	gluLookAt(0,0,3,0,0,0,0,1,0);
	glRotatef(xrot, 1, 0,0);
	glRotatef(yrot, 0,1,0);

//ELISA RAHMAN WIJAYA - 672018248
//########################################################################################################################################
//PONDASI
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//AWALAN
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
//BAWAH
   glVertex3f(-100,-50,50);
   glVertex3f(100,-50,50);
   glVertex3f(100,-50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-50,50);
//DEPAN
   glVertex3f(-100,50,50);
   glVertex3f(100,50,50);
    glVertex3f(100,-50,50);
   glVertex3f(-100,-50,50);
    glVertex3f(-100,50,50);
//KIRI
   glVertex3f(-100,50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,50,50);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
//ATAS
   glVertex3f(105,50,-50);
   glVertex3f(-100,50,-50);
   glVertex3f(-100,50,50);
   glVertex3f(105,50,50);
   glVertex3f(105,50,-50);
//BELAKANG
   glVertex3f(100,-50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,50,-50);
   glVertex3f(100,50,-50);
   glVertex3f(100,-50,-50);
//KANAN
   glVertex3f(100,-50,50);
   glVertex3f(100,50,50);
   glVertex3f(100,50,-50);
   glEnd();

//BAWAH TENGAH
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,50);
   glVertex3f(60,-80,50);
   glVertex3f(-60,-80,50);
   glVertex3f(-60,-50,50);
   glEnd();

//BAWAH KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,50);
   glVertex3f(100,-80,50);
   glVertex3f(100,-80,-50);
   glVertex3f(100,-50,-50);
   glEnd();
//BAWAH KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,-80,50);
   glVertex3f(-100,-80,-50);
   glVertex3f(-100,-50,-50);
   glEnd();
//BAWAH BELAKANG
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,-50);
   glVertex3f(100,-80,-50);
   glVertex3f(-100,-80,-50);
   glVertex3f(-100,-50,-50);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//KENTENG
//****************************************************************************************************************************************
//KANAN KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(60,50,75);
   glVertex3f(60,50,50);
   glVertex3f(75,60,50);
   glEnd();
//KANAN DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(60,50,75);
   glVertex3f(75,60,50);
   glVertex3f(105,50,75);
   glEnd();
//KANAN KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(75,60,50);
   glVertex3f(75,60,-50);
   glVertex3f(105,50,-75);
   glVertex3f(105,50,75);
   glEnd();

//KIRI KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-60,50,75);
   glVertex3f(-60,50,50);
   glVertex3f(-75,60,50);
   glEnd();
//KIRI DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-60,50,75);
   glVertex3f(-75,60,50);
   glVertex3f(-105,50,75);
   glEnd();
//KIRI KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,60,50);
   glVertex3f(-75,60,-50);
   glVertex3f(-105,50,-75);
   glVertex3f(-105,50,75);
   glEnd();

//BELAKANG
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,60,-50);
   glVertex3f(-105,50,-75);
   glVertex3f(105,50,-75);
   glVertex3f(75,60,-50);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN ABU" ATAS
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(100,50,50);
   glVertex3f(100,50,70);
   glVertex3f(100,-50,70);
   glVertex3f(100,-50,50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(100,50,70);
   glVertex3f(60,50,70);
   glVertex3f(60,-50,70);
   glVertex3f(100,-50,70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.65,0.65,0.65);
   glVertex3f(60,50,70);
   glVertex3f(60,-50,70);
   glVertex3f(60,-50,50);
   glVertex3f(60,50,50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(60,50,75);
   glVertex3f(60,50,50);
   glVertex3f(105,50,50);
   glVertex3f(105,50,75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(60,-50,70);
   glVertex3f(60,-50,50);
   glVertex3f(100,-50,50);
   glVertex3f(100,-50,70);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN ABU" ATAS (BELAKANG)
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(100,50,-50);
   glVertex3f(100,50,-70);
   glVertex3f(100,-50,-70);
   glVertex3f(100,-50,-50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(100,50,-70);
   glVertex3f(60,50,-70);
   glVertex3f(60,-50,-70);
   glVertex3f(100,-50,-70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.65,0.65,0.65);
   glVertex3f(60,50,-70);
   glVertex3f(60,-50,-70);
   glVertex3f(60,-50,-50);
   glVertex3f(60,50,-50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(60,50,-75);
   glVertex3f(60,50,-50);
   glVertex3f(105,50,-50);
   glVertex3f(105,50,-75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(60,-50,-70);
   glVertex3f(60,-50,-50);
   glVertex3f(100,-50,-50);
   glVertex3f(100,-50,-70);
   glEnd();
	
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//JENDELA KANAN 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,40,70.1);
   glVertex3f(70,40,70.1);
   glVertex3f(70,20,70.1);
   glVertex3f(90,20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,40,70.15);
   glVertex3f(70,40,70.15);
   glVertex3f(70,20,70.15);
   glVertex3f(90,20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,35,70.15);
   glVertex3f(70,35,70.15);
   glVertex3f(90,30,70.15);
   glVertex3f(70,30,70.15);
   glVertex3f(70,25,70.15);
   glVertex3f(90,25,70.15);

   glVertex3f(75,40,70.15);
   glVertex3f(75,20,70.15);
   glVertex3f(80,40,70.15);
   glVertex3f(80,20,70.15);
   glVertex3f(85,40,70.15);
   glVertex3f(85,20,70.15);
   glEnd();

//JENDELA KANAN 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,10,70.1);
   glVertex3f(70,10,70.1);
   glVertex3f(70,-10,70.1);
   glVertex3f(90,-10,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,10,70.15);
   glVertex3f(70,10,70.15);
   glVertex3f(70,-10,70.15);
   glVertex3f(90,-10,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,5,70.15);
   glVertex3f(70,5,70.15);
   glVertex3f(90,0,70.15);
   glVertex3f(70,0,70.15);
   glVertex3f(70,-5,70.15);
   glVertex3f(90,-5,70.15);

   glVertex3f(75,10,70.15);
   glVertex3f(75,-10,70.15);
   glVertex3f(80,10,70.15);
   glVertex3f(80,-10,70.15);
   glVertex3f(85,10,70.15);
   glVertex3f(85,-10,70.15);
   glEnd();

//JENDELA KANAN 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(90,-40,70.1);
   glVertex3f(70,-40,70.1);
   glVertex3f(70,-20,70.1);
   glVertex3f(90,-20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(90,-40,70.15);
   glVertex3f(70,-40,70.15);
   glVertex3f(70,-20,70.15);
   glVertex3f(90,-20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(90,-35,70.15);
   glVertex3f(70,-35,70.15);
   glVertex3f(90,-30,70.15);
   glVertex3f(70,-30,70.15);
   glVertex3f(70,-25,70.15);
   glVertex3f(90,-25,70.15);

   glVertex3f(75,-40,70.15);
   glVertex3f(75,-20,70.15);
   glVertex3f(80,-40,70.15);
   glVertex3f(80,-20,70.15);
   glVertex3f(85,-40,70.15);
   glVertex3f(85,-20,70.15);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//JENDELA PINGGIR KANAN 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,40,57);
   glVertex3f(100.1,40,67);
   glVertex3f(100.1,20,67);
   glVertex3f(100.1,20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,40,57);
   glVertex3f(100.15,40,67);
   glVertex3f(100.15,20,67);
   glVertex3f(100.15,20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,35,57);
   glVertex3f(100.15,35,67);
   glVertex3f(100.15,40,62);
   glVertex3f(100.15,20,62);
   glEnd();
//JENDELA PINGGIR KANAN 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,10,57);
   glVertex3f(100.1,10,67);
   glVertex3f(100.1,-10,67);
   glVertex3f(100.1,-10,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,10,57);
   glVertex3f(100.15,10,67);
   glVertex3f(100.15,-10,67);
   glVertex3f(100.15,-10,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,5,57);
   glVertex3f(100.15,5,67);
   glVertex3f(100.15,10,62);
   glVertex3f(100.15,-10,62);
   glEnd();
//JENDELA PINGGIR KANAN 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(100.1,-40,57);
   glVertex3f(100.1,-40,67);
   glVertex3f(100.1,-20,67);
   glVertex3f(100.1,-20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(100.15,-40,57);
   glVertex3f(100.15,-40,67);
   glVertex3f(100.15,-20,67);
   glVertex3f(100.15,-20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(100.15,-25,57);
   glVertex3f(100.15,-25,67);
   glVertex3f(100.15,-40,62);
   glVertex3f(100.15,-20,62);
   glEnd();

//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN BAWAH (MERAH)
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,70);
   glVertex3f(100,-50,50);
   glVertex3f(100,-80,50);
   glVertex3f(100,-80,70);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,70);
   glVertex3f(100,-50,70);
   glVertex3f(100,-80,70);
   glVertex3f(60,-80,70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,70);
   glVertex3f(60,-50,50);
   glVertex3f(60,-80,50);
   glVertex3f(60,-80,70);
   glEnd();

//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KANAN BAWAH (MERAH) (BELAKANG)
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(100,-50,-70);
   glVertex3f(100,-50,-50);
   glVertex3f(100,-80,-50);
   glVertex3f(100,-80,-70);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,-70);
   glVertex3f(100,-50,-70);
   glVertex3f(100,-80,-70);
   glVertex3f(60,-80,-70);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(60,-50,-70);
   glVertex3f(60,-50,-50);
   glVertex3f(60,-80,-50);
   glVertex3f(60,-80,-70);
   glEnd();
	
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//KIRI ABU" ATAS
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
   glVertex3f(-100,50,50);
   glVertex3f(-100,50,70);
   glVertex3f(-100,-50,70);
   glVertex3f(-100,-50,50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(-100,50,70);
   glVertex3f(-60,50,70);
   glVertex3f(-60,-50,70);
   glVertex3f(-100,-50,70);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
   glVertex3f(-60,50,70);
   glVertex3f(-60,-50,70);
   glVertex3f(-60,-50,50);
   glVertex3f(-60,50,50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-60,50,75);
   glVertex3f(-60,50,50);
   glVertex3f(-105,50,50);
   glVertex3f(-105,50,75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(-60,-50,70);
   glVertex3f(-60,-50,50);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,-50,70);
   glEnd();

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//KIRI ABU" ATAS (BELAKANG)
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
   glVertex3f(-100,50,-50);
   glVertex3f(-100,50,-70);
   glVertex3f(-100,-50,-70);
   glVertex3f(-100,-50,-50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.82,0.82,0.82);
   glVertex3f(-100,50,-70);
   glVertex3f(-60,50,-70);
   glVertex3f(-60,-50,-70);
   glVertex3f(-100,-50,-70);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.75,0.75,0.75);
   glVertex3f(-60,50,-70);
   glVertex3f(-60,-50,-70);
   glVertex3f(-60,-50,-50);
   glVertex3f(-60,50,-50);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-60,50,-75);
   glVertex3f(-60,50,-50);
   glVertex3f(-105,50,-50);
   glVertex3f(-105,50,-75);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0,0,1);
   glVertex3f(-60,-50,-70);
   glVertex3f(-60,-50,-50);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-50,-70);
   glEnd();
//****************************************************************************************************************************************
//JENDELA KIRI 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-90,40,70.1);
   glVertex3f(-70,40,70.1);
   glVertex3f(-70,20,70.1);
   glVertex3f(-90,20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-90,40,70.15);
   glVertex3f(-70,40,70.15);
   glVertex3f(-70,20,70.15);
   glVertex3f(-90,20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-90,35,70.15);
   glVertex3f(-70,35,70.15);
   glVertex3f(-90,30,70.15);
   glVertex3f(-70,30,70.15);
   glVertex3f(-70,25,70.15);
   glVertex3f(-90,25,70.15);

   glVertex3f(-75,40,70.15);
   glVertex3f(-75,20,70.15);
   glVertex3f(-80,40,70.15);
   glVertex3f(-80,20,70.15);
   glVertex3f(-85,40,70.15);
   glVertex3f(-85,20,70.15);
   glEnd();

//JENDELA KIRI 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-90,10,70.1);
   glVertex3f(-70,10,70.1);
   glVertex3f(-70,-10,70.1);
   glVertex3f(-90,-10,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-90,10,70.15);
   glVertex3f(-70,10,70.15);
   glVertex3f(-70,-10,70.15);
   glVertex3f(-90,-10,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-90,5,70.15);
   glVertex3f(-70,5,70.15);
   glVertex3f(-90,0,70.15);
   glVertex3f(-70,0,70.15);
   glVertex3f(-70,-5,70.15);
   glVertex3f(-90,-5,70.15);

   glVertex3f(-75,10,70.15);
   glVertex3f(-75,-10,70.15);
   glVertex3f(-80,10,70.15);
   glVertex3f(-80,-10,70.15);
   glVertex3f(-85,10,70.15);
   glVertex3f(-85,-10,70.15);
   glEnd();

//JENDELA KIRI 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-90,-40,70.1);
   glVertex3f(-70,-40,70.1);
   glVertex3f(-70,-20,70.1);
   glVertex3f(-90,-20,70.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-90,-40,70.15);
   glVertex3f(-70,-40,70.15);
   glVertex3f(-70,-20,70.15);
   glVertex3f(-90,-20,70.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-90,-35,70.15);
   glVertex3f(-70,-35,70.15);
   glVertex3f(-90,-30,70.15);
   glVertex3f(-70,-30,70.15);
   glVertex3f(-70,-25,70.15);
   glVertex3f(-90,-25,70.15);

   glVertex3f(-75,-40,70.15);
   glVertex3f(-75,-20,70.15);
   glVertex3f(-80,-40,70.15);
   glVertex3f(-80,-20,70.15);
   glVertex3f(-85,-40,70.15);
   glVertex3f(-85,-20,70.15);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//JENDELA PINGGIR KIRI 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-100.1,40,57);
   glVertex3f(-100.1,40,67);
   glVertex3f(-100.1,20,67);
   glVertex3f(-100.1,20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-100.15,40,57);
   glVertex3f(-100.15,40,67);
   glVertex3f(-100.15,20,67);
   glVertex3f(-100.15,20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-100.15,35,57);
   glVertex3f(-100.15,35,67);
   glVertex3f(-100.15,40,62);
   glVertex3f(-100.15,20,62);
   glEnd();
//JENDELA PINGGIR KIRI 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-100.1,10,57);
   glVertex3f(-100.1,10,67);
   glVertex3f(-100.1,-10,67);
   glVertex3f(-100.1,-10,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-100.15,10,57);
   glVertex3f(-100.15,10,67);
   glVertex3f(-100.15,-10,67);
   glVertex3f(-100.15,-10,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-100.15,5,57);
   glVertex3f(-100.15,5,67);
   glVertex3f(-100.15,10,62);
   glVertex3f(-100.15,-10,62);
   glEnd();
//JENDELA PINGGIR KIRI 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-100.1,-40,57);
   glVertex3f(-100.1,-40,67);
   glVertex3f(-100.1,-20,67);
   glVertex3f(-100.1,-20,57);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-100.15,-40,57);
   glVertex3f(-100.15,-40,67);
   glVertex3f(-100.15,-20,67);
   glVertex3f(-100.15,-20,57);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-100.15,-25,57);
   glVertex3f(-100.15,-25,67);
   glVertex3f(-100.15,-40,62);
   glVertex3f(-100.15,-20,62);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KIRI BAWAH (MERAH)
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-100,-50,70);
   glVertex3f(-100,-50,50);
   glVertex3f(-100,-80,50);
   glVertex3f(-100,-80,70);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-60,-50,70);
   glVertex3f(-100,-50,70);
   glVertex3f(-100,-80,70);
   glVertex3f(-60,-80,70);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-60,-50,70);
   glVertex3f(-60,-50,50);
   glVertex3f(-60,-80,50);
   glVertex3f(-60,-80,70);
   glEnd();

//****************************************************************************************************************************************
//****************************************************************************************************************************************
//KIRI BAWAH (MERAH) (BELAKANG)
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-100,-50,-70);
   glVertex3f(-100,-50,-50);
   glVertex3f(-100,-80,-50);
   glVertex3f(-100,-80,-70);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-60,-50,-70);
   glVertex3f(-100,-50,-70);
   glVertex3f(-100,-80,-70);
   glVertex3f(-60,-80,-70);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-60,-50,-70);
   glVertex3f(-60,-50,-50);
   glVertex3f(-60,-80,-50);
   glVertex3f(-60,-80,-70);
   glEnd();	
	
//########################################################################################################################################
//TEMBOK DEPAN PILAR
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//****************************************************************************************************************************************
//EYUP ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(-60,-20,50);
   glVertex3f(-60,-20,58);
   glVertex3f(60,-20,58);
   glVertex3f(60,-20,50);
   glEnd();

//EYUP TEMBOK DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-60,-20,58);
   glVertex3f(60,-20,58);
   glVertex3f(60,-50,58);
   glVertex3f(-60,-50,58);
   glEnd();
//KACA KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(41,-25,58.1);
   glVertex3f(55,-25,58.1);
   glVertex3f(55,-40,58.1);
   glVertex3f(41,-40,58.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(41,-25,58.15);
   glVertex3f(55,-25,58.15);
   glVertex3f(55,-40,58.15);
   glVertex3f(41,-40,58.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex3f(41,-30,58.15);
   glVertex3f(55,-30,58.15);
    glVertex3f(41,-35,58.15);
   glVertex3f(55,-35,58.15);

   glVertex3f(46,-25,58.15);
   glVertex3f(46,-40,58.15);
   glVertex3f(51,-25,58.15);
   glVertex3f(51,-40,58.15);
   glEnd();
//KACA KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-41,-25,58.1);
   glVertex3f(-55,-25,58.1);
   glVertex3f(-55,-40,58.1);
   glVertex3f(-41,-40,58.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-41,-25,58.15);
   glVertex3f(-55,-25,58.15);
   glVertex3f(-55,-40,58.15);
   glVertex3f(-41,-40,58.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex3f(-41,-30,58.15);
   glVertex3f(-55,-30,58.15);
    glVertex3f(-41,-35,58.15);
   glVertex3f(-55,-35,58.15);

   glVertex3f(-46,-25,58.15);
   glVertex3f(-46,-40,58.15);
   glVertex3f(-51,-25,58.15);
   glVertex3f(-51,-40,58.15);
   glEnd();

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//****************************************************************************************************************************************
//PINTU MASUK
//****************************************************************************************************************************************
//PINTU MASUK 1 DARI KANAN (PINGGIR)
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(16,-30,58.1);
   glVertex3f(16,-50,58.1);
   glVertex3f(20,-50,58.1);
   glVertex3f(20,-30,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(29,-30,58.1);
   glVertex3f(33,-30,58.1);
   glVertex3f(33,-50,58.1);
   glVertex3f(29,-50,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(20,-30,58.1);
   glVertex3f(23,-28,58.1);
   glVertex3f(26,-28,58.1);
   glVertex3f(29,-30,58.1);
   glVertex3f(33,-30,58.1);
   glVertex3f(31,-27,58.1);
   glVertex3f(27.5,-26,58.1);
   glVertex3f(24.5,-26,58.1);
   glVertex3f(22.5,-26,58.1);
   glVertex3f(18,-27,58.1);
   glVertex3f(16,-30,58.1);
   glVertex3f(20,-30,58.1);
   glEnd();
//PINTU 1
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(20,-50,58.15);
   glVertex3f(20,-30,58.15);
   glVertex3f(29,-30,58.15);
   glVertex3f(29,-50,58.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(24.5,-50,58.15);
   glVertex3f(24.5,-30,58.15);
   glVertex3f(20,-37,58.15);
   glVertex3f(29,-37,58.15);
   glEnd();


//PINTU MASUK 2 (PINGGIR)
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(9,-50,58.1);
   glVertex3f(9,-30,58.1);
   glVertex3f(5,-30,58.1);
   glVertex3f(5,-50,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-9,-50,58.1);
   glVertex3f(-9,-30,58.1);
   glVertex3f(-5,-30,58.1);
   glVertex3f(-5,-50,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-5,-30,58.1);
   glVertex3f(-2,-28,58.1);
   glVertex3f(2,-28,58.1);
   glVertex3f(5,-30,58.1);
   glVertex3f(9,-30,58.1);
   glVertex3f(8,-27,58.1);
   glVertex3f(5.5,-26,58.1);
   glVertex3f(3.5,-26,58.1);
   glVertex3f(-3.5,-26,58.1);
   glVertex3f(-6,-27,58.1);
   glVertex3f(-8,-28,58.1);
   glVertex3f(-8.5,-29,58.1);
   glVertex3f(-9,-30,58.1);
   glEnd();
//PINTU 2
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(5,-30,58.15);
   glVertex3f(5,-50,58.15);
   glVertex3f(-5,-50,58.15);
   glVertex3f(-5,-30,58.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(5,-37,58.15);
   glVertex3f(-5,-37,58.15);
   glVertex3f(0,-50,58.15);
   glVertex3f(0,-30,58.15);
   glEnd();

//PINTU MASUK 3 (PINGGIR)
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-16,-30,58.1);
   glVertex3f(-16,-50,58.1);
   glVertex3f(-20,-50,58.1);
   glVertex3f(-20,-30,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-29,-30,58.1);
   glVertex3f(-33,-30,58.1);
   glVertex3f(-33,-50,58.1);
   glVertex3f(-29,-50,58.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-20,-30,58.1);
   glVertex3f(-23,-28,58.1);
   glVertex3f(-26,-28,58.1);
   glVertex3f(-29,-30,58.1);
   glVertex3f(-33,-30,58.1);
   glVertex3f(-31,-27,58.1);
   glVertex3f(-27.5,-26,58.1);
   glVertex3f(-24.5,-26,58.1);
   glVertex3f(-22.5,-26,58.1);
   glVertex3f(-18,-27,58.1);
   glVertex3f(-16,-30,58.1);
   glVertex3f(-20,-30,58.1);
   glEnd();
//PINTU 3
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-20,-50,58.15);
   glVertex3f(-20,-30,58.15);
   glVertex3f(-29,-30,58.15);
   glVertex3f(-29,-50,58.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-24.5,-50,58.15);
   glVertex3f(-24.5,-30,58.15);
   glVertex3f(-20,-37,58.15);
   glVertex3f(-29,-37,58.15);
   glEnd();
//****************************************************************************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//PILAR
//****************************************************************************************************************************************
//PILAR 1 DARI KANAN.
//DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(60,-50,62);
   glVertex3f(56,-50,62);
   glVertex3f(56,50,62);
   glVertex3f(60,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(56,50,62);
   glVertex3f(60,50,62);
   glVertex3f(60,50,58);
   glVertex3f(56,50,58);
   glEnd();
//KIRI
glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(56,-50,62);
   glVertex3f(56,50,62);
   glVertex3f(56,50,58);
   glVertex3f(56,-50,58);
   glEnd();
//KAYU KIRI BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(56,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(56,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(54,21,60.1);
   glVertex3f(54,15,60.1);
   glEnd();
//KAYU KIRI ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(56,35,60.1);
   glColor3f(1,0,0);
   glVertex3f(56,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(53,37,60.1);
   glEnd();

//PILAR 2
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0);
   glVertex3f(39,-50,62);
   glVertex3f(34,-50,62);
   glVertex3f(34,50,62);
   glVertex3f(39,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0);
   glVertex3f(34,50,62);
   glVertex3f(39,50,62);
   glVertex3f(39,50,58);
   glVertex3f(34,50,58);
   glEnd();
//KIRI
glBegin(GL_POLYGON);
   glColor3f(0.85,0,0);
   glVertex3f(34,-50,62);
   glVertex3f(34,50,62);
   glVertex3f(34,50,58);
   glVertex3f(34,-50,58);
   glEnd();
//KAYU KIRI BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(34,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(34,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(32,21,60.1);
   glVertex3f(32,15,60.1);
   glEnd();
//KAYU KIRI ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(34,35,60.1);
   glColor3f(1,0,0);
   glVertex3f(34,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(30,37,60.1);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0);
   glVertex3f(39,-50,62);
   glVertex3f(39,50,62);
   glVertex3f(39,50,58);
   glVertex3f(39,-50,58);
   glEnd();
//KAYU KANAN BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(41,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(41,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(39,21,60.1);
   glVertex3f(39,15,60.1);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(39,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(43,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(39,35,60.1);

   glEnd();

//PILAR 3
//DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(15,-50,62);
   glVertex3f(10,-50,62);
   glVertex3f(10,50,62);
   glVertex3f(15,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(10,50,62);
   glVertex3f(15,50,62);
   glVertex3f(15,50,58);
   glVertex3f(10,50,58);
   glEnd();
//KIRI
glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(10,-50,62);
   glVertex3f(10,50,62);
   glVertex3f(10,50,58);
   glVertex3f(10,-50,58);
   glEnd();
//KAYU KIRI BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(8,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(8,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(10,21,60.1);
   glVertex3f(10,15,60.1);
   glEnd();
//KAYU KIRI ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(10,35,60.1);
   glColor3f(1,0,0);
   glVertex3f(6,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(10,37,60.1);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(15,-50,62);
   glVertex3f(15,50,62);
   glVertex3f(15,50,58);
   glVertex3f(15,-50,58);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(15,35,60.1);
   glColor3f(1,0,0);
   glVertex3f(15,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(18,37,60.1);
   glEnd();

//PILAR 6
//DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-60,-50,62);
   glVertex3f(-56,-50,62);
   glVertex3f(-56,50,62);
   glVertex3f(-60,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-56,50,62);
   glVertex3f(-60,50,62);
   glVertex3f(-60,50,58);
   glVertex3f(-56,50,58);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(0.97,0,0);
   glVertex3f(-56,-50,62);
   glVertex3f(-56,50,62);
   glVertex3f(-56,50,58);
   glVertex3f(-56,-50,58);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-52,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-56,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-56,35,60.1);
   glEnd();
//KAYU KANAN BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-56,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(-56,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(-54,21,60.1);
   glVertex3f(-54,15,60.1);
   glEnd();


//PILAR 5
//DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-39,-50,62);
   glVertex3f(-34,-50,62);
   glVertex3f(-34,50,62);
   glVertex3f(-39,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0);
   glVertex3f(-34,50,62);
   glVertex3f(-39,50,62);
   glVertex3f(-39,50,58);
   glVertex3f(-34,50,58);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-34,-50,62);
   glVertex3f(-34,50,62);
   glVertex3f(-34,50,58);
   glVertex3f(-34,-50,58);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-29,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-34,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-34,35,60.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-39,-50,62);
   glVertex3f(-39,50,62);
   glVertex3f(-39,50,58);
   glVertex3f(-39,-50,58);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-44,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-39,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-39,35,60.1);
   glEnd();
//KAYU KIRI BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-34,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(-34,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(-32,21,60.1);
   glVertex3f(-32,15,60.1);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-41,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(-41,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(-39,21,60.1);
   glVertex3f(-39,15,60.1);
   glEnd();

//PILAR 4
//DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-15,-50,62);
   glVertex3f(-10,-50,62);
   glVertex3f(-10,50,62);
   glVertex3f(-15,50,62);
   glEnd();
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(-10,50,62);
   glVertex3f(-15,50,62);
   glVertex3f(-15,50,58);
   glVertex3f(-10,50,58);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-10,-50,62);
   glVertex3f(-10,50,62);
   glVertex3f(-10,50,58);
   glVertex3f(-10,-50,58);
   glEnd();
//KAYU KANAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-6,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-10,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-10,35,60.1);
   glEnd();
//KIRI
glBegin(GL_POLYGON);
   glColor3f(0.95,0,0);
   glVertex3f(-15,-50,62);
   glVertex3f(-15,50,62);
   glVertex3f(-15,50,58);
   glVertex3f(-15,-50,58);
   glEnd();
//KAYU KIRI ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-19,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-15,37,60.1);
   glColor3f(1,0,0);
   glVertex3f(-15,35,60.1);
   glEnd();
//KAYU KIRI BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-8,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(-8,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(-10,21,60.1);
   glVertex3f(-10,15,60.1);
   glEnd();
//KAYU KANAN BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(-17,15,60.1);
   glColor3f(1,0,0);
   glVertex3f(-17,21,60.1);
   glColor3f(1,0,0);
   glVertex3f(-15,21,60.1);
   glVertex3f(-15,15,60.1);
   glEnd();


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//COR PILAR DAN LATAR DEPAN
//****************************************************************************************************************************************
//COR PILAR 1 DARI KANAN
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(60,-50,62.1);
   glVertex3f(55,-50,62.1);
   glVertex3f(55,-30,62.1);
   glVertex3f(60,-30,62.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.7,0.7,0.7);
   glVertex3f(55,-50,62.1);
   glVertex3f(55,-30,62.1);
   glVertex3f(55,-30,58.1);
   glVertex3f(55,-50,58.1);
   glEnd();
//COR PILAR 2
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(40.5,-50,62.1);
   glVertex3f(33.5,-50,62.1);
   glVertex3f(33.5,-30,62.1);
   glVertex3f(40.5,-30,62.1);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(0.7,0.7,0.7);
   glVertex3f(33.5,-50,62.1);
   glVertex3f(33.5,-30,62.1);
   glVertex3f(33.5,-30,58.1);
   glVertex3f(33.5,-50,58.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(40.5,-50,62.1);
   glVertex3f(40.5,-30,62.1);
   glVertex3f(40.5,-30,58.1);
   glVertex3f(40.5,-50,58.1);
   glEnd();
//COR PILAR 3
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(16,-50,62.1);
   glVertex3f(9,-50,62.1);
   glVertex3f(9,-30,62.1);
   glVertex3f(16,-30,62.1);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.7,0.7,0.7);
   glVertex3f(9,-50,62.1);
   glVertex3f(9,-30,62.1);
   glVertex3f(9,-30,58.1);
   glVertex3f(9,-50,58.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(16,-50,62.1);
   glVertex3f(16,-30,62.1);
   glVertex3f(16,-30,58.1);
   glVertex3f(16,-50,58.1);
   glEnd();

//COR PILAR 6
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-60,-50,62.1);
   glVertex3f(-55,-50,62.1);
   glVertex3f(-55,-30,62.1);
   glVertex3f(-60,-30,62.1);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-55,-50,62.1);
   glVertex3f(-55,-30,62.1);
   glVertex3f(-55,-30,58.1);
   glVertex3f(-55,-50,58.1);
   glEnd();
//COR PILAR 5
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-40.5,-50,62.1);
   glVertex3f(-33.5,-50,62.1);
   glVertex3f(-33.5,-30,62.1);
   glVertex3f(-40.5,-30,62.1);
   glEnd();
//KANAN
glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-33.5,-50,62.1);
   glVertex3f(-33.5,-30,62.1);
   glVertex3f(-33.5,-30,58.1);
   glVertex3f(-33.5,-50,58.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.7,0.7,0.7);
   glVertex3f(-40.5,-50,62.1);
   glVertex3f(-40.5,-30,62.1);
   glVertex3f(-40.5,-30,58.1);
   glVertex3f(-40.5,-50,58.1);
   glEnd();
//COR PILAR 4
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-16,-50,62.1);
   glVertex3f(-9,-50,62.1);
   glVertex3f(-9,-30,62.1);
   glVertex3f(-16,-30,62.1);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-9,-50,62.1);
   glVertex3f(-9,-30,62.1);
   glVertex3f(-9,-30,58.1);
   glVertex3f(-9,-50,58.1);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.7,0.7,0.7);
   glVertex3f(-16,-50,62.1);
   glVertex3f(-16,-30,62.1);
   glVertex3f(-16,-30,58.1);
   glVertex3f(-16,-50,58.1);
   glEnd();

//LANTAI
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(60,-50,70);
   glVertex3f(-60,-50,70);
   glVertex3f(-60,-50,50);
   glVertex3f(60,-50,50);
   glEnd();
//****************************************************************************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//SEKAT 1
//****************************************************************************************************************************************
//KOTAK1
   glBegin(GL_POLYGON);
   glColor3f(0.80,0,0);
   glVertex3f(56,6,60);
   glVertex3f(56,10,60);
   glVertex3f(-56,10,60);
   glVertex3f(-56,6,60);
   glEnd();

//KOTAK2
   glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(56,10,60);
   glVertex3f(-56,10,60);
   glVertex3f(-56,15,60);
   glVertex3f(56,15,60);
   glEnd();

//KOTAK GARIS 1 DARI KANAN
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(55,11,60.1);
   glVertex3f(40,11,60.1);
   glVertex3f(40,14,60.1);
   glVertex3f(55,14,60.1);
   glEnd();
//KOTAK GARIS 2
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(33,11,60.1);
   glVertex3f(16,11,60.1);
   glVertex3f(16,14,60.1);
   glVertex3f(33,14,60.1);
   glEnd();

//KOTAK GARIS 3
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(9,11,60.1);
   glVertex3f(-9,11,60.1);
   glVertex3f(-9,14,60.1);
   glVertex3f(9,14,60.1);
   glEnd();

//KOTAK GARIS 4
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-33,11,60.1);
   glVertex3f(-16,11,60.1);
   glVertex3f(-16,14,60.1);
   glVertex3f(-33,14,60.1);
   glEnd();

//KOTAK GARIS 5
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-55,11,60.1);
   glVertex3f(-40,11,60.1);
   glVertex3f(-40,14,60.1);
   glVertex3f(-55,14,60.1);
   glEnd();

//GARIS SEKAT
   glBegin(GL_POLYGON);
   glColor3f(0.90,0,0);
   glVertex3f(56,18,60);
   glVertex3f(-56,18,60);
   glVertex3f(-56,17,60);
   glVertex3f(56,17,60);
   glEnd();
//****************************************************************************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//SEKAT 2
//****************************************************************************************************************************************
//KOTAK 1
   glBegin(GL_POLYGON);
   glColor3f(0.9,0,0);
   glVertex3f(56,45,60);
   glVertex3f(56,37,60);
   glVertex3f(-56,37,60);
   glVertex3f(-56,45,60);
   glEnd();
//KOTAK 2
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(56,49,60);
   glVertex3f(56,47,60);
   glVertex3f(-56,47,60);
   glVertex3f(-56,49,60);
   glEnd();
//GARIS
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(56,42.5,60.1);
   glVertex3f(-56,42.5,60.1);
   glEnd();
//########################################################################################################################################
//JENDELA DAN BATAS JENDELA
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//JENDELA TENGAH BAWAH
//****************************************************************************************************************************************
//BAWAH 1 (DARI KANAN)
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(55,-19,50.1);
   glVertex3f(40,-19,50.1);
   glVertex3f(40,5,50.1);
   glVertex3f(55,5,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(55,-19,50.15);
   glVertex3f(40,-19,50.15);
   glVertex3f(40,5,50.15);
   glVertex3f(55,5,50.15);
   glEnd();
   glBegin(GL_LINES);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(55,-15,50.15);
   glVertex3f(40,-15,50.15);
   glVertex3f(55,-11,50.15);
   glVertex3f(40,-11,50.15);
   glVertex3f(55,-7,50.15);
   glVertex3f(40,-7,50.15);
   glVertex3f(55,-3,50.15);
   glVertex3f(40,-3,50.15);
   glVertex3f(40,1,50.15);
   glVertex3f(55,1,50.15);

   glVertex3f(45,-19,50.15);
   glVertex3f(45,5,50.15);
   glVertex3f(50,-19,50.15);
   glVertex3f(50,5,50.15);
   glEnd();

//BAWAH 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(33,-19,50.1);
   glVertex3f(16,-19,50.1);
   glVertex3f(16,5,50.1);
   glVertex3f(33,5,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(33,-19,50.15);
   glVertex3f(16,-19,50.15);
   glVertex3f(16,5,50.15);
   glVertex3f(33,5,50.15);
   glEnd();
   glBegin(GL_LINES);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(33,-15,50.15);
   glVertex3f(16,-15,50.15);
   glVertex3f(33,-11,50.15);
   glVertex3f(16,-11,50.15);
   glVertex3f(33,-7,50.15);
   glVertex3f(16,-7,50.15);
   glVertex3f(33,-3,50.15);
   glVertex3f(16,-3,50.15);
   glVertex3f(33,1,50.15);
   glVertex3f(16,1,50.15);

   glVertex3f(21,-19,50.15);
   glVertex3f(21,5,50.15);
   glVertex3f(27,-19,50.15);
   glVertex3f(27,5,50.15);
   glEnd();

//BAWAH 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(9,-19,50.1);
   glVertex3f(-9,-19,50.1);
   glVertex3f(-9,5,50.1);
   glVertex3f(9,5,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(9,-19,50.15);
   glVertex3f(-9,-19,50.15);
   glVertex3f(-9,5,50.15);
   glVertex3f(9,5,50.15);
   glEnd();
   glBegin(GL_LINES);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(9,-15,50.15);
   glVertex3f(-9,-15,50.15);
   glVertex3f(9,-11,50.15);
   glVertex3f(-9,-11,50.15);
   glVertex3f(9,-7,50.15);
   glVertex3f(-9,-7,50.15);
   glVertex3f(9,-3,50.15);
   glVertex3f(-9,-3,50.15);
   glVertex3f(9,1,50.15);
   glVertex3f(-9,1,50.15);

   glVertex3f(-4,-19,50.15);
   glVertex3f(-4,5,50.15);
   glVertex3f(4,-19,50.15);
   glVertex3f(4,5,50.15);
   glEnd();

//BAWAH 4
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-33,-19,50.1);
   glVertex3f(-16,-19,50.1);
   glVertex3f(-16,5,50.1);
   glVertex3f(-33,5,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(-33,-19,50.15);
   glVertex3f(-16,-19,50.15);
   glVertex3f(-16,5,50.15);
   glVertex3f(-33,5,50.15);
   glEnd();
   glBegin(GL_LINES);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(-33,-15,50.15);
   glVertex3f(-16,-15,50.15);
   glVertex3f(-33,-11,50.15);
   glVertex3f(-16,-11,50.15);
   glVertex3f(-33,-7,50.15);
   glVertex3f(-16,-7,50.15);
   glVertex3f(-33,-3,50.15);
   glVertex3f(-16,-3,50.15);
   glVertex3f(-33,1,50.15);
   glVertex3f(-16,1,50.15);

   glVertex3f(-21,-19,50.15);
   glVertex3f(-21,5,50.15);
   glVertex3f(-27,-19,50.15);
   glVertex3f(-27,5,50.15);
   glEnd();

//BAWAH 5
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-55,-19,50.1);
   glVertex3f(-40,-19,50.1);
   glVertex3f(-40,5,50.1);
   glVertex3f(-55,5,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(-55,-19,50.15);
   glVertex3f(-40,-19,50.15);
   glVertex3f(-40,5,50.15);
   glVertex3f(-55,5,50.15);
   glEnd();
   glBegin(GL_LINES);
   glLineWidth(3);
   glColor3f(0,0,0);
   glVertex3f(-55,-15,50.15);
   glVertex3f(-40,-15,50.15);
   glVertex3f(-55,-11,50.15);
   glVertex3f(-40,-11,50.15);
   glVertex3f(-55,-7,50.15);
   glVertex3f(-40,-7,50.15);
   glVertex3f(-55,-3,50.15);
   glVertex3f(-40,-3,50.15);
   glVertex3f(-40,1,50.15);
   glVertex3f(-55,1,50.15);

   glVertex3f(-45,-19,50.15);
   glVertex3f(-45,5,50.15);
   glVertex3f(-50,-19,50.15);
   glVertex3f(-50,5,50.15);
   glEnd();
//****************************************************************************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//BATAS JENDELA BWH & TGH
//****************************************************************************************************************************************
//ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.85,0.85,0.85);
   glVertex3f(60,14,50);
   glVertex3f(60,14,57);
   glVertex3f(-60,14,57);
   glVertex3f(-60,14,50);
   glEnd();
//BAWAH
   glBegin(GL_POLYGON);
   glColor3f(0.5,0.5,0.5);
   glVertex3f(60,6,50);
   glVertex3f(60,6,57);
   glVertex3f(-60,6,57);
   glVertex3f(-60,6,50);
   glEnd();
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.6,0.6,0.6);
   glVertex3f(60,6,57);
   glVertex3f(-60,6,57);
   glVertex3f(-60,14,57);
   glVertex3f(60,14,57);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//TENGAH
//****************************************************************************************************************************************
//TENGAH 1 (DARI KANAN)
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(55,16,50.1);
   glVertex3f(40,16,50.1);
   glVertex3f(40,39,50.1);
   glVertex3f(55,39,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(55,16,50.15);
   glVertex3f(40,16,50.15);
   glVertex3f(40,39,50.15);
   glVertex3f(55,39,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(55,20,50.15);
   glVertex3f(40,20,50.15);
   glVertex3f(55,24,50.15);
   glVertex3f(40,24,50.15);
   glVertex3f(55,28,50.15);
   glVertex3f(40,28,50.15);
   glVertex3f(55,32,50.15);
   glVertex3f(40,32,50.15);
   glVertex3f(55,36,50.15);
   glVertex3f(40,36,50.15);

   glVertex3f(45,16,50.15);
   glVertex3f(45,39,50.15);
   glVertex3f(50,16,50.15);
   glVertex3f(50,39,50.15);
   glEnd();

//TENGAH 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(33,16,50.1);
   glVertex3f(16,16,50.1);
   glVertex3f(16,39,50.1);
   glVertex3f(33,39,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(33,16,50.15);
   glVertex3f(16,16,50.15);
   glVertex3f(16,39,50.15);
   glVertex3f(33,39,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex3f(33,20,50.15);
   glVertex3f(16,20,50.15);
    glVertex3f(33,24,50.15);
   glVertex3f(16,24,50.15);
    glVertex3f(33,28,50.15);
   glVertex3f(16,28,50.15);
    glVertex3f(33,32,50.15);
   glVertex3f(16,32,50.15);
    glVertex3f(33,36,50.15);
   glVertex3f(16,36,50.15);

   glVertex3f(21,16,50.15);
   glVertex3f(21,39,50.15);
   glVertex3f(27,16,50.15);
   glVertex3f(27,39,50.15);
   glEnd();

//TENGAH 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(9,16,50.1);
   glVertex3f(-9,16,50.1);
   glVertex3f(-9,39,50.1);
   glVertex3f(9,39,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(9,16,50.15);
   glVertex3f(-9,16,50.15);
   glVertex3f(-9,39,50.15);
   glVertex3f(9,39,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(9,20,50.15);
   glVertex3f(-9,20,50.15);
   glVertex3f(9,24,50.15);
   glVertex3f(-9,24,50.15);
   glVertex3f(9,28,50.15);
   glVertex3f(-9,28,50.15);
   glVertex3f(9,32,50.15);
   glVertex3f(-9,32,50.15);
   glVertex3f(9,36,50.15);
   glVertex3f(-9,36,50.15);

   glVertex3f(-4,16,50.15);
   glVertex3f(-4,39,50.15);
   glVertex3f(4,16,50.15);
   glVertex3f(4,39,50.15);
   glEnd();

//TENGAH 4
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-33,16,50.1);
   glVertex3f(-16,16,50.1);
   glVertex3f(-16,39,50.1);
   glVertex3f(-33,39,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-33,16,50.15);
   glVertex3f(-16,16,50.15);
   glVertex3f(-16,39,50.15);
   glVertex3f(-33,39,50.15);
   glEnd();
    glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex3f(-33,20,50.15);
   glVertex3f(-16,20,50.15);
    glVertex3f(-33,24,50.15);
   glVertex3f(-16,24,50.15);
    glVertex3f(-33,28,50.15);
   glVertex3f(-16,28,50.15);
    glVertex3f(-33,32,50.15);
   glVertex3f(-16,32,50.15);
    glVertex3f(-33,36,50.15);
   glVertex3f(-16,36,50.15);

   glVertex3f(-21,16,50.15);
   glVertex3f(-21,39,50.15);
   glVertex3f(-27,16,50.15);
   glVertex3f(-27,39,50.15);
   glEnd();

//TENGAH 5
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-55,16,50.1);
   glVertex3f(-40,16,50.1);
   glVertex3f(-40,39,50.1);
   glVertex3f(-55,39,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-55,16,50.15);
   glVertex3f(-40,16,50.15);
   glVertex3f(-40,39,50.15);
   glVertex3f(-55,39,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-55,20,50.15);
   glVertex3f(-40,20,50.15);
   glVertex3f(-55,24,50.15);
   glVertex3f(-40,24,50.15);
   glVertex3f(-55,28,50.15);
   glVertex3f(-40,28,50.15);
   glVertex3f(-55,32,50.15);
   glVertex3f(-40,32,50.15);
   glVertex3f(-55,36,50.15);
   glVertex3f(-40,36,50.15);

   glVertex3f(-45,16,50.15);
   glVertex3f(-45,39,50.15);
   glVertex3f(-50,16,50.15);
   glVertex3f(-50,39,50.15);
   glEnd();

//########################################################################################################################################
//TEMBOK UTAMA DAN GENTENG NEXT (2ND FLOR)
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-75,50,50);
   glVertex3f(75,50,50);
   glVertex3f(75,80,50);
   glVertex3f(-75,80,50);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.9,0.9,0.9);
   glVertex3f(75,50,50);
   glVertex3f(75,50,-50);
   glVertex3f(75,80,-50);
   glVertex3f(75,80,50);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0.8);
   glVertex3f(-75,50,50);
   glVertex3f(-75,50,-50);
   glVertex3f(-75,80,-50);
   glVertex3f(-75,80,50);
   glEnd();
//BELAKANG
glBegin(GL_POLYGON);
   glColor3f(0.9,0.9,0.9);
   glVertex3f(-75,50,-50);
   glVertex3f(75,50,-50);
   glVertex3f(75,80,-50);
   glVertex3f(-75,80,-50);
   glEnd();
//ATAS
glBegin(GL_POLYGON);
   glColor3f(0.5,0.5,0.5);
   glVertex3f(-90,80,70);
   glVertex3f(90,80,70);
   glVertex3f(90,80,-70);
   glVertex3f(-90,80,-70);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//GENTENG DEPAN
glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-90,80,70);
   glVertex3f(-65,90,50);
   glVertex3f(65,90,50);
   glVertex3f(90,80,70);
   glEnd();
//GENTENG KANAN
glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(90,80,-70);
   glVertex3f(65,90,-50);
   glVertex3f(65,90,50);
   glVertex3f(90,80,70);
   glEnd();
//GENTENG BELAKANG
glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-90,80,-70);
   glVertex3f(-65,90,-50);
   glVertex3f(65,90,-50);
   glVertex3f(90,80,-70);
   glEnd();
//GENTENG KIRI
glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-90,80,-70);
   glVertex3f(-65,90,-50);
   glVertex3f(-65,90,50);
   glVertex3f(-90,80,70);
   glEnd();
//****************************************************************************************************************************************

//****************************************************************************************************************************************
//########################################################################################################################################
//JENDELA DAN SEKAT KAYU,TEMBOK
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//JENDELA
//****************************************************************************************************************************************
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-55,55,50.1);
   glVertex3f(55,55,50.1);
   glVertex3f(55,78,50.1);
   glVertex3f(-55,78,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-55,55,50.15);
   glVertex3f(55,55,50.15);
   glVertex3f(55,78,50.15);
   glVertex3f(-55,78,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-55,57,50.2);
   glVertex3f(55,57,50.2);
   glVertex3f(-55,60,50.2);
   glVertex3f(55,60,50.2);
   glVertex3f(-55,64,50.2);
   glVertex3f(55,64,50.2);
   glVertex3f(-55,67,50.2);
   glVertex3f(55,67,50.2);
   glVertex3f(-55,70,50.2);
   glVertex3f(55,70,50.2);
   glVertex3f(-55,74,50.2);
   glVertex3f(55,74,50.2);
   glVertex3f(-55,77,50.2);
   glVertex3f(55,77,50.2);

   glVertex3f(45,55,50.15);
   glVertex3f(45,78,50.15);
   glVertex3f(35,55,50.15);
   glVertex3f(35,78,50.15);
   glVertex3f(25,55,50.15);
   glVertex3f(25,78,50.15);
   glVertex3f(15,55,50.15);
   glVertex3f(15,78,50.15);
   glVertex3f(5,55,50.15);
   glVertex3f(5,78,50.15);
   glVertex3f(-45,55,50.15);
   glVertex3f(-45,78,50.15);
   glVertex3f(-35,55,50.15);
   glVertex3f(-35,78,50.15);
   glVertex3f(-25,55,50.15);
   glVertex3f(-25,78,50.15);
   glVertex3f(-15,55,50.15);
   glVertex3f(-15,78,50.15);
   glVertex3f(-5,55,50.15);
   glVertex3f(-5,78,50.15);
   glEnd();

//KANAN UJUNG.
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(63,55,50.1);
   glVertex3f(73,55,50.1);
   glVertex3f(73,78,50.1);
   glVertex3f(63,78,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(63,55,50.1);
   glVertex3f(73,55,50.1);
   glVertex3f(73,78,50.1);
   glVertex3f(63,78,50.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(63,60,50.15);
   glVertex3f(73,60,50.15);
   glVertex3f(63,65,50.15);
   glVertex3f(73,65,50.15);
   glVertex3f(63,70,50.15);
   glVertex3f(73,70,50.15);
   glVertex3f(63,75,50.15);
   glVertex3f(73,75,50.15);

   glVertex3f(66,55,50.15);
   glVertex3f(66,78,50.15);
   glVertex3f(70,55,50.15);
   glVertex3f(70,78,50.15);
   glEnd();
//KIRI UJUNG
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-63,55,50.1);
   glVertex3f(-73,55,50.1);
   glVertex3f(-73,78,50.1);
   glVertex3f(-63,78,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-63,55,50.1);
   glVertex3f(-73,55,50.1);
   glVertex3f(-73,78,50.1);
   glVertex3f(-63,78,50.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-63,60,50.15);
   glVertex3f(-73,60,50.15);
   glVertex3f(-63,65,50.15);
   glVertex3f(-73,65,50.15);
   glVertex3f(-63,70,50.15);
   glVertex3f(-73,70,50.15);
   glVertex3f(-63,75,50.15);
   glVertex3f(-73,75,50.15);

   glVertex3f(-66,55,50.15);
   glVertex3f(-66,78,50.15);
   glVertex3f(-70,55,50.15);
   glVertex3f(-70,78,50.15);
   glEnd();
//****************************************************************************************************************************************
//JENDELA KANAN DAN KIRI LANTAI 2
//KANAN 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(75.1,62,45);
   glVertex3f(75.1,62,30);
   glVertex3f(75.1,77,30);
   glVertex3f(75.1,77,45);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(75.1,62,45.1);
   glVertex3f(75.1,62,30.1);
   glVertex3f(75.1,77,30.1);
   glVertex3f(75.1,77,45.1);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(75.1,69,45.1);
   glVertex3f(75.1,69,30.1);
   glVertex3f(75.1,62,38.1);
   glVertex3f(75.1,77,38.1);
   glEnd();
//KANAN 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(75.1,62,25);
   glVertex3f(75.1,62,10);
   glVertex3f(75.1,77,10);
   glVertex3f(75.1,77,25);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(75.1,62,25.1);
   glVertex3f(75.1,62,10.1);
   glVertex3f(75.1,77,10.1);
   glVertex3f(75.1,77,25.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(75.1,69,25.1);
   glVertex3f(75.1,69,10.1);
   glVertex3f(75.1,62,18.1);
   glVertex3f(75.1,77,18.1);
   glEnd();
//KANAN 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(75.1,62,5);
   glVertex3f(75.1,62,-10);
   glVertex3f(75.1,77,-10);
   glVertex3f(75.1,77,5);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(75.1,62,5.1);
   glVertex3f(75.1,62,-10.1);
   glVertex3f(75.1,77,-10.1);
   glVertex3f(75.1,77,5.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(75.1,69,5.1);
   glVertex3f(75.1,69,-10.1);
   glVertex3f(75.1,62,-3.1);
   glVertex3f(75.1,77,-3.1);
   glEnd();
//KANAN 4
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(75.1,62,-15);
   glVertex3f(75.1,62,-30);
   glVertex3f(75.1,77,-30);
   glVertex3f(75.1,77,-15);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(75.1,62,-15.1);
   glVertex3f(75.1,62,-30.1);
   glVertex3f(75.1,77,-30.1);
   glVertex3f(75.1,77,-15.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(75.1,69,-15.1);
   glVertex3f(75.1,69,-30.1);
   glVertex3f(75.1,62,-23.1);
   glVertex3f(75.1,77,-23.1);
   glEnd();
//KANAN 5
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(75.1,62,-35);
   glVertex3f(75.1,62,-49);
   glVertex3f(75.1,77,-49);
   glVertex3f(75.1,77,-35);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(75.1,62,-35.1);
   glVertex3f(75.1,62,-49.1);
   glVertex3f(75.1,77,-49.1);
   glVertex3f(75.1,77,-35.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(75.1,69,-35.1);
   glVertex3f(75.1,69,-49.1);
   glVertex3f(75.1,62,-42.1);
   glVertex3f(75.1,77,-42.1);
   glEnd();

//KIRI 1
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-75.1,62,45);
   glVertex3f(-75.1,62,30);
   glVertex3f(-75.1,77,30);
   glVertex3f(-75.1,77,45);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-75.1,62,45.1);
   glVertex3f(-75.1,62,30.1);
   glVertex3f(-75.1,77,30.1);
   glVertex3f(-75.1,77,45.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-75.1,69,45.1);
   glVertex3f(-75.1,69,30.1);
   glVertex3f(-75.1,62,38.1);
   glVertex3f(-75.1,77,38.1);
   glEnd();
//KIRI 2
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-75.1,62,25);
   glVertex3f(-75.1,62,10);
   glVertex3f(-75.1,77,10);
   glVertex3f(-75.1,77,25);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-75.1,62,25.1);
   glVertex3f(-75.1,62,10.1);
   glVertex3f(-75.1,77,10.1);
   glVertex3f(-75.1,77,25.1);
   glEnd();
    glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-75.1,69,25.1);
   glVertex3f(-75.1,69,10.1);
   glVertex3f(-75.1,62,18.1);
   glVertex3f(-75.1,77,18.1);
   glEnd();
//KIRI 3
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-75.1,62,5);
   glVertex3f(-75.1,62,-10);
   glVertex3f(-75.1,77,-10);
   glVertex3f(-75.1,77,5);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-75.1,62,5.1);
   glVertex3f(-75.1,62,-10.1);
   glVertex3f(-75.1,77,-10.1);
   glVertex3f(-75.1,77,5.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-75.1,69,5.1);
   glVertex3f(-75.1,69,-10.1);
   glVertex3f(-75.1,62,-3.1);
   glVertex3f(-75.1,77,-3.1);
   glEnd();
//KIRI 4
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-75.1,62,-15);
   glVertex3f(-75.1,62,-30);
   glVertex3f(-75.1,77,-30);
   glVertex3f(-75.1,77,-15);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-75.1,62,-15.1);
   glVertex3f(-75.1,62,-30.1);
   glVertex3f(-75.1,77,-30.1);
   glVertex3f(-75.1,77,-15.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-75.1,69,-15.1);
   glVertex3f(-75.1,69,-30.1);
   glVertex3f(-75.1,62,-23.1);
   glVertex3f(-75.1,77,-23.1);
   glEnd();
//KIRI 5
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-75.1,62,-35);
   glVertex3f(-75.1,62,-49);
   glVertex3f(-75.1,77,-49);
   glVertex3f(-75.1,77,-35);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-75.1,62,-35.1);
   glVertex3f(-75.1,62,-49.1);
   glVertex3f(-75.1,77,-49.1);
   glVertex3f(-75.1,77,-35.1);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-75.1,69,-35.1);
   glVertex3f(-75.1,69,-49.1);
   glVertex3f(-75.1,62,-42.1);
   glVertex3f(-75.1,77,-42.1);
   glEnd();



//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//TEMBOK
//****************************************************************************************************************************************
//TEMBOK 1 DARI KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(38,53,50.29);
   glVertex3f(32,53,50.29);
   glVertex3f(32,80,50.29);
   glVertex3f(38,80,50.29);
   glEnd();

//TEMBOK 2
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(16,53,50.29);
   glVertex3f(10,53,50.29);
   glVertex3f(10,80,50.29);
   glVertex3f(16,80,50.29);
   glEnd();

//TEMBOK 3
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(-16,53,50.29);
   glVertex3f(-10,53,50.29);
   glVertex3f(-10,80,50.29);
   glVertex3f(-16,80,50.29);
   glEnd();

//TEMBOK 4
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(-38,53,50.29);
   glVertex3f(-32,53,50.29);
   glVertex3f(-32,80,50.29);
   glVertex3f(-38,80,50.29);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//HIASAN
//****************************************************************************************************************************************
   glBegin(GL_POLYGON);
   glColor3f(0,0,0.9);
   glVertex3f(-55,80,50.3);
   glVertex3f(55,80,50.3);
   glVertex3f(55,77,50.3);
   glVertex3f(-55,77,50.3);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0,0,0.9);
   glVertex3f(-55,73,50.3);
   glVertex3f(55,73,50.3);
   glVertex3f(55,76,50.3);
   glVertex3f(-55,76,50.3);
   glEnd();
//****************************************************************************************************************************************
//****************************************************************************************************************************************
//SEKAT KAYU
//****************************************************************************************************************************************
//SEKAT KAYU 1 DARI KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(36,55,50.35);
   glVertex3f(34,55,50.35);
   glVertex3f(34,79,50.35);
   glVertex3f(36,79,50.35);
   glEnd();

//SEKAT KAYU 2
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(14,55,50.35);
   glVertex3f(12,55,50.35);
   glVertex3f(12,79,50.35);
   glVertex3f(14,79,50.35);
   glEnd();

   //SEKAT KAYU 3
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-14,55,50.35);
   glVertex3f(-12,55,50.35);
   glVertex3f(-12,79,50.35);
   glVertex3f(-14,79,50.35);
   glEnd();

//SEKAT KAYU 4
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-36,55,50.35);
   glVertex3f(-34,55,50.35);
   glVertex3f(-34,79,50.35);
   glVertex3f(-36,79,50.35);
   glEnd();

//SEKAT TERAKHIR KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(60,55,50.1);
   glVertex3f(57,55,50.1);
   glVertex3f(57,78,50.1);
   glVertex3f(60,78,50.1);
   glEnd();

//SEKAT TERAKHIR KIRI
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-60,55,50.1);
   glVertex3f(-57,55,50.1);
   glVertex3f(-57,78,50.1);
   glVertex3f(-60,78,50.1);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

//########################################################################################################################################
//TEMBOK DAN GENTENG 3RD
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//TEMBOK
//****************************************************************************************************************************************
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.95,0.95,0.95);
   glVertex3f(-65,80,50);
   glVertex3f(65,80,50);
   glVertex3f(65,110,50);
   glVertex3f(-65,110,50);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.9,0.9,0.9);
   glVertex3f(65,110,50);
   glVertex3f(65,110,-50);
   glVertex3f(65,80,-50);
   glVertex3f(65,80,50);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0.8);
   glVertex3f(-65,110,50);
   glVertex3f(-65,110,-50);
   glVertex3f(-65,80,-50);
   glVertex3f(-65,80,50);
   glEnd();
//BELAKANG
glBegin(GL_POLYGON);
   glColor3f(0.9,0.9,0.9);
   glVertex3f(-65,110,-50);
   glVertex3f(65,110,-50);
   glVertex3f(65,80,-50);
   glVertex3f(-65,80,-50);
   glEnd();
//ATAS
glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0.8);
   glVertex3f(-75,110,60);
   glVertex3f(75,110,60);
   glVertex3f(75,110,-60);
   glVertex3f(-75,110,-60);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//****************************************************************************************************************************************
//JENDELA
//****************************************************************************************************************************************
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(-55,82,50.1);
   glVertex3f(55,82,50.1);
   glVertex3f(55,108,50.1);
   glVertex3f(-55,108,50.1);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(-55,82,50.15);
   glVertex3f(55,82,50.15);
   glVertex3f(55,108,50.15);
   glVertex3f(-55,108,50.15);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(-55,85,50.25);
   glVertex3f(55,85,50.25);
   glVertex3f(-55,88,50.25);
   glVertex3f(55,88,50.25);
   glVertex3f(-55,91,50.25);
   glVertex3f(55,91,50.25);
   glVertex3f(-55,94,50.25);
   glVertex3f(55,94,50.25);
   glVertex3f(-55,97,50.25);
   glVertex3f(55,97,50.25);
   glVertex3f(-55,101,50.25);
   glVertex3f(55,101,50.25);
   glVertex3f(-55,105,50.25);
   glVertex3f(55,105,50.25);

   glVertex3f(45,82,50.15);
   glVertex3f(45,108,50.15);
   glVertex3f(35,82,50.15);
   glVertex3f(35,108,50.15);
   glVertex3f(25,82,50.15);
   glVertex3f(25,108,50.15);
   glVertex3f(15,82,50.15);
   glVertex3f(15,108,50.15);
   glVertex3f(5,82,50.15);
   glVertex3f(5,108,50.15);
   glVertex3f(-45,82,50.15);
   glVertex3f(-45,108,50.15);
   glVertex3f(-35,82,50.15);
   glVertex3f(-35,108,50.15);
   glVertex3f(-25,82,50.15);
   glVertex3f(-25,108,50.15);
   glVertex3f(-15,82,50.15);
   glVertex3f(-15,108,50.15);
   glVertex3f(-5,82,50.15);
   glVertex3f(-5,108,50.15);
   glEnd();

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//TEMBOK
//****************************************************************************************************************************************
//TEMBOK 1 DARI KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(38,82,50.39);
   glVertex3f(32,82,50.39);
   glVertex3f(32,107.9,50.39);
   glVertex3f(38,107.9,50.39);
   glEnd();

//TEMBOK 2
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(16,82,50.39);
   glVertex3f(10,82,50.39);
   glVertex3f(10,107.9,50.39);
   glVertex3f(16,107.9,50.39);
   glEnd();

//TEMBOK 3
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(-16,82,50.39);
   glVertex3f(-10,82,50.39);
   glVertex3f(-10,107.9,50.39);
   glVertex3f(-16,107.9,50.39);
   glEnd();

//TEMBOK 4
   glBegin(GL_POLYGON);
   glColor3f(0.97,0.97,0.97);
   glVertex3f(-38,82,50.39);
   glVertex3f(-32,82,50.39);
   glVertex3f(-32,107.9,50.39);
   glVertex3f(-38,107.9,50.39);
   glEnd();

//****************************************************************************************************************************************
//HIASAN BIRU
//****************************************************************************************************************************************
   glBegin(GL_POLYGON);
   glColor3f(0,0,0.9);
   glVertex3f(-55,108,50.3);
   glVertex3f(55,108,50.3);
   glVertex3f(55,105,50.3);
   glVertex3f(-55,105,50.3);
   glEnd();

//****************************************************************************************************************************************
//SEKAT KAYU
//****************************************************************************************************************************************
//SEKAT KAYU 1 DARI KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(36,83,50.43);
   glVertex3f(34,83,50.43);
   glVertex3f(34,107,50.43);
   glVertex3f(36,107,50.43);
   glEnd();

//SEKAT KAYU 2
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(14,83,50.43);
   glVertex3f(12,83,50.43);
   glVertex3f(12,107,50.43);
   glVertex3f(14,107,50.43);
   glEnd();

   //SEKAT KAYU 3
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-14,83,50.43);
   glVertex3f(-12,83,50.43);
   glVertex3f(-12,107,50.43);
   glVertex3f(-14,107,50.43);
   glEnd();

//SEKAT KAYU 4
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-36,83,50.43);
   glVertex3f(-34,83,50.43);
   glVertex3f(-34,107,50.43);
   glVertex3f(-36,107,50.43);
   glEnd();

//SEKAT TERAKHIR KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(58,83,50.1);
   glVertex3f(57,83,50.1);
   glVertex3f(57,107,50.1);
   glVertex3f(58,107,50.1);
   glEnd();

//SEKAT TERAKHIR KIRI
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   glVertex3f(-58,83,50.1);
   glVertex3f(-57,83,50.1);
   glVertex3f(-57,107,50.1);
   glVertex3f(-58,107,50.1);
   glEnd();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^



//****************************************************************************************************************************************
//GENTENG
//****************************************************************************************************************************************
//DEPAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,110,60);
   glVertex3f(75,110,60);
   glVertex3f(65,120,30);
   glVertex3f(-65,120,30);
   glEnd();
//DEPAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.40,0,0);
   glVertex3f(-65,120,30);
   glVertex3f(65,120,30);
   glVertex3f(50,150,0);
   glVertex3f(-50,150,0);
   glEnd();
//BELAKANG
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,110,-60);
   glVertex3f(75,110,-60);
   glVertex3f(65,120,-30);
   glVertex3f(-65,120,-30);
   glEnd();
//DEPAN ATAS
   glBegin(GL_POLYGON);
   glColor3f(0.40,0,0);
   glVertex3f(-65,120,-30);
   glVertex3f(65,120,-30);
   glVertex3f(50,150,0);
   glVertex3f(-50,150,0);
   glEnd();
//KANAN
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(75,110,-60);
   glVertex3f(75,110,60);
   glVertex3f(60,121.6,25);
   glVertex3f(60,121.6,-25);
   glEnd();
//KANAN SEGITIGA
glBegin(GL_POLYGON);
   glColor3f(0.45,0,0);
   glVertex3f(50,150,0);
   glVertex3f(60,121.6,28);
   glVertex3f(60,121.6,-28);
   glEnd();
//KIRI
   glBegin(GL_POLYGON);
   glColor3f(0.35,0,0);
   glVertex3f(-75,110,-60);
   glVertex3f(-75,110,60);
   glVertex3f(-60,121.6,25);
   glVertex3f(-60,121.6,-25);
   glEnd();
//Kiri SEGITIGA
glBegin(GL_POLYGON);
   glColor3f(0.45,0,0);
   glVertex3f(-50,150,0);
   glVertex3f(-60,121.6,28);
   glVertex3f(-60,121.6,-28);
   glEnd();
	
//########################################################################################################################################
//OBJEK
//########################################################################################################################################
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//PAPAN TULIS
   glBegin(GL_POLYGON);
   glColor3f(1,1,0.3);
   glVertex3f(10,-10,-49);
   glVertex3f(-10,-10,-49);
   glVertex3f(-10,-30,-49);
   glVertex3f(10,-30,-49);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.2,1,0.2);
   glVertex3f(9,-11,-48.9);
   glVertex3f(-9,-11,-48.9);
   glVertex3f(-9,-29,-48.9);
   glVertex3f(9,-29,-48.9);
   glEnd();

//TONG SAMPAH
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(208,-79,160);
   glVertex3f(212,-79,160);
   glVertex3f(214,-79,158);
   glVertex3f(214,-79,156);
   glVertex3f(212,-79,154);
   glVertex3f(208,-79,154);
   glVertex3f(206,-79,156);
   glVertex3f(206,-79,158);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(208,-79,160);
   glVertex3f(212,-79,160);
   glVertex3f(212,-65,160);
   glVertex3f(208,-65,160);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(212,-79,160);
   glVertex3f(214,-79,158);
   glVertex3f(214,-65,158);
   glVertex3f(212,-65,160);
     glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(214,-79,158);
   glVertex3f(214,-79,156);
   glVertex3f(214,-65,156);
   glVertex3f(214,-65,158);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(214,-79,156);
   glVertex3f(212,-79,154);
   glVertex3f(212,-65,154);
   glVertex3f(214,-65,156);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(212,-79,154);
   glVertex3f(208,-79,154);
   glVertex3f(208,-65,154);
   glVertex3f(212,-65,154);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(208,-79,154);
   glVertex3f(206,-79,156);
   glVertex3f(206,-65,156);
   glVertex3f(208,-65,154);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(206,-79,156);
   glVertex3f(206,-79,158);
   glVertex3f(206,-65,158);
   glVertex3f(206,-65,156);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3f(1,0.4,0.4);
   glVertex3f(208,-79,160);
   glVertex3f(206,-79,158);
   glVertex3f(206,-65,158);
   glVertex3f(208,-65,160);
    glEnd();



//MEJA
   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(10,-40,-40);
   glVertex3f(-10,-40,-40);
   glVertex3f(-10,-40,-30);
   glVertex3f(10,-40,-30);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(10,-40,-40);
   glVertex3f(10,-50,-40);
   glVertex3f(10,-50,-30);
   glVertex3f(10,-40,-30);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(-10,-40,-40);
   glVertex3f(-10,-50,-40);
   glVertex3f(-10,-50,-30);
   glVertex3f(-10,-40,-30);
   glEnd();
//KURSI
   glBegin(GL_POLYGON);
   glColor3f(1,0.7,0.3);
   glVertex3f(3,-40,-20);
   glVertex3f(-3,-40,-20);
   glVertex3f(-3,-40,-15);
   glVertex3f(3,-40,-15);
   glEnd();
   //KAKI KURSI
   //KANAN
   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(3,-40,-20);
   glVertex3f(3,-50,-20);
   glVertex3f(3,-50,-15);
   glVertex3f(3,-40,-15);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0.8);
   glVertex3f(3.1,-42,-19);
   glVertex3f(3.1,-50,-19);
   glVertex3f(3.1,-50,-16);
   glVertex3f(3.1,-42,-16);
   glEnd();
   //KIRI
   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(-3,-40,-20);
   glVertex3f(-3,-50,-20);
   glVertex3f(-3,-50,-15);
   glVertex3f(-3,-40,-15);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0.8);
   glVertex3f(-3.1,-42,-19);
   glVertex3f(-3.1,-50,-19);
   glVertex3f(-3.1,-50,-16);
   glVertex3f(-3.1,-42,-16);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(1,0.8,0.3);
   glVertex3f(3,-30,-15);
   glVertex3f(-3,-30,-15);
   glVertex3f(-3,-40,-15);
   glVertex3f(3,-40,-15);
   glEnd();

//JAM DINDING
 glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   glVertex3f(8,10,-49);
   glVertex3f(12,10,-49);
   glVertex3f(14,8,-49);
   glVertex3f(14,6,-49);
   glVertex3f(12,4,-49);
   glVertex3f(8,4,-49);
   glVertex3f(6,6,-49);
   glVertex3f(6,8,-49);
   glEnd();
   glBegin(GL_LINE_LOOP);
   glColor3f(0,0,0);
   glVertex3f(8,10,-48.9);
   glVertex3f(12,10,-48.9);
   glVertex3f(14,8,-48.9);
   glVertex3f(14,6,-48.9);
   glVertex3f(12,4,-48.9);
   glVertex3f(8,4,-48.9);
   glVertex3f(6,6,-48.9);
   glVertex3f(6,8,-48.9);
   glEnd();

   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(10,9,-48.9);
   glVertex3f(10,7,-48.9);
   glEnd();
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex3f(7,7,-48.9);
   glVertex3f(10,7,-48.9);
   glEnd();
	
	

//HOLBED JOSHUA PETTY - 672018260


	glPopMatrix();
	glutSwapBuffers();
}

void keyboard (unsigned char key, int x, int y)
{
	switch (key)
	{
		//maju
		case 'w':
		case 'W':
			glTranslatef(0,0,3);
			break;
		//mundur
		case 's':
		case 'S':
			glTranslatef(0,0,-3);
			break;
		//kanan
		case 'd':
		case 'D':
			glTranslatef(3,0,0);
			break;
		//kiri
		case 'a':
		case 'A':
			glTranslatef(-3,0,0);
			break;
		//naik
		case '7':
			glTranslatef(0,3,0);
			break;
		//turun
		case '9':
			glTranslatef(0,-3,0);
			break;
		//memutar maju naik
		case '2':
			glRotatef(2,1,0,0);
			break;
		//memutar maju turun
		case '8':
			glRotatef(-2,1,0,0);
			break;
		//memutar maju kanan
		case '6':
			glRotatef(2,0,1,0);
			break;
		//memutar maju kiri
		case '4':
			glRotatef(-2,0,1,0);
			break;
		//memutar kiri ditempat
		case '1':
			glRotatef(2,0,0,1);
			break;
		//	memutar kanan ditempat
		case '3':
			glRotatef(-2,0,0,1);
			break;
		//lihat bagian dalam
		case '5':
			if(is_depth)
			{
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else
			{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
	}
	tampil();
}

void idle()
{
	if (!mouseDown)
	{
		xrot += 0.3;
		yrot += 0.4;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void mouseMotion(int x, int y)
{
	if(mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi ==0) tinggi =1;
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(50,lebar/tinggi, 5, 1000);
glTranslatef(0,0,-200);
glMatrixMode(GL_MODELVIEW);
