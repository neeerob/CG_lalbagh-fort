#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846

void display1() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(166,231,255);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
////////////////////////////////////////////
/////////////bulding start/////////



    //N:Try to write every QUADS function in a individual function.

    glBegin(GL_QUADS);
    glColor3ub(247,127,0 ); //Total building structure
        glVertex2f(-0.425,0.0f);
        glVertex2f(0.425,0.0f);
        glVertex2f(0.425,0.50f);
        glVertex2f(-0.425,0.50f);
        glEnd();

    /////////////////////////////////////////////
    ////////// Left Tower Gombuj ////////////////
    GLfloat x_Left_Tower =-0.425f; GLfloat y_Left_Tower = 0.65f; GLfloat red_Left_Tower =.07f;
	int triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128, 43, 0);
		glVertex2f(x_Left_Tower , y_Left_Tower); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_Left_Tower + (red_Left_Tower * cos(i *  twicePi / triangleAmount)),
			    y_Left_Tower + (red_Left_Tower * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	/////////////////////////////////////////////
    ////////// Right Tower Gombuj ////////////////
    GLfloat x_Right_Tower =0.425f; GLfloat y_Right_Tower = 0.65f; GLfloat red_Right_Tower =.07f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128, 43, 0);
		glVertex2f(x_Right_Tower , y_Right_Tower); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_Right_Tower + (red_Right_Tower * cos(i *  twicePi / triangleAmount)),
			    y_Right_Tower + (red_Right_Tower * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////////////////////////////////////
    ////////// Right Small Tower Gombuj ////////////////
    GLfloat x_Right_small_Tower =0.2f; GLfloat y_Right_small_Tower = 0.64f; GLfloat red_Right_small_Tower =.037f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 0, 0);
		glVertex2f(x_Right_small_Tower , y_Right_small_Tower); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_Right_small_Tower + (red_Right_small_Tower * cos(i *  twicePi / triangleAmount)),
			    y_Right_small_Tower + (red_Right_small_Tower * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	/////////////////////////////////////////////
    ////////// Left Small Tower Gombuj ////////////////
    GLfloat x_Left_small_Tower =-0.2f; GLfloat y_Left_small_Tower = 0.64f; GLfloat red_Left_small_Tower =.037f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 0, 0);
		glVertex2f(x_Left_small_Tower , y_Left_small_Tower); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_Left_small_Tower + (red_Left_small_Tower * cos(i *  twicePi / triangleAmount)),
			    y_Left_small_Tower + (red_Left_small_Tower * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    glBegin(GL_QUADS); //Left tower
    glColor3ub(228,132,0);
        glVertex2f(-0.375f,0.0f);
        glVertex2f(-0.375f,0.60);
        glVertex2f(-0.475f,0.60);
        glVertex2f(-0.475f,0.0f);
        glEnd();


        glBegin(GL_QUADS); //Right tower
    glColor3ub(228,132,0);
        glVertex2f(0.375f,0.0f);
        glVertex2f(0.375f,0.60);
        glVertex2f(0.475f,0.60);
        glVertex2f( 0.475f,0.0f);
        glEnd();

    glBegin(GL_QUADS); //Upper block tower
    glColor3ub(179, 89, 0);
        glVertex2f(-0.25f,0.50f);
        glVertex2f(0.25f,0.50);
        glVertex2f(0.25f,0.525);
        glVertex2f(-0.25f,0.525f);
        glEnd();

    glBegin(GL_QUADS); //Design Upper block tower - Left
    glColor3ub(179, 89, 0);
        glVertex2f(-0.375f,0.475f);
        glVertex2f(-0.225f,0.475);
        glVertex2f(-0.225f,0.50);
        glVertex2f(-0.375f,0.50f);
        glEnd();

    glBegin(GL_QUADS); //Design Upper block tower - Right
    glColor3ub(179, 89, 0);
        glVertex2f(0.375f,0.475f);
        glVertex2f(0.225f,0.475);
        glVertex2f(0.225f,0.50);
        glVertex2f(0.375f,0.50f);
        glEnd();

    glBegin(GL_QUADS); //Design left tower - Left
    glColor3ub(179, 89, 0);
        glVertex2f(-0.35f,0.600f);
        glVertex2f(-0.500f,0.600f);
        glVertex2f(-0.50f,0.625f);
        glVertex2f(-0.35f,0.625f);
        glEnd();

    glBegin(GL_QUADS); //Design left tower - Right
    glColor3ub(179, 89, 0);
        glVertex2f(0.35f,0.600f);
        glVertex2f(0.500f,0.600f);
        glVertex2f(0.50f,0.625f);
        glVertex2f(0.35f,0.625f);
        glEnd();

    glBegin(GL_QUADS); //Middle tower block - MIDDLE
    glColor3ub(179, 89, 0);
        glVertex2f(0.1f,0.525);
        glVertex2f(-0.1f,0.525);
        glVertex2f(-0.1f,0.575f);
        glVertex2f(0.1f,0.575f);
        glEnd();

    glBegin(GL_QUADS); //Left side small tower -LEFT
    glColor3ub(228,132,0);
        glVertex2f(-0.175f,0.525f);
        glVertex2f(-0.225f,0.525f);
        glVertex2f(-0.225f,0.60f);
        glVertex2f(-0.175f,0.60f);
        glEnd();

    glBegin(GL_QUADS); //Right side small tower -RIGHT
    glColor3ub(228,132,0);
        glVertex2f(0.175f,0.525f);
        glVertex2f(0.225f,0.525f);
        glVertex2f(0.225f,0.60f);
        glVertex2f(0.175f,0.60f);
        glEnd();

    glBegin(GL_QUADS); //Design Left side small tower -LEFT
    glColor3ub(179, 89, 0);
        glVertex2f(-0.1625f,0.60f);
        glVertex2f(-0.2375f,0.60f);
        glVertex2f(-0.2375f,0.625f);
        glVertex2f(-0.1625f,0.625f);
        glEnd();

    glBegin(GL_QUADS); //Design Right side small tower -RIGHT
    glColor3ub(179, 89, 0);
        glVertex2f(0.1625f,0.60f);
        glVertex2f(0.2375f,0.60f);
        glVertex2f(0.2375f,0.625f);
        glVertex2f(0.1625f,0.625f);
        glEnd();

    glBegin(GL_QUADS); //Lower side steps
    glColor3ub(179, 89, 0);
        glVertex2f(0.575f,0.0f);
        glVertex2f(-0.575f,0.0f);
        glVertex2f(-0.575f,0.025f);
        glVertex2f(0.575f,0.025f);
        glEnd();


    glBegin(GL_QUADS); //Lower side steps -2
    glColor3ub(204, 102, 0);
        glVertex2f(0.525f,0.025f);
        glVertex2f(-0.525f,0.025f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();




    /*glColor3ub(210,105,30); //part 2
        glVertex2f(-0.60f,0.32f);
        glVertex2f(0.40f,0.32f);
        glVertex2f(0.40f,0.27f);
        glVertex2f(-0.60f,0.27f);

    glColor3ub(228,132,0); // samner side
        glVertex2f(-0.30f,-0.20f);
        glVertex2f(0.10f,-0.20f);
        glVertex2f(0.10f,0.35f);
        glVertex2f(-0.30f,0.35f);

    glColor3ub(210,105,30); // samner side
        glVertex2f(-0.30f,0.33f);
        glVertex2f(0.10f,0.33f);
        glVertex2f(0.10f,0.38f);
        glVertex2f(-0.30f,0.38f);

    glColor3ub(210,180,140 ); //low
        glVertex2f(-0.63f,-0.20f);
        glVertex2f(0.43f,-0.20f);
        glVertex2f(0.43f,-0.25f);
        glVertex2f(-0.63f,-0.25f);

    glColor3ub(210,180,140 ); //low
        glVertex2f(-0.65f,-0.25f);
        glVertex2f(0.45f,-0.25f);
        glVertex2f(0.45f,-0.30f);
        glVertex2f(-0.65f,-0.30f);

    glColor3ub(228,132,0); //part 1 side
        glVertex2f(-0.60f,-0.20f);
        glVertex2f(-0.52f,-0.20f);
        glVertex2f(-0.52f,0.40f);
        glVertex2f(-0.60f,0.40f);

    glColor3ub(228,132,0 ); //part 1
        glVertex2f(0.32f,-0.20f);
        glVertex2f(0.40f,-0.20f);
        glVertex2f(0.40f,0.40f);
        glVertex2f(0.32f,0.40f);

        glEnd();*/



    glFlush();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Test");
glutInitWindowSize(320, 320);
glutDisplayFunc(display1);
glutMainLoop();
return 0;
}

