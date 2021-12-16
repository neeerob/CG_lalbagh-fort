#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846

GLfloat position=0.0f;// cloud 2 right
GLfloat speed=0.02f;//cloud 2 right
GLfloat position2=0.0f;// cloud 1 left
GLfloat speed2=0.02f;//cloud  1 left
GLfloat position3=0.0f;// snow fall
GLfloat speed3=0.008f;//snow fall
GLfloat positionRain=0.0f;// Rain
GLfloat speedRain=0.008f;//Rain
GLfloat position4=0.0f;// Rain cloud
GLfloat speed4=0.008f;//Rain cloud
GLfloat position5=0.0f;// Rain cloud
GLfloat speed5=0.02f;//Rain cloud


void update(int value)// For cloud 2 right
{
    if(position<-1.0)
        position=1.0f;

    position -=speed;
    glutPostRedisplay();
    glutTimerFunc(100,update,0);
}

void update2(int value2)// For cloud 1 left
{
    if(position2>1.0)
        position2=-1.0f;

    position2 +=speed2;
    glutPostRedisplay();
    glutTimerFunc(100,update2,0);
}

void update3(int value3)// Snow fall
{
    if(position3<-1.0)
        position3=1.0f;

    position3 -=speed3;
    glutPostRedisplay();
    glutTimerFunc(10,update3,0);
}

void updateRain(int valueRain)// Rain
{
if(positionRain < -.20){
positionRain = 0.0f;
}



positionRain -= speedRain;
glutPostRedisplay();



glutTimerFunc(500,updateRain,0);
}
void updatecloud(int value4)// Rain cloud moving
{
    if(position4 < -.110){
        position4  = 0.0f;
    }

    position4 -= speed4;
    glutPostRedisplay();

    glutTimerFunc(500,updatecloud,0);
}

void update5(int value)// For human moving
{
    if(position5<-1.0)
        position5=1.0f;

    position5 -=speed5;
    glutPostRedisplay();
    glutTimerFunc(100,update5,0);
}



void morning() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////
////////////////////////////////////////////
/////////////Sky-Part Start/////////
////////////////////////////////////////////
    glBegin(GL_QUADS);
    glColor3ub(166,231,255);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
        glEnd();


    //----------------------------------------//
//----------------- SUN ----------------- //
//----------------------------------------//

GLfloat x_sun=.7f; GLfloat y_sun=.8f; GLfloat radius_sun =.08f; //Lamp 1 top
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,77);
		glVertex2f(x_sun, y_sun); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_sun + (radius_sun * cos(i *  twicePi / triangleAmount)),
			    y_sun + (radius_sun * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.5f,0.7f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.9f,0.7f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.7f,0.6f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.9f,0.9f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.5f,0.9f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.7f,1.0f);
glVertex2f(0.7f,0.8f);
glEnd();

//----------------------------------------//
//----------------- Cloud Start- Ayesha----------------- //
//----------------------------------------//

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255 );
        glVertex2f(-0.58,0.5f);
        glVertex2f(0.58,0.5f);
        glVertex2f(0.58,0.6f);
        glVertex2f(-0.58,0.6f);
        glEnd();

        GLfloat x_cloud=.56f; GLfloat y_cloud=.6f; GLfloat radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x_cloud=-.56f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.68f;  y_cloud=.6f; radius_cloud =.06f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	    x_cloud=-.68f;  y_cloud=.6f; radius_cloud =.06; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.3f;  y_cloud=.6f; radius_cloud =.07f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.1f;  y_cloud=.6f; radius_cloud =.09f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=.2f;  y_cloud=.6f; radius_cloud =.11f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.2f;  y_cloud=.62f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.4f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.3f;  y_cloud=.62f; radius_cloud =.05f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//----------------------------------------//
//----------------- Moving Cloud Start- Ayesha----------------- //
//----------------------------------------//
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    x_cloud=-0.9f;   y_cloud=0.9f;   radius_cloud =0.05f;
     int i;
	int lineAmount = 100;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.9f;  y_cloud=0.98f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.97f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.85f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	 glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
	x_cloud=0.8f; y_cloud=0.8f; radius_cloud =0.06f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.8f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.75f; y_cloud=0.89f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
glPopMatrix();
glLoadIdentity();









////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding start-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

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
    triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

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

	/////////////////////////Gombuz - Main ////





GLfloat x_center_hombuz = 0.0f; GLfloat y_center_hombuz = 0.6f; GLfloat r_center_hombuz =0.1f;
//int triangleAmount = 500; //# of triangles used to draw circle



//GLfloat radius = 0.8f; //radius



glBegin(GL_TRIANGLE_FAN);
glColor3ub(117,115,92);
glVertex2f(x_center_hombuz , y_center_hombuz); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_center_hombuz + (r_center_hombuz * cos(i * twicePi / triangleAmount)),
y_center_hombuz + (r_center_hombuz * sin(i * twicePi / triangleAmount))
);
}
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Main Tower
glColor3ub(117,115,92);
glVertex2f(-0.05f,0.625f);
glVertex2f(0.0f,0.725f);
glVertex2f(0.05f,0.625f);
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Left Tower
glColor3ub(128, 43, 0);
glVertex2f(0.475f,0.675f);
glVertex2f(0.425f,0.75f);
glVertex2f(0.375f,0.675f);
glEnd();







glBegin(GL_TRIANGLES); // Design for curve - Right tower
glColor3ub(128, 43, 0);
glVertex2f(-0.475f,0.675f);
glVertex2f(-0.425f,0.75f);
glVertex2f(-0.375f,0.675f);
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



//////////////////////////////////////////////////////////////////////
                      ///Left tower
/////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
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

        glBegin(GL_QUADS); //Upper middle part
    glColor3ub(242,133,0);
        glVertex2f(-0.23f,0.0f);
        glVertex2f(0.23f,0.0);
        glVertex2f(0.23f,0.50);
        glVertex2f(-0.23f,0.50f);
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
        glVertex2f(0.525f,0.023f);
        glVertex2f(-0.525f,0.023f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();


        glBegin(GL_QUADS); //Main-Door
    glColor3ub(109,50,20);
        glVertex2f(-0.125f,0.05f);
        glVertex2f(-0.125f,0.39f);
        glVertex2f(0.125f,0.39f);
        glVertex2f(0.125f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door - color adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.3675f);
        glVertex2f(0.12f,0.3675f);
        glVertex2f(0.12f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //For  - main door - squre color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.25f);
        glVertex2f(0.12f,0.25f);
        glVertex2f(0.12f,0.05f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.12f,0.26f);
        glVertex2f(-0.12f,0.26f);
        glVertex2f(0.0f,0.3675f);
        glEnd();




        /////////////////////////////////////////////
    ////////// DOOK CURVE ////////////////
    GLfloat x_door_durve_center =0.0f; GLfloat y_door_durve_center = 0.235f; GLfloat r_door_durve_center =.12f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241 );
		glVertex2f(x_door_durve_center , y_door_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_durve_center + (r_door_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_durve_center + (r_door_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


     GLfloat x_door_1_durve_center =0.0f; GLfloat y_door_1_durve_center = 0.255f; GLfloat r_door_1_durve_center =0.063f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_door_1_durve_center , y_door_1_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_1_durve_center + (r_door_1_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_1_durve_center + (r_door_1_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
        glColor3ub(76, 76, 73);
        glVertex2f(-0.0625f,0.06f);
        glVertex2f(-0.0625f,0.27f);
        glVertex2f(0.0625f,0.27f);
        glVertex2f(0.0625f,0.06f);
        glEnd();

////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS); //Right-Main door win
    glColor3ub(109,50,20);
        glVertex2f(-0.225f,0.05f);
        glVertex2f(-0.325f,0.05f);
        glVertex2f(-0.325f,0.25f);
        glVertex2f(-0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment
       glColor3ub(194, 102, 10);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.245f);
        glVertex2f(-0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.175f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(-0.25f,0.06f);
        glVertex2f(-0.25f,0.175f);
        glVertex2f(-0.3f,0.175f);
        glVertex2f(-0.3f,0.06f);
        glEnd();

     /////////////////////////////////////////////
    ////////// Win - CURVE - left ////////////////
    GLfloat x_win_l_durve_center = -0.275f; GLfloat y_win_l_durve_center = 0.183f; GLfloat r_win_l_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_l_durve_center , y_win_l_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_l_durve_center + (r_win_l_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_l_durve_center + (r_win_l_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x_win_2_durve_center = -0.275f; GLfloat y_win_2_durve_center = 0.15f; GLfloat r_win_2_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_2_durve_center , y_win_2_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_2_durve_center + (r_win_2_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_2_durve_center + (r_win_2_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(109,50,20);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_3_durve_center = 0.275f; GLfloat y_win_3_durve_center = 0.183f; GLfloat r_win_3_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_3_durve_center , y_win_3_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_3_durve_center + (r_win_3_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_3_durve_center + (r_win_3_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    GLfloat x_win_4_durve_center = 0.275f; GLfloat y_win_4_durve_center = 0.15f; GLfloat r_win_4_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_4_durve_center , y_win_4_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_4_durve_center + (r_win_4_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_4_durve_center + (r_win_4_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////




///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(-0.53f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob///
////////////////////////////////////////////
////////////////////////////////////////////

//--------------------------------------------------  Left Column 2nd Conumn Details----------------------------------------------------


///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.347f,0.05f,0.0f);

glScaled(.38,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.28f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
    }

glLoadIdentity();



//--------------------------------------------------  Left -Right column end -------------------------------------------



    glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(0.3775f,0.529f);
        glVertex2f(0.47f,0.529f);
        glVertex2f(0.47f,0.59f);
        glVertex2f(0.3775f,0.59f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(0.381f,0.534f);
        glVertex2f(0.466f,0.534f);
        glVertex2f(0.466f,0.584f);
        glVertex2f(0.381f,0.584f);
        glEnd();


        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.08f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();



        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.168f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();





        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.63f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();

    ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
    glScaled(1.0f,1.3f,0);
    glTranslated(0.25,-0.22,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

        glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.075,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();
        glLoadIdentity();


        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////


















    //---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//----------------------------------------Fountain side- Muntasir----------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glBegin(GL_QUADS); //road
glColor3ub(122, 122, 82);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // // Fountain front wall
glColor3ub(0, 143, 179);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.1f,-0.1f);
glEnd();
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glEnd();


glBegin(GL_QUADS); // Fountain left wall
glColor3ub(0, 102, 128);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(-0.3f,-1.0f);
glVertex2f(-0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(-0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain right wall
glColor3ub(0, 102, 128);
glVertex2f(0.1f,-0.1f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain Floor
glColor3ub(255, 255, 230);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(-0.3f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain 1
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.2f);
glVertex2f(0.01f,-0.2f);
glVertex2f(0.02f,-0.3f);
glVertex2f(-0.02f,-0.3f);
glEnd();

GLfloat x_fountain=.0f; GLfloat y_fountain=-.2f; GLfloat radius_fountain =.02f; //Fountain 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // Fountain 2
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.4f);
glVertex2f(0.01f,-0.4f);
glVertex2f(0.023f,-0.5f);
glVertex2f(-0.023f,-0.5f);
glEnd();

 x_fountain=.0f;  y_fountain=-.4f;  radius_fountain =.02f; //Fountain 2 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 3
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.6f);
glVertex2f(0.01f,-0.6f);
glVertex2f(0.026f,-0.7f);
glVertex2f(-0.026f,-0.7f);
glEnd();

x_fountain=.0f;  y_fountain=-.6f;  radius_fountain =.02f; //Fountain 3 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 4
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.8f);
glVertex2f(0.01f,-0.8f);
glVertex2f(0.026f,-0.9f);
glVertex2f(-0.026f,-0.9f);
glEnd();

x_fountain=.0f;  y_fountain=-.8f;  radius_fountain =.02f; //Fountain 4 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//--------------------------------------------------//
   //--------------------------------------------------//
  // ---------------------- Lawn ---------------------//
 //--------------------------------------------------//
//--------------------------------------------------//

glBegin(GL_QUADS); // Lawn left
glColor3ub(102, 51, 0);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glVertex2f(-0.8f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Lawn right
glColor3ub(102, 51, 0);
glVertex2f(1.0f,-0.1f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.8f,-1.0f);
glVertex2f(1.0f,-1.0f);
glEnd();



  // ---------------- Starting Left Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.6f,-0.2f);
glVertex2f(-0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.8f,-0.4f);
glVertex2f(-0.81f,-0.4f);
glVertex2f(-0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(-0.75f,-0.45f);
glVertex2f(-0.75f,-0.7f);
glVertex2f(-0.74f,-0.7f);
glVertex2f(-0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(-0.85f,-0.45f);
glVertex2f(-0.65f,-0.45f);
glVertex2f(-0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(-0.9f,-0.7f);
glVertex2f(-0.9f,-0.9f);
glVertex2f(-0.91f,-0.9f);
glVertex2f(-0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(-1.0f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.9f,0.4f);
glEnd();

 // ---------------- Starting Right Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,-0.4f);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.6f,-0.2f);
glVertex2f(0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.81f,-0.4f);
glVertex2f(0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(0.75f,-0.45f);
glVertex2f(0.75f,-0.7f);
glVertex2f(0.74f,-0.7f);
glVertex2f(0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(0.85f,-0.45f);
glVertex2f(0.65f,-0.45f);
glVertex2f(0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,-0.9f);
glVertex2f(0.91f,-0.9f);
glVertex2f(0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(1.0f,-0.7f);
glVertex2f(0.8f,-0.7f);
glVertex2f(0.9f,0.4f);
glEnd();

  // ----------------- Starting Lamp -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

// ----- Left Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(-0.2f,-0.1f);
glVertex2f(-0.2f,-0.4f);
glVertex2f(-0.21f,-0.4f);
glVertex2f(-0.21f,-0.1f);
glEnd();
GLfloat x_lamp=-.2f; GLfloat y_lamp=-.1f; GLfloat radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.6f);
glVertex2f(-0.37f,-0.9f);
glVertex2f(-0.38f,-0.9f);
glVertex2f(-0.38f,-0.6f);
glEnd();
 x_lamp=-.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


// ----- Right Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(0.2f,-0.1f);
glVertex2f(0.2f,-0.4f);
glVertex2f(0.21f,-0.4f);
glVertex2f(0.21f,-0.1f);
glEnd();
 x_lamp=.2f;  y_lamp=-.1f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.6f);
glVertex2f(0.37f,-0.9f);
glVertex2f(0.38f,-0.9f);
glVertex2f(0.38f,-0.6f);
glEnd();
x_lamp=.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    glFlush();
}


void night(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////
////////////////////////////////////////////
/////////////Sky-Part Start/////////
////////////////////////////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
        glEnd();


    //----------------------------------------//
//----------------- Moon ----------------- //
//----------------------------------------//

GLfloat x_sun=-.7f; GLfloat y_sun=.8f; GLfloat radius_sun =.1f; //Lamp 1 top
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_sun, y_sun); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_sun + (radius_sun * cos(i *  twicePi / triangleAmount)),
			    y_sun + (radius_sun * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

  x_sun=-.65f;  y_sun=.8f; radius_sun =.1f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x_sun, y_sun); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_sun + (radius_sun * cos(i *  twicePi / triangleAmount)),
			    y_sun + (radius_sun * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




//----------------------------------------//
//----------------- Cloud Start- Ayesha----------------- //
//----------------------------------------//

        glBegin(GL_QUADS);
        glColor3ub(217, 217, 217 );
        glVertex2f(-0.58,0.5f);
        glVertex2f(0.58,0.5f);
        glVertex2f(0.58,0.6f);
        glVertex2f(-0.58,0.6f);
        glEnd();

        GLfloat x_cloud=.56f; GLfloat y_cloud=.6f; GLfloat radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x_cloud=-.56f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.68f;  y_cloud=.6f; radius_cloud =.06f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	    x_cloud=-.68f;  y_cloud=.6f; radius_cloud =.06; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.3f;  y_cloud=.6f; radius_cloud =.07f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.1f;  y_cloud=.6f; radius_cloud =.09f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=.2f;  y_cloud=.6f; radius_cloud =.11f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.2f;  y_cloud=.62f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.4f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.3f;  y_cloud=.62f; radius_cloud =.05f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 217, 217);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//----------------------------------------//
//----------------- Moving Cloud Start- Ayesha----------------- //
//----------------------------------------//
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    x_cloud=-0.9f;   y_cloud=0.9f;   radius_cloud =0.05f;
     int i;
	int lineAmount = 100;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(217, 217, 217);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.9f;  y_cloud=0.98f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.97f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.85f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	 glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
	x_cloud=0.8f; y_cloud=0.8f; radius_cloud =0.06f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.8f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.75f; y_cloud=0.89f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(217, 217, 217);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
glPopMatrix();
glLoadIdentity();


//----------------------------------------//
//----------------- Star at night- Ayesha----------------- //
//----------------------------------------//


//-----------------Right side Star-----------------------//
 GLfloat x_star=.8f; GLfloat y_star=.9f; GLfloat radius_star =.003f; //star-1
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_star=.9f;  y_star=.85f;  radius_star =.003f; //star-2
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

 x_star=.95f;  y_star=.75f;  radius_star =.003f; //star-3
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.55f;  y_star=.45f;  radius_star =.003f; //star-4
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x_star=.65f;  y_star=.35f;  radius_star =.003f; //star-4
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.75f;  y_star=.45f;  radius_star =.003f; //star-5
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.85f;  y_star=.35f;  radius_star =.003f; //star-6
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.85f;  y_star=.55f;  radius_star =.003f; //star-7
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.85f;  y_star=.55f;  radius_star =.003f; //star-8
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.6f;  y_star=.25f;  radius_star =.003f; //star-9
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.6f;  y_star=.75f;  radius_star =.003f; //star-10
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.7f;  y_star=.7f;  radius_star =.003f; //star-11
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x_star=.1f;  y_star=.75f;  radius_star =.003f; //star-12
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.2f;  y_star=.85f;  radius_star =.003f; //star-13
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x_star=.3f;  y_star=.9f;  radius_star =.003f; //star-14
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.4f;  y_star=.95f;  radius_star =.003f; //star-15
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.1f;  y_star=.95f;  radius_star =.003f; //star-16
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.95f;  y_star=.2f;  radius_star =.003f; //star-17
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.97f;  y_star=.5f;  radius_star =.003f; //star-18
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=.4f;  y_star=.8f;  radius_star =.003f; //star-19
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	//-----------------Left side Star-----------------------//
  x_star=-.8f; y_star=.9f;  radius_star =.003f; //star-1
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_star=-.9f;  y_star=.85f;  radius_star =.003f; //star-2
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

 x_star=-.95f;  y_star=.75f;  radius_star =.003f; //star-3
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.55f;  y_star=.45f;  radius_star =.003f; //star-4
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x_star=-.65f;  y_star=.35f;  radius_star =.003f; //star-4
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.75f;  y_star=.45f;  radius_star =.003f; //star-5
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.85f;  y_star=.35f;  radius_star =.003f; //star-6
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.85f;  y_star=.55f;  radius_star =.003f; //star-7
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.85f;  y_star=.55f;  radius_star =.003f; //star-8
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.6f;  y_star=.25f;  radius_star =.003f; //star-9
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.6f;  y_star=.75f;  radius_star =.003f; //star-10
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.7f;  y_star=.7f;  radius_star =.003f; //star-11
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x_star=-.1f;  y_star=.75f;  radius_star =.003f; //star-12
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.2f;  y_star=.85f;  radius_star =.003f; //star-13
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x_star=-.3f;  y_star=.9f;  radius_star =.003f; //star-14
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.4f;  y_star=.95f;  radius_star =.003f; //star-15
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.1f;  y_star=.95f;  radius_star =.003f; //star-16
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_star=-.95f;  y_star=.2f;  radius_star =.003f; //star-17
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.97f;  y_star=.5f;  radius_star =.003f; //star-18
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_star=-.4f;  y_star=.8f;  radius_star =.003f; //star-19
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_star, y_star); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_star + (radius_star * cos(i *  twicePi / triangleAmount)),
			    y_star + (radius_star * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();












////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding start-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

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
    triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

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

/////////////////////////Gombuz - Main ////





GLfloat x_center_hombuz = 0.0f; GLfloat y_center_hombuz = 0.6f; GLfloat r_center_hombuz =0.1f;
//int triangleAmount = 500; //# of triangles used to draw circle



//GLfloat radius = 0.8f; //radius



glBegin(GL_TRIANGLE_FAN);
glColor3ub(117,115,92);
glVertex2f(x_center_hombuz , y_center_hombuz); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_center_hombuz + (r_center_hombuz * cos(i * twicePi / triangleAmount)),
y_center_hombuz + (r_center_hombuz * sin(i * twicePi / triangleAmount))
);
}
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Main Tower
glColor3ub(117,115,92);
glVertex2f(-0.05f,0.625f);
glVertex2f(0.0f,0.725f);
glVertex2f(0.05f,0.625f);
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Left Tower
glColor3ub(128, 43, 0);
glVertex2f(0.475f,0.675f);
glVertex2f(0.425f,0.75f);
glVertex2f(0.375f,0.675f);
glEnd();







glBegin(GL_TRIANGLES); // Design for curve - Right tower
glColor3ub(128, 43, 0);
glVertex2f(-0.475f,0.675f);
glVertex2f(-0.425f,0.75f);
glVertex2f(-0.375f,0.675f);
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



//////////////////////////////////////////////////////////////////////
                      ///Left tower
/////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
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

        glBegin(GL_QUADS); //Upper middle part
    glColor3ub(242,133,0);
        glVertex2f(-0.23f,0.0f);
        glVertex2f(0.23f,0.0);
        glVertex2f(0.23f,0.50);
        glVertex2f(-0.23f,0.50f);
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
        glVertex2f(0.525f,0.023f);
        glVertex2f(-0.525f,0.023f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();


        glBegin(GL_QUADS); //Main-Door
    glColor3ub(109,50,20);
        glVertex2f(-0.125f,0.05f);
        glVertex2f(-0.125f,0.39f);
        glVertex2f(0.125f,0.39f);
        glVertex2f(0.125f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door - color adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.3675f);
        glVertex2f(0.12f,0.3675f);
        glVertex2f(0.12f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //For  - main door - squre color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.25f);
        glVertex2f(0.12f,0.25f);
        glVertex2f(0.12f,0.05f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.12f,0.26f);
        glVertex2f(-0.12f,0.26f);
        glVertex2f(0.0f,0.3675f);
        glEnd();




        /////////////////////////////////////////////
    ////////// DOOK CURVE ////////////////
    GLfloat x_door_durve_center =0.0f; GLfloat y_door_durve_center = 0.235f; GLfloat r_door_durve_center =.12f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241 );
		glVertex2f(x_door_durve_center , y_door_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_durve_center + (r_door_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_durve_center + (r_door_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


     GLfloat x_door_1_durve_center =0.0f; GLfloat y_door_1_durve_center = 0.255f; GLfloat r_door_1_durve_center =0.063f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_door_1_durve_center , y_door_1_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_1_durve_center + (r_door_1_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_1_durve_center + (r_door_1_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
        glColor3ub(76, 76, 73);
        glVertex2f(-0.0625f,0.06f);
        glVertex2f(-0.0625f,0.27f);
        glVertex2f(0.0625f,0.27f);
        glVertex2f(0.0625f,0.06f);
        glEnd();

////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS); //Right-Main door win
    glColor3ub(109,50,20);
        glVertex2f(-0.225f,0.05f);
        glVertex2f(-0.325f,0.05f);
        glVertex2f(-0.325f,0.25f);
        glVertex2f(-0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment
       glColor3ub(194, 102, 10);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.245f);
        glVertex2f(-0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.175f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(-0.25f,0.06f);
        glVertex2f(-0.25f,0.175f);
        glVertex2f(-0.3f,0.175f);
        glVertex2f(-0.3f,0.06f);
        glEnd();

     /////////////////////////////////////////////
    ////////// Win - CURVE - left ////////////////
    GLfloat x_win_l_durve_center = -0.275f; GLfloat y_win_l_durve_center = 0.183f; GLfloat r_win_l_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_l_durve_center , y_win_l_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_l_durve_center + (r_win_l_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_l_durve_center + (r_win_l_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x_win_2_durve_center = -0.275f; GLfloat y_win_2_durve_center = 0.15f; GLfloat r_win_2_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_2_durve_center , y_win_2_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_2_durve_center + (r_win_2_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_2_durve_center + (r_win_2_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(109,50,20);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_3_durve_center = 0.275f; GLfloat y_win_3_durve_center = 0.183f; GLfloat r_win_3_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_3_durve_center , y_win_3_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_3_durve_center + (r_win_3_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_3_durve_center + (r_win_3_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    GLfloat x_win_4_durve_center = 0.275f; GLfloat y_win_4_durve_center = 0.15f; GLfloat r_win_4_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_4_durve_center , y_win_4_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_4_durve_center + (r_win_4_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_4_durve_center + (r_win_4_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////




///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(-0.53f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

//--------------------------------------------------  Left Column 2nd Conumn Details----------------------------------------------------


///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.347f,0.05f,0.0f);

glScaled(.38,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.28f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
    }

glLoadIdentity();



//--------------------------------------------------  Left -Right column end -------------------------------------------



    glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(0.3775f,0.529f);
        glVertex2f(0.47f,0.529f);
        glVertex2f(0.47f,0.59f);
        glVertex2f(0.3775f,0.59f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(0.381f,0.534f);
        glVertex2f(0.466f,0.534f);
        glVertex2f(0.466f,0.584f);
        glVertex2f(0.381f,0.584f);
        glEnd();


        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.08f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();



        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.168f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();





        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.63f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();

    ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
    glScaled(1.0f,1.3f,0);
    glTranslated(0.25,-0.22,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

        glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.075,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();
        glLoadIdentity();

        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////





























    //---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//----------------------------------------Fountain side----------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glBegin(GL_QUADS); //road
glColor3ub(122, 122, 82);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // // Fountain front wall
glColor3ub(0, 143, 179);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.1f,-0.1f);
glEnd();
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glEnd();


glBegin(GL_QUADS); // Fountain left wall
glColor3ub(0, 102, 128);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(-0.3f,-1.0f);
glVertex2f(-0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(-0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain right wall
glColor3ub(0, 102, 128);
glVertex2f(0.1f,-0.1f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain Floor
glColor3ub(255, 255, 230);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(-0.3f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain 1
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.2f);
glVertex2f(0.01f,-0.2f);
glVertex2f(0.02f,-0.3f);
glVertex2f(-0.02f,-0.3f);
glEnd();

GLfloat x_fountain=.0f; GLfloat y_fountain=-.2f; GLfloat radius_fountain =.02f; //Fountain 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // Fountain 2
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.4f);
glVertex2f(0.01f,-0.4f);
glVertex2f(0.023f,-0.5f);
glVertex2f(-0.023f,-0.5f);
glEnd();

 x_fountain=.0f;  y_fountain=-.4f;  radius_fountain =.02f; //Fountain 2 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 3
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.6f);
glVertex2f(0.01f,-0.6f);
glVertex2f(0.026f,-0.7f);
glVertex2f(-0.026f,-0.7f);
glEnd();

x_fountain=.0f;  y_fountain=-.6f;  radius_fountain =.02f; //Fountain 3 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 4
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.8f);
glVertex2f(0.01f,-0.8f);
glVertex2f(0.026f,-0.9f);
glVertex2f(-0.026f,-0.9f);
glEnd();

x_fountain=.0f;  y_fountain=-.8f;  radius_fountain =.02f; //Fountain 4 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_QUADS); // Lawn left
glColor3ub(102, 51, 0);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glVertex2f(-0.8f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Lawn right
glColor3ub(102, 51, 0);
glVertex2f(1.0f,-0.1f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.8f,-1.0f);
glVertex2f(1.0f,-1.0f);
glEnd();



  // ---------------- Starting Left Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.6f,-0.2f);
glVertex2f(-0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.8f,-0.4f);
glVertex2f(-0.81f,-0.4f);
glVertex2f(-0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(-0.75f,-0.45f);
glVertex2f(-0.75f,-0.7f);
glVertex2f(-0.74f,-0.7f);
glVertex2f(-0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(-0.85f,-0.45f);
glVertex2f(-0.65f,-0.45f);
glVertex2f(-0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(-0.9f,-0.7f);
glVertex2f(-0.9f,-0.9f);
glVertex2f(-0.91f,-0.9f);
glVertex2f(-0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(-1.0f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.9f,0.4f);
glEnd();

 // ---------------- Starting Right Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,-0.4f);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.6f,-0.2f);
glVertex2f(0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.81f,-0.4f);
glVertex2f(0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(0.75f,-0.45f);
glVertex2f(0.75f,-0.7f);
glVertex2f(0.74f,-0.7f);
glVertex2f(0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(0.85f,-0.45f);
glVertex2f(0.65f,-0.45f);
glVertex2f(0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,-0.9f);
glVertex2f(0.91f,-0.9f);
glVertex2f(0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(1.0f,-0.7f);
glVertex2f(0.8f,-0.7f);
glVertex2f(0.9f,0.4f);
glEnd();

  // ----------------- Starting Lamp -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

// ----- Left Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(-0.2f,-0.1f);
glVertex2f(-0.2f,-0.4f);
glVertex2f(-0.21f,-0.4f);
glVertex2f(-0.21f,-0.1f);
glEnd();
GLfloat x_lamp=-.2f; GLfloat y_lamp=-.1f; GLfloat radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 51);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.6f);
glVertex2f(-0.37f,-0.9f);
glVertex2f(-0.38f,-0.9f);
glVertex2f(-0.38f,-0.6f);
glEnd();
 x_lamp=-.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 51);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


// ----- Right Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(0.2f,-0.1f);
glVertex2f(0.2f,-0.4f);
glVertex2f(0.21f,-0.4f);
glVertex2f(0.21f,-0.1f);
glEnd();
 x_lamp=.2f;  y_lamp=-.1f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 51);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.6f);
glVertex2f(0.37f,-0.9f);
glVertex2f(0.38f,-0.9f);
glVertex2f(0.38f,-0.6f);
glEnd();
x_lamp=.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 51);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    glFlush();

}


void winter() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////
////////////////////////////////////////////
/////////////Sky-Part Start/////////
////////////////////////////////////////////
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 153);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
        glEnd();


    //----------------------------------------//
//----------------- SUN ----------------- //
//----------------------------------------//

GLfloat x_sun=.7f; GLfloat y_sun=.8f; GLfloat radius_sun =.08f; //Lamp 1 top
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 153);
		glVertex2f(x_sun, y_sun); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_sun + (radius_sun * cos(i *  twicePi / triangleAmount)),
			    y_sun + (radius_sun * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




//----------------------------------------//
//----------------- Cloud Start- Ayesha----------------- //
//----------------------------------------//

        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204 );
        glVertex2f(-0.58,0.5f);
        glVertex2f(0.58,0.5f);
        glVertex2f(0.58,0.6f);
        glVertex2f(-0.58,0.6f);
        glEnd();

        GLfloat x_cloud=.56f; GLfloat y_cloud=.6f; GLfloat radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x_cloud=-.56f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.68f;  y_cloud=.6f; radius_cloud =.06f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	    x_cloud=-.68f;  y_cloud=.6f; radius_cloud =.06; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.3f;  y_cloud=.6f; radius_cloud =.07f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.1f;  y_cloud=.6f; radius_cloud =.09f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=.2f;  y_cloud=.6f; radius_cloud =.11f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.2f;  y_cloud=.62f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.4f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.3f;  y_cloud=.62f; radius_cloud =.05f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//----------------------------------------//
//----------------- Moving Cloud Start- Ayesha----------------- //
//----------------------------------------//
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    x_cloud=-0.9f;   y_cloud=0.9f;   radius_cloud =0.05f;
     int i;
	int lineAmount = 100;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(204, 204, 204);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.9f;  y_cloud=0.98f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.97f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.85f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	 glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
	x_cloud=0.8f; y_cloud=0.8f; radius_cloud =0.06f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.8f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.75f; y_cloud=0.89f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
glPopMatrix();
glLoadIdentity();

	x_cloud=0.8f; y_cloud=0.8f; radius_cloud =0.06f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.8f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.75f; y_cloud=0.89f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(204, 204, 204);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();





////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding start-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

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
    triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

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


    /////////////////////////Gombuz - Main ////





GLfloat x_center_hombuz = 0.0f; GLfloat y_center_hombuz = 0.6f; GLfloat r_center_hombuz =0.1f;
//int triangleAmount = 500; //# of triangles used to draw circle



//GLfloat radius = 0.8f; //radius



glBegin(GL_TRIANGLE_FAN);
glColor3ub(117,115,92);
glVertex2f(x_center_hombuz , y_center_hombuz); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_center_hombuz + (r_center_hombuz * cos(i * twicePi / triangleAmount)),
y_center_hombuz + (r_center_hombuz * sin(i * twicePi / triangleAmount))
);
}
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Main Tower
glColor3ub(117,115,92);
glVertex2f(-0.05f,0.625f);
glVertex2f(0.0f,0.725f);
glVertex2f(0.05f,0.625f);
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Left Tower
glColor3ub(128, 43, 0);
glVertex2f(0.475f,0.675f);
glVertex2f(0.425f,0.75f);
glVertex2f(0.375f,0.675f);
glEnd();







glBegin(GL_TRIANGLES); // Design for curve - Right tower
glColor3ub(128, 43, 0);
glVertex2f(-0.475f,0.675f);
glVertex2f(-0.425f,0.75f);
glVertex2f(-0.375f,0.675f);
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



//////////////////////////////////////////////////////////////////////
                      ///Left tower
/////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
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

        glBegin(GL_QUADS); //Upper middle part
    glColor3ub(242,133,0);
        glVertex2f(-0.23f,0.0f);
        glVertex2f(0.23f,0.0);
        glVertex2f(0.23f,0.50);
        glVertex2f(-0.23f,0.50f);
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
        glVertex2f(0.525f,0.023f);
        glVertex2f(-0.525f,0.023f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();


        glBegin(GL_QUADS); //Main-Door
    glColor3ub(109,50,20);
        glVertex2f(-0.125f,0.05f);
        glVertex2f(-0.125f,0.39f);
        glVertex2f(0.125f,0.39f);
        glVertex2f(0.125f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door - color adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.3675f);
        glVertex2f(0.12f,0.3675f);
        glVertex2f(0.12f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //For  - main door - squre color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.25f);
        glVertex2f(0.12f,0.25f);
        glVertex2f(0.12f,0.05f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.12f,0.26f);
        glVertex2f(-0.12f,0.26f);
        glVertex2f(0.0f,0.3675f);
        glEnd();




        /////////////////////////////////////////////
    ////////// DOOK CURVE ////////////////
    GLfloat x_door_durve_center =0.0f; GLfloat y_door_durve_center = 0.235f; GLfloat r_door_durve_center =.12f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241 );
		glVertex2f(x_door_durve_center , y_door_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_durve_center + (r_door_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_durve_center + (r_door_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


     GLfloat x_door_1_durve_center =0.0f; GLfloat y_door_1_durve_center = 0.255f; GLfloat r_door_1_durve_center =0.063f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_door_1_durve_center , y_door_1_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_1_durve_center + (r_door_1_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_1_durve_center + (r_door_1_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
        glColor3ub(76, 76, 73);
        glVertex2f(-0.0625f,0.06f);
        glVertex2f(-0.0625f,0.27f);
        glVertex2f(0.0625f,0.27f);
        glVertex2f(0.0625f,0.06f);
        glEnd();

////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS); //Right-Main door win
    glColor3ub(109,50,20);
        glVertex2f(-0.225f,0.05f);
        glVertex2f(-0.325f,0.05f);
        glVertex2f(-0.325f,0.25f);
        glVertex2f(-0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment
       glColor3ub(194, 102, 10);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.245f);
        glVertex2f(-0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.175f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(-0.25f,0.06f);
        glVertex2f(-0.25f,0.175f);
        glVertex2f(-0.3f,0.175f);
        glVertex2f(-0.3f,0.06f);
        glEnd();

     /////////////////////////////////////////////
    ////////// Win - CURVE - left ////////////////
    GLfloat x_win_l_durve_center = -0.275f; GLfloat y_win_l_durve_center = 0.183f; GLfloat r_win_l_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_l_durve_center , y_win_l_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_l_durve_center + (r_win_l_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_l_durve_center + (r_win_l_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x_win_2_durve_center = -0.275f; GLfloat y_win_2_durve_center = 0.15f; GLfloat r_win_2_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_2_durve_center , y_win_2_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_2_durve_center + (r_win_2_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_2_durve_center + (r_win_2_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(109,50,20);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_3_durve_center = 0.275f; GLfloat y_win_3_durve_center = 0.183f; GLfloat r_win_3_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_3_durve_center , y_win_3_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_3_durve_center + (r_win_3_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_3_durve_center + (r_win_3_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    GLfloat x_win_4_durve_center = 0.275f; GLfloat y_win_4_durve_center = 0.15f; GLfloat r_win_4_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_4_durve_center , y_win_4_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_4_durve_center + (r_win_4_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_4_durve_center + (r_win_4_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////




///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(-0.53f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

//--------------------------------------------------  Left Column 2nd Conumn Details----------------------------------------------------


///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.347f,0.05f,0.0f);

glScaled(.38,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.28f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
    }

glLoadIdentity();



//--------------------------------------------------  Left -Right column end -------------------------------------------



    glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(0.3775f,0.529f);
        glVertex2f(0.47f,0.529f);
        glVertex2f(0.47f,0.59f);
        glVertex2f(0.3775f,0.59f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(0.381f,0.534f);
        glVertex2f(0.466f,0.534f);
        glVertex2f(0.466f,0.584f);
        glVertex2f(0.381f,0.584f);
        glEnd();


        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.08f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();



        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.168f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();





        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.63f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();

    ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
    glScaled(1.0f,1.3f,0);
    glTranslated(0.25,-0.22,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

        glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.075,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();
        glLoadIdentity();

        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////


















    //---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//----------------------------------------Fountain side- Muntasir----------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glBegin(GL_QUADS); //road
glColor3ub(122, 122, 82);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // // Fountain front wall
glColor3ub(0, 143, 179);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.1f,-0.1f);
glEnd();
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glEnd();


glBegin(GL_QUADS); // Fountain left wall
glColor3ub(0, 102, 128);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(-0.3f,-1.0f);
glVertex2f(-0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(-0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain right wall
glColor3ub(0, 102, 128);
glVertex2f(0.1f,-0.1f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain Floor
glColor3ub(255, 255, 230);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(-0.3f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain 1
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.2f);
glVertex2f(0.01f,-0.2f);
glVertex2f(0.02f,-0.3f);
glVertex2f(-0.02f,-0.3f);
glEnd();

GLfloat x_fountain=.0f; GLfloat y_fountain=-.2f; GLfloat radius_fountain =.02f; //Fountain 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // Fountain 2
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.4f);
glVertex2f(0.01f,-0.4f);
glVertex2f(0.023f,-0.5f);
glVertex2f(-0.023f,-0.5f);
glEnd();

 x_fountain=.0f;  y_fountain=-.4f;  radius_fountain =.02f; //Fountain 2 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 3
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.6f);
glVertex2f(0.01f,-0.6f);
glVertex2f(0.026f,-0.7f);
glVertex2f(-0.026f,-0.7f);
glEnd();

x_fountain=.0f;  y_fountain=-.6f;  radius_fountain =.02f; //Fountain 3 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 4
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.8f);
glVertex2f(0.01f,-0.8f);
glVertex2f(0.026f,-0.9f);
glVertex2f(-0.026f,-0.9f);
glEnd();

x_fountain=.0f;  y_fountain=-.8f;  radius_fountain =.02f; //Fountain 4 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//--------------------------------------------------//
   //--------------------------------------------------//
  // ---------------------- Lawn ---------------------//
 //--------------------------------------------------//
//--------------------------------------------------//

glBegin(GL_QUADS); // Lawn left
glColor3ub(102, 51, 0);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glVertex2f(-0.8f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Lawn right
glColor3ub(102, 51, 0);
glVertex2f(1.0f,-0.1f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.8f,-1.0f);
glVertex2f(1.0f,-1.0f);
glEnd();



  // ---------------- Starting Left Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.6f,-0.2f);
glVertex2f(-0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.8f,-0.4f);
glVertex2f(-0.81f,-0.4f);
glVertex2f(-0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(-0.75f,-0.45f);
glVertex2f(-0.75f,-0.7f);
glVertex2f(-0.74f,-0.7f);
glVertex2f(-0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(-0.85f,-0.45f);
glVertex2f(-0.65f,-0.45f);
glVertex2f(-0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(-0.9f,-0.7f);
glVertex2f(-0.9f,-0.9f);
glVertex2f(-0.91f,-0.9f);
glVertex2f(-0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(-1.0f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.9f,0.4f);
glEnd();

 // ---------------- Starting Right Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,-0.4f);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.6f,-0.2f);
glVertex2f(0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.81f,-0.4f);
glVertex2f(0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(0.75f,-0.45f);
glVertex2f(0.75f,-0.7f);
glVertex2f(0.74f,-0.7f);
glVertex2f(0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(0.85f,-0.45f);
glVertex2f(0.65f,-0.45f);
glVertex2f(0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,-0.9f);
glVertex2f(0.91f,-0.9f);
glVertex2f(0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(1.0f,-0.7f);
glVertex2f(0.8f,-0.7f);
glVertex2f(0.9f,0.4f);
glEnd();

  // ----------------- Starting Lamp -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

// ----- Left Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(-0.2f,-0.1f);
glVertex2f(-0.2f,-0.4f);
glVertex2f(-0.21f,-0.4f);
glVertex2f(-0.21f,-0.1f);
glEnd();
GLfloat x_lamp=-.2f; GLfloat y_lamp=-.1f; GLfloat radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.6f);
glVertex2f(-0.37f,-0.9f);
glVertex2f(-0.38f,-0.9f);
glVertex2f(-0.38f,-0.6f);
glEnd();
 x_lamp=-.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


// ----- Right Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(0.2f,-0.1f);
glVertex2f(0.2f,-0.4f);
glVertex2f(0.21f,-0.4f);
glVertex2f(0.21f,-0.1f);
glEnd();
 x_lamp=.2f;  y_lamp=-.1f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.6f);
glVertex2f(0.37f,-0.9f);
glVertex2f(0.38f,-0.9f);
glVertex2f(0.38f,-0.6f);
glEnd();
x_lamp=.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 // ----------------- Snow fall start -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

//-----------------------Right side snow---------------------------//

glPushMatrix();
    glTranslatef(0.0f,position3,0.0f);
GLfloat x_snow=.95f; GLfloat y_snow=.95f; GLfloat radius_snow =.01f; //snow-1
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x_snow=.95f;  y_snow=.9f;  radius_snow =.01f; //snow-2
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_snow=.95f;  y_snow=.7f;  radius_snow =.01f; //snow-3
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=.95f;  y_snow=.4f;  radius_snow =.01f; //snow-4
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    x_snow=.75f;  y_snow=.99f;  radius_snow =.01f; //snow-5
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.75f;  y_snow=.69f;  radius_snow =.01f; //snow-6
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.75f;  y_snow=.39f;  radius_snow =.01f; //snow-7
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=.75f;  y_snow=-.39f;  radius_snow =.01f; //snow-8
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.75f;  y_snow=-.69f;  radius_snow =.01f; //snow-9
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.55f;  y_snow=.99f;  radius_snow =.01f; //snow-10
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.55f;  y_snow=.15f;  radius_snow =.01f; //snow-11
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

x_snow=.55f;  y_snow=-.25f;  radius_snow =.01f; //snow-12
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=.55f;  y_snow=-.05f;  radius_snow =.01f; //snow-13
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=.35f;  y_snow=.99f;  radius_snow =.01f; //snow-14
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.35f;  y_snow=.79f;  radius_snow =.01f; //snow-15
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.35f;  y_snow=.7f;  radius_snow =.01f; //snow-16
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.35f;  y_snow=-.7f;  radius_snow =.01f; //snow-17
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.35f;  y_snow=-.3f;  radius_snow =.01f; //snow-18
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=.99f;  radius_snow =.01f; //snow-19
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=.85f;  radius_snow =.01f; //snow-20
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=.35f;  radius_snow =.01f; //snow-21
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=-.15f;  radius_snow =.01f; //snow-22
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=-.45f;  radius_snow =.01f; //snow-23
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=.15f;  y_snow=-.95f;  radius_snow =.01f; //snow-24
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//-----------------------Left side snow---------------------------//

glPushMatrix();
    glTranslatef(0.0f,position3,0.0f);
 x_snow=-.95f;  y_snow=.95f; radius_snow =.01f; //snow-1
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x_snow=-.95f;  y_snow=.9f;  radius_snow =.01f; //snow-2
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_snow=-.95f;  y_snow=.7f;  radius_snow =.01f; //snow-3
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=-.95f;  y_snow=.4f;  radius_snow =.01f; //snow-4
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    x_snow=-.75f;  y_snow=.99f;  radius_snow =.01f; //snow-5
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.75f;  y_snow=.69f;  radius_snow =.01f; //snow-6
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.75f;  y_snow=.39f;  radius_snow =.01f; //snow-7
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=-.75f;  y_snow=-.39f;  radius_snow =.01f; //snow-8
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.75f;  y_snow=-.69f;  radius_snow =.01f; //snow-9
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.55f;  y_snow=.99f;  radius_snow =.01f; //snow-10
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.55f;  y_snow=.15f;  radius_snow =.01f; //snow-11
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

x_snow=-.55f;  y_snow=-.25f;  radius_snow =.01f; //snow-12
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=-.55f;  y_snow=-.05f;  radius_snow =.01f; //snow-13
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x_snow=-.35f;  y_snow=.99f;  radius_snow =.01f; //snow-14
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.35f;  y_snow=.79f;  radius_snow =.01f; //snow-15
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.35f;  y_snow=.7f;  radius_snow =.01f; //snow-16
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.35f;  y_snow=-.7f;  radius_snow =.01f; //snow-17
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.35f;  y_snow=-.3f;  radius_snow =.01f; //snow-18
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=.99f;  radius_snow =.01f; //snow-19
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=.85f;  radius_snow =.01f; //snow-20
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=.35f;  radius_snow =.01f; //snow-21
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=-.15f;  radius_snow =.01f; //snow-22
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=-.45f;  radius_snow =.01f; //snow-23
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_snow=-.15f;  y_snow=-.95f;  radius_snow =.01f; //snow-24
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x_snow, y_snow); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_snow + (radius_snow * cos(i *  twicePi / triangleAmount)),
			    y_snow + (radius_snow * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPopMatrix();
    glLoadIdentity();
    glFlush();
}

void rain(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////
////////////////////////////////////////////
/////////////Sky-Part Start/////////
////////////////////////////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 96, 128);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
        glEnd();



//----------------------------------------//
//----------------- Cloud Start- Ayesha----------------- //
//----------------------------------------//

        glBegin(GL_QUADS);
        glColor3ub(140, 140, 140 );
        glVertex2f(-0.58,0.5f);
        glVertex2f(0.58,0.5f);
        glVertex2f(0.58,0.6f);
        glVertex2f(-0.58,0.6f);
        glEnd();

        GLfloat x_cloud=.56f; GLfloat y_cloud=.6f; GLfloat radius_cloud =.1f; //Lamp 1 top
int	triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x_cloud=-.56f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.68f;  y_cloud=.6f; radius_cloud =.06f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	    x_cloud=-.68f;  y_cloud=.6f; radius_cloud =.06; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.3f;  y_cloud=.6f; radius_cloud =.07f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.1f;  y_cloud=.6f; radius_cloud =.09f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=.2f;  y_cloud=.6f; radius_cloud =.11f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.2f;  y_cloud=.62f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.4f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.3f;  y_cloud=.62f; radius_cloud =.05f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(140, 140, 140);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//----------------------------------------//
//----------------- Moving Cloud Start- Ayesha----------------- //
//----------------------------------------//
    glPushMatrix();
    glTranslatef(position4,0.0f,0.0f);
    x_cloud=-0.95f;   y_cloud=0.92f;   radius_cloud =0.13f;
     int i;
	int lineAmount = 100;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.75f;  y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.55f;  y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.35f;  y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.15f;  y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.15f;  y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	x_cloud=0.05f; y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.25f; y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.45f; y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.65f; y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.92f; radius_cloud =0.13f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	x_cloud=0.98f; y_cloud=0.92f; radius_cloud =0.15f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(140, 140, 140);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
glPopMatrix();
glLoadIdentity();









////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding start-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

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
    triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

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

	/////////////////////////Gombuz - Main ////





GLfloat x_center_hombuz = 0.0f; GLfloat y_center_hombuz = 0.6f; GLfloat r_center_hombuz =0.1f;
//int triangleAmount = 500; //# of triangles used to draw circle



//GLfloat radius = 0.8f; //radius



glBegin(GL_TRIANGLE_FAN);
glColor3ub(117,115,92);
glVertex2f(x_center_hombuz , y_center_hombuz); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_center_hombuz + (r_center_hombuz * cos(i * twicePi / triangleAmount)),
y_center_hombuz + (r_center_hombuz * sin(i * twicePi / triangleAmount))
);
}
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Main Tower
glColor3ub(117,115,92);
glVertex2f(-0.05f,0.625f);
glVertex2f(0.0f,0.725f);
glVertex2f(0.05f,0.625f);
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Left Tower
glColor3ub(128, 43, 0);
glVertex2f(0.475f,0.675f);
glVertex2f(0.425f,0.75f);
glVertex2f(0.375f,0.675f);
glEnd();







glBegin(GL_TRIANGLES); // Design for curve - Right tower
glColor3ub(128, 43, 0);
glVertex2f(-0.475f,0.675f);
glVertex2f(-0.425f,0.75f);
glVertex2f(-0.375f,0.675f);
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



//////////////////////////////////////////////////////////////////////
                      ///Left tower
/////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
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

        glBegin(GL_QUADS); //Upper middle part
    glColor3ub(242,133,0);
        glVertex2f(-0.23f,0.0f);
        glVertex2f(0.23f,0.0);
        glVertex2f(0.23f,0.50);
        glVertex2f(-0.23f,0.50f);
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
        glVertex2f(0.525f,0.023f);
        glVertex2f(-0.525f,0.023f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();


        glBegin(GL_QUADS); //Main-Door
    glColor3ub(109,50,20);
        glVertex2f(-0.125f,0.05f);
        glVertex2f(-0.125f,0.39f);
        glVertex2f(0.125f,0.39f);
        glVertex2f(0.125f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door - color adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.3675f);
        glVertex2f(0.12f,0.3675f);
        glVertex2f(0.12f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //For  - main door - squre color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.25f);
        glVertex2f(0.12f,0.25f);
        glVertex2f(0.12f,0.05f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.12f,0.26f);
        glVertex2f(-0.12f,0.26f);
        glVertex2f(0.0f,0.3675f);
        glEnd();




        /////////////////////////////////////////////
    ////////// DOOK CURVE ////////////////
    GLfloat x_door_durve_center =0.0f; GLfloat y_door_durve_center = 0.235f; GLfloat r_door_durve_center =.12f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241 );
		glVertex2f(x_door_durve_center , y_door_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_durve_center + (r_door_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_durve_center + (r_door_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


     GLfloat x_door_1_durve_center =0.0f; GLfloat y_door_1_durve_center = 0.255f; GLfloat r_door_1_durve_center =0.063f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_door_1_durve_center , y_door_1_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_1_durve_center + (r_door_1_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_1_durve_center + (r_door_1_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
        glColor3ub(76, 76, 73);
        glVertex2f(-0.0625f,0.06f);
        glVertex2f(-0.0625f,0.27f);
        glVertex2f(0.0625f,0.27f);
        glVertex2f(0.0625f,0.06f);
        glEnd();

////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS); //Right-Main door win
    glColor3ub(109,50,20);
        glVertex2f(-0.225f,0.05f);
        glVertex2f(-0.325f,0.05f);
        glVertex2f(-0.325f,0.25f);
        glVertex2f(-0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment
       glColor3ub(194, 102, 10);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.245f);
        glVertex2f(-0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.175f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(-0.25f,0.06f);
        glVertex2f(-0.25f,0.175f);
        glVertex2f(-0.3f,0.175f);
        glVertex2f(-0.3f,0.06f);
        glEnd();

     /////////////////////////////////////////////
    ////////// Win - CURVE - left ////////////////
    GLfloat x_win_l_durve_center = -0.275f; GLfloat y_win_l_durve_center = 0.183f; GLfloat r_win_l_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_l_durve_center , y_win_l_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_l_durve_center + (r_win_l_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_l_durve_center + (r_win_l_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x_win_2_durve_center = -0.275f; GLfloat y_win_2_durve_center = 0.15f; GLfloat r_win_2_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_2_durve_center , y_win_2_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_2_durve_center + (r_win_2_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_2_durve_center + (r_win_2_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(109,50,20);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_3_durve_center = 0.275f; GLfloat y_win_3_durve_center = 0.183f; GLfloat r_win_3_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_3_durve_center , y_win_3_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_3_durve_center + (r_win_3_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_3_durve_center + (r_win_3_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    GLfloat x_win_4_durve_center = 0.275f; GLfloat y_win_4_durve_center = 0.15f; GLfloat r_win_4_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_4_durve_center , y_win_4_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_4_durve_center + (r_win_4_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_4_durve_center + (r_win_4_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////




///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(-0.53f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

//--------------------------------------------------  Left Column 2nd Conumn Details----------------------------------------------------


///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.347f,0.05f,0.0f);

glScaled(.38,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.28f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
    }

glLoadIdentity();



//--------------------------------------------------  Left -Right column end -------------------------------------------



    glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(0.3775f,0.529f);
        glVertex2f(0.47f,0.529f);
        glVertex2f(0.47f,0.59f);
        glVertex2f(0.3775f,0.59f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(0.381f,0.534f);
        glVertex2f(0.466f,0.534f);
        glVertex2f(0.466f,0.584f);
        glVertex2f(0.381f,0.584f);
        glEnd();


        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.08f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();



        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.168f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();





        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.63f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();

    ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
    glScaled(1.0f,1.3f,0);
    glTranslated(0.25,-0.22,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

        glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.075,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();
        glLoadIdentity();


        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////


















    //---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//----------------------------------------Fountain side- Muntasir----------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glBegin(GL_QUADS); //road
glColor3ub(122, 122, 82);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // // Fountain front wall
glColor3ub(0, 143, 179);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.1f,-0.1f);
glEnd();
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glEnd();


glBegin(GL_QUADS); // Fountain left wall
glColor3ub(0, 102, 128);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(-0.3f,-1.0f);
glVertex2f(-0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(-0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain right wall
glColor3ub(0, 102, 128);
glVertex2f(0.1f,-0.1f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain Floor
glColor3ub(255, 255, 230);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(-0.3f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain 1
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.2f);
glVertex2f(0.01f,-0.2f);
glVertex2f(0.02f,-0.3f);
glVertex2f(-0.02f,-0.3f);
glEnd();

GLfloat x_fountain=.0f; GLfloat y_fountain=-.2f; GLfloat radius_fountain =.02f; //Fountain 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // Fountain 2
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.4f);
glVertex2f(0.01f,-0.4f);
glVertex2f(0.023f,-0.5f);
glVertex2f(-0.023f,-0.5f);
glEnd();

 x_fountain=.0f;  y_fountain=-.4f;  radius_fountain =.02f; //Fountain 2 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 3
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.6f);
glVertex2f(0.01f,-0.6f);
glVertex2f(0.026f,-0.7f);
glVertex2f(-0.026f,-0.7f);
glEnd();

x_fountain=.0f;  y_fountain=-.6f;  radius_fountain =.02f; //Fountain 3 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 4
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.8f);
glVertex2f(0.01f,-0.8f);
glVertex2f(0.026f,-0.9f);
glVertex2f(-0.026f,-0.9f);
glEnd();

x_fountain=.0f;  y_fountain=-.8f;  radius_fountain =.02f; //Fountain 4 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_QUADS); // Lawn left
glColor3ub(102, 51, 0);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glVertex2f(-0.8f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Lawn right
glColor3ub(102, 51, 0);
glVertex2f(1.0f,-0.1f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.8f,-1.0f);
glVertex2f(1.0f,-1.0f);
glEnd();



  // ---------------- Starting Left Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.6f,-0.2f);
glVertex2f(-0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.8f,-0.4f);
glVertex2f(-0.81f,-0.4f);
glVertex2f(-0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(-0.75f,-0.45f);
glVertex2f(-0.75f,-0.7f);
glVertex2f(-0.74f,-0.7f);
glVertex2f(-0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(-0.85f,-0.45f);
glVertex2f(-0.65f,-0.45f);
glVertex2f(-0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(-0.9f,-0.7f);
glVertex2f(-0.9f,-0.9f);
glVertex2f(-0.91f,-0.9f);
glVertex2f(-0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(-1.0f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.9f,0.4f);
glEnd();

 // ---------------- Starting Right Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,-0.4f);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.6f,-0.2f);
glVertex2f(0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.81f,-0.4f);
glVertex2f(0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(0.75f,-0.45f);
glVertex2f(0.75f,-0.7f);
glVertex2f(0.74f,-0.7f);
glVertex2f(0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(0.85f,-0.45f);
glVertex2f(0.65f,-0.45f);
glVertex2f(0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,-0.9f);
glVertex2f(0.91f,-0.9f);
glVertex2f(0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(1.0f,-0.7f);
glVertex2f(0.8f,-0.7f);
glVertex2f(0.9f,0.4f);
glEnd();

  // ----------------- Starting Lamp -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

// ----- Left Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(-0.2f,-0.1f);
glVertex2f(-0.2f,-0.4f);
glVertex2f(-0.21f,-0.4f);
glVertex2f(-0.21f,-0.1f);
glEnd();
GLfloat x_lamp=-.2f; GLfloat y_lamp=-.1f; GLfloat radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.6f);
glVertex2f(-0.37f,-0.9f);
glVertex2f(-0.38f,-0.9f);
glVertex2f(-0.38f,-0.6f);
glEnd();
 x_lamp=-.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


// ----- Right Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(0.2f,-0.1f);
glVertex2f(0.2f,-0.4f);
glVertex2f(0.21f,-0.4f);
glVertex2f(0.21f,-0.1f);
glEnd();
 x_lamp=.2f;  y_lamp=-.1f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.6f);
glVertex2f(0.37f,-0.9f);
glVertex2f(0.38f,-0.9f);
glVertex2f(0.38f,-0.6f);
glEnd();
x_lamp=.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();






///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOO     Rain           OOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////



        glLoadIdentity();
        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,1.0f);
        glVertex2f(0.975f,.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(1.0f,1.0f);
        glVertex2f(0.975f,.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.875f,1.0f);
        glVertex2f(0.85f,.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.875f,1.0f);
        glVertex2f(0.85f,.95f);
            glEnd();
        }

        glLoadIdentity();



    glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.75f,1.0f);
        glVertex2f(0.725f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.75f,1.0f);
        glVertex2f(0.725f,0.95f);
            glEnd();
        }



        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.625f,1.0f);
        glVertex2f(0.6f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.625f,1.0f);
        glVertex2f(0.6f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.5f,1.0f);
        glVertex2f(0.475f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.5f,1.0f);
        glVertex2f(0.475f,0.95f);
            glEnd();
        }




        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.375f,1.0f);
        glVertex2f(0.35f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.375f,1.0f);
        glVertex2f(0.35f,0.95f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.25f,1.0f);
        glVertex2f(0.225f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.25f,1.0f);
        glVertex2f(0.225f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.125f,1.0f);
        glVertex2f(0.1f,0.95f);
        glEnd();

         for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.125f,1.0f);
        glVertex2f(0.1f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(0.0f,1.0f);
        glVertex2f(-0.025f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(0.0f,1.0f);
        glVertex2f(-0.025f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.125f,1.0f);
        glVertex2f(-0.15f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(-0.125f,1.0f);
        glVertex2f(-0.15f,0.95f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.25f,1.0f);
        glVertex2f(-0.275f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(-0.25f,1.0f);
        glVertex2f(-0.275f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.375f,1.0f);
        glVertex2f(-0.4f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(-0.375f,1.0f);
        glVertex2f(-0.4f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.5f,1.0f);
        glVertex2f(-0.525f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
           glVertex2f(-0.5f,1.0f);
        glVertex2f(-0.525f,0.95f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.625f,1.0f);
        glVertex2f(-0.65f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(-0.625f,1.0f);
        glVertex2f(-0.65f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.75f,1.0f);
        glVertex2f(-0.775f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(-0.75f,1.0f);
            glVertex2f(-0.775f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(-0.875f,1.0f);
        glVertex2f(-0.9f,0.95f);
        glEnd();

        for(int i =0;i<20;i++){
                    glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(-0.875f,1.0f);
            glVertex2f(-0.9f,0.95f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.875f);
        glVertex2f(0.975f,0.825f);
        glEnd();

        for(int i =0;i<20;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.875f);
            glVertex2f(0.975f,0.825f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.75f);
        glVertex2f(0.975f,0.7f);
        glEnd();

        for(int i =0;i<15;i++){
            glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.75f);
            glVertex2f(0.975f,0.7f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.625f);
        glVertex2f(0.975f,0.575f);
        glEnd();

        for(int i =0;i<14;i++){
                       glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.625f);
            glVertex2f(0.975f,0.575f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.5f);
        glVertex2f(0.975f,0.45f);
        glEnd();


        for(int i =0;i<14;i++){
                   glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.5f);
            glVertex2f(0.975f,0.45f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.375f);
        glVertex2f(0.975f,0.325f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.375f);
            glVertex2f(0.975f,0.325f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.25f);
        glVertex2f(0.975f,0.2f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.25f);
        glVertex2f(0.975f,0.2f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.125f);
        glVertex2f(0.975f,0.075f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.125f);
        glVertex2f(0.975f,0.075f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,0.0f);
        glVertex2f(0.975f,-0.05f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,0.0f);
        glVertex2f(0.975f,-0.05f);
            glEnd();
        }


        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.125f);
        glVertex2f(0.975f,-0.175f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.125f);
        glVertex2f(0.975f,-0.175f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.25f);
        glVertex2f(0.975f,-0.3f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.25f);
        glVertex2f(0.975f,-0.3f);
            glEnd();
        }

        ///////ihi

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.25f);
        glVertex2f(0.975f,-0.3f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.25f);
        glVertex2f(0.975f,-0.3f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.375f);
        glVertex2f(0.975f,-0.425f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.375f);
        glVertex2f(0.975f,-0.425f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.5f);
        glVertex2f(0.975f,-0.55f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.5f);
        glVertex2f(0.975f,-0.55f);
            glEnd();
        }

        glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.625f);
        glVertex2f(0.975f,-0.675f);
        glEnd();

        for(int i =0;i<12;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.625f);
        glVertex2f(0.975f,-0.675f);
            glEnd();
        }








    glLoadIdentity(); //Collumn -------------

        glPushMatrix();
        glTranslatef(0.0f,positionRain,0.0f);

        glBegin(GL_LINES); // Rain Line

        glColor3ub(80,179,176);
        glVertex2f(1.0f,-0.75f);
        glVertex2f(0.975f,-0.80f);
        glEnd();

        for(int i =0;i<7;i++){
                glTranslated(-0.1f,-0.1f,0.0f);
            glBegin(GL_LINES);
            glVertex2f(1.0f,-0.75f);
        glVertex2f(0.975f,-0.80f);
            glEnd();
        }


        glLoadIdentity();

        glPopMatrix();


        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOO     Rain           OOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////





    glLoadIdentity();


    glFlush();
}


void day(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////
////////////////////////////////////////////
/////////////Sky-Part Start/////////
////////////////////////////////////////////
    glBegin(GL_QUADS);
    glColor3ub(166,231,255);//sky
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(1.0f,1.0f);
        glVertex2f(-1.0f,1.0f);
        glEnd();


    //----------------------------------------//
//----------------- SUN ----------------- //
//----------------------------------------//

GLfloat x_sun=.7f; GLfloat y_sun=.8f; GLfloat radius_sun =.08f; //Lamp 1 top
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,77);
		glVertex2f(x_sun, y_sun); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_sun + (radius_sun * cos(i *  twicePi / triangleAmount)),
			    y_sun + (radius_sun * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.5f,0.7f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.9f,0.7f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.7f,0.6f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.9f,0.9f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.5f,0.9f);
glVertex2f(0.7f,0.8f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.7f,1.0f);
glVertex2f(0.7f,0.8f);
glEnd();

//----------------------------------------//
//----------------- Cloud Start- Ayesha----------------- //
//----------------------------------------//

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 255 );
        glVertex2f(-0.58,0.5f);
        glVertex2f(0.58,0.5f);
        glVertex2f(0.58,0.6f);
        glVertex2f(-0.58,0.6f);
        glEnd();

        GLfloat x_cloud=.56f; GLfloat y_cloud=.6f; GLfloat radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x_cloud=-.56f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.68f;  y_cloud=.6f; radius_cloud =.06f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	    x_cloud=-.68f;  y_cloud=.6f; radius_cloud =.06; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.3f;  y_cloud=.6f; radius_cloud =.07f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.1f;  y_cloud=.6f; radius_cloud =.09f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=.2f;  y_cloud=.6f; radius_cloud =.11f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x_cloud=-.2f;  y_cloud=.62f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.4f;  y_cloud=.6f; radius_cloud =.1f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x_cloud=.3f;  y_cloud=.62f; radius_cloud =.05f; //Lamp 1 top
	triangleAmount = 20; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255,255);
		glVertex2f(x_cloud, y_cloud); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_cloud + (radius_cloud * cos(i *  twicePi / triangleAmount)),
			    y_cloud + (radius_cloud * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//----------------------------------------//
//----------------- Moving Cloud Start- Ayesha----------------- //
//----------------------------------------//
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    x_cloud=-0.9f;   y_cloud=0.9f;   radius_cloud =0.05f;
     int i;
	int lineAmount = 100;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.9f;  y_cloud=0.98f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			    y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.97f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=-0.85f;  y_cloud=0.95f; radius_cloud =0.05f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-1 left
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud+ (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	 glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
	x_cloud=0.8f; y_cloud=0.8f; radius_cloud =0.06f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.8f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.85f; y_cloud=0.85f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x_cloud=0.75f; y_cloud=0.89f; radius_cloud =0.07f;
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);//cloud-2 right
    glColor3ub(242, 242, 242);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x_cloud + (radius_cloud * cos(i *  twicePi / lineAmount)),
			   y_cloud + (radius_cloud* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
glPopMatrix();
glLoadIdentity();









////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding start-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

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
    triangleAmount = 50; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

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

	/////////////////////////Gombuz - Main ////





GLfloat x_center_hombuz = 0.0f; GLfloat y_center_hombuz = 0.6f; GLfloat r_center_hombuz =0.1f;
//int triangleAmount = 500; //# of triangles used to draw circle



//GLfloat radius = 0.8f; //radius



glBegin(GL_TRIANGLE_FAN);
glColor3ub(117,115,92);
glVertex2f(x_center_hombuz , y_center_hombuz); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_center_hombuz + (r_center_hombuz * cos(i * twicePi / triangleAmount)),
y_center_hombuz + (r_center_hombuz * sin(i * twicePi / triangleAmount))
);
}
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Main Tower
glColor3ub(117,115,92);
glVertex2f(-0.05f,0.625f);
glVertex2f(0.0f,0.725f);
glVertex2f(0.05f,0.625f);
glEnd();





glBegin(GL_TRIANGLES); // Design for curve - Left Tower
glColor3ub(128, 43, 0);
glVertex2f(0.475f,0.675f);
glVertex2f(0.425f,0.75f);
glVertex2f(0.375f,0.675f);
glEnd();







glBegin(GL_TRIANGLES); // Design for curve - Right tower
glColor3ub(128, 43, 0);
glVertex2f(-0.475f,0.675f);
glVertex2f(-0.425f,0.75f);
glVertex2f(-0.375f,0.675f);
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



//////////////////////////////////////////////////////////////////////
                      ///Left tower
/////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
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

        glBegin(GL_QUADS); //Upper middle part
    glColor3ub(242,133,0);
        glVertex2f(-0.23f,0.0f);
        glVertex2f(0.23f,0.0);
        glVertex2f(0.23f,0.50);
        glVertex2f(-0.23f,0.50f);
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
        glVertex2f(0.525f,0.023f);
        glVertex2f(-0.525f,0.023f);
        glVertex2f(-0.525f,0.05f);
        glVertex2f(0.525f,0.05f);
        glEnd();


        glBegin(GL_QUADS); //Main-Door
    glColor3ub(109,50,20);
        glVertex2f(-0.125f,0.05f);
        glVertex2f(-0.125f,0.39f);
        glVertex2f(0.125f,0.39f);
        glVertex2f(0.125f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door - color adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.3675f);
        glVertex2f(0.12f,0.3675f);
        glVertex2f(0.12f,0.05f);
        glEnd();



        glBegin(GL_QUADS); //For  - main door - squre color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.12f,0.05f);
        glVertex2f(-0.12f,0.25f);
        glVertex2f(0.12f,0.25f);
        glVertex2f(0.12f,0.05f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.12f,0.26f);
        glVertex2f(-0.12f,0.26f);
        glVertex2f(0.0f,0.3675f);
        glEnd();




        /////////////////////////////////////////////
    ////////// DOOK CURVE ////////////////
    GLfloat x_door_durve_center =0.0f; GLfloat y_door_durve_center = 0.235f; GLfloat r_door_durve_center =.12f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241 );
		glVertex2f(x_door_durve_center , y_door_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_durve_center + (r_door_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_durve_center + (r_door_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


     GLfloat x_door_1_durve_center =0.0f; GLfloat y_door_1_durve_center = 0.255f; GLfloat r_door_1_durve_center =0.063f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_door_1_durve_center , y_door_1_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_door_1_durve_center + (r_door_1_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_door_1_durve_center + (r_door_1_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
        glColor3ub(76, 76, 73);
        glVertex2f(-0.0625f,0.06f);
        glVertex2f(-0.0625f,0.27f);
        glVertex2f(0.0625f,0.27f);
        glVertex2f(0.0625f,0.06f);
        glEnd();

////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
	glBegin(GL_QUADS); //Right-Main door win
    glColor3ub(109,50,20);
        glVertex2f(-0.225f,0.05f);
        glVertex2f(-0.325f,0.05f);
        glVertex2f(-0.325f,0.25f);
        glVertex2f(-0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment
       glColor3ub(194, 102, 10);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.245f);
        glVertex2f(-0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //Right-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.05f);
        glVertex2f(-0.32f,0.05f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(-0.23f,0.175f);
        glVertex2f(-0.32f,0.175f);
        glVertex2f(-0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-Door-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(-0.25f,0.06f);
        glVertex2f(-0.25f,0.175f);
        glVertex2f(-0.3f,0.175f);
        glVertex2f(-0.3f,0.06f);
        glEnd();

     /////////////////////////////////////////////
    ////////// Win - CURVE - left ////////////////
    GLfloat x_win_l_durve_center = -0.275f; GLfloat y_win_l_durve_center = 0.183f; GLfloat r_win_l_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_l_durve_center , y_win_l_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_l_durve_center + (r_win_l_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_l_durve_center + (r_win_l_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    GLfloat x_win_2_durve_center = -0.275f; GLfloat y_win_2_durve_center = 0.15f; GLfloat r_win_2_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_2_durve_center , y_win_2_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_2_durve_center + (r_win_2_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_2_durve_center + (r_win_2_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(109,50,20);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(194, 102, 10);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(233, 239, 241);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.235f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(76, 76, 73);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_3_durve_center = 0.275f; GLfloat y_win_3_durve_center = 0.183f; GLfloat r_win_3_durve_center =0.045f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(233, 239, 241);
		glVertex2f(x_win_3_durve_center , y_win_3_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_3_durve_center + (r_win_3_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_3_durve_center + (r_win_3_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    GLfloat x_win_4_durve_center = 0.275f; GLfloat y_win_4_durve_center = 0.15f; GLfloat r_win_4_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(76, 76, 73);
		glVertex2f(x_win_4_durve_center , y_win_4_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_4_durve_center + (r_win_4_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_4_durve_center + (r_win_4_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////




///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(-0.53f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






////////////////////////////////////////////
////////////////////////////////////////////
/////////////bulding End-Main building- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////

//--------------------------------------------------  Left Column 2nd Conumn Details----------------------------------------------------


///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.347f,0.05f,0.0f);

glScaled(.38,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}






    }

glLoadIdentity();






///////////////////////////////////////////////
////////////////////////////////////////////
/////////////Building details- Nirob/////////
////////////////////////////////////////////
////////////////////////////////////////////


glTranslated(0.28f,0.05f,0.0f);

glScaled(.45,.45,0);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}


    glTranslated(0.0f,0.25f,0.0f);

{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glLoadIdentity();



    //Completed left-1st column

    {

    glTranslated(-0.5555f,0.05f,0.0f);

    glScaled(.38,.44,0); ///////////////////////////////////////////// -- Making left 2nd column


    ////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}







////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.1f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}



////////////////////////////////////////////////
     ////////////////////////  For translating     ////////////////////////
      ////////////////////////////////////////////////



      glTranslated(0.0f,0.25f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

    glTranslated(0.0f,0.12f,0.0f);

{ //For making windows smaller



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
    }

glLoadIdentity();



//--------------------------------------------------  Left -Right column end -------------------------------------------



    glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(0.3775f,0.529f);
        glVertex2f(0.47f,0.529f);
        glVertex2f(0.47f,0.59f);
        glVertex2f(0.3775f,0.59f);
        glEnd();




        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(0.381f,0.534f);
        glVertex2f(0.466f,0.534f);
        glVertex2f(0.466f,0.584f);
        glVertex2f(0.381f,0.584f);
        glEnd();


        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.08f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();



        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(0.168f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();





        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.715f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();




        //For making Design near main door via squre shape
        //For making Design near main door via squre shape
//For making Design near main door via squre shape
glScaled(0.45f,0.45f,0);
//For making Design near main door via squre shape
//For making Design near main door via squre shape
//For making Design near main door via squre shape

glTranslated(-0.63f,0.075f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



glTranslated(0.0f,0.175f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


glTranslated(0.0f,0.195f,0.0f);


{ //For making windows smaller -- scaling



    glBegin(GL_QUADS); //LEFT-Main door win
    glColor3ub(185,114,62);
        glVertex2f(0.225f,0.05f);
        glVertex2f(0.325f,0.05f);
        glVertex2f(0.325f,0.25f);
        glVertex2f(0.225f,0.25f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.245f);
        glVertex2f(0.23f,0.245f);
        glEnd();


        glBegin(GL_QUADS); //LEFT-Main door win - color - adjustment- squre-color adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.05f);
        glVertex2f(0.32f,0.05f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.23f,0.175f);
        glEnd();


        glBegin(GL_TRIANGLES); //For triangle - main door - design adjustment
    glColor3ub(150,75,33);
        glVertex2f(0.23f,0.175f);
        glVertex2f(0.32f,0.175f);
        glVertex2f(0.275f,0.2475f);
        glEnd();



        glBegin(GL_QUADS); //Main-WIN-LEFT-DOOR-EntRY
    glColor3ub(185,114,62);
        glVertex2f(0.25f,0.06f);
        glVertex2f(0.25f,0.175f);
        glVertex2f(0.3f,0.175f);
        glVertex2f(0.3f,0.06f);
        glEnd();


         /////////////////////////////////////////////
    ////////// Win - CURVE - Right ////////////////
    GLfloat x_win_R_durve_center = 0.275f; GLfloat y_win_R_durve_center = 0.175f; GLfloat r_win_R_durve_center =0.025f;
	//int triangleAmount = 500; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(185,114,62);
		glVertex2f(x_win_R_durve_center , y_win_R_durve_center); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_win_R_durve_center + (r_win_R_durve_center * cos(i *  twicePi / triangleAmount)),
			    y_win_R_durve_center + (r_win_R_durve_center * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

glLoadIdentity();

    ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////
    glScaled(1.0f,1.3f,0);
    glTranslated(0.25,-0.22,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

        glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();

         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.09,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();


         glTranslated(0.075,0,0);

        glBegin(GL_QUADS); //Left column upper design
    glColor3ub(150,75,33);
        glVertex2f(-0.3775f,0.529f);
        glVertex2f(-0.47f,0.529f);
        glVertex2f(-0.47f,0.59f);
        glVertex2f(-0.3775f,0.59f);
        glEnd();

        glBegin(GL_QUADS); //Left column upper design - For color details
    glColor3ub(185,114,62);
        glVertex2f(-0.381f,0.534f);
        glVertex2f(-0.466f,0.534f);
        glVertex2f(-0.466f,0.584f);
        glVertex2f(-0.381f,0.584f);
        glEnd();
        glLoadIdentity();


        ///////////////////////////////////OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO//////////////////////////


















    //---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//----------------------------------------Fountain side- Muntasir----------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glBegin(GL_QUADS); //road
glColor3ub(122, 122, 82);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // // Fountain front wall
glColor3ub(0, 143, 179);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.1f,-0.1f);
glEnd();
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(0.10f,-0.15f);
glEnd();


glBegin(GL_QUADS); // Fountain left wall
glColor3ub(0, 102, 128);
glVertex2f(-0.1f,-0.1f);
glVertex2f(-0.1f,-0.25f);
glVertex2f(-0.3f,-1.0f);
glVertex2f(-0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.10f,-0.15f);
glVertex2f(-0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain right wall
glColor3ub(0, 102, 128);
glVertex2f(0.1f,-0.1f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(0.4f,-1.0f);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.10f,-0.15f);
glVertex2f(0.36f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain Floor
glColor3ub(255, 255, 230);
glVertex2f(-0.1f,-0.25f);
glVertex2f(0.1f,-0.25f);
glVertex2f(0.3f,-1.0f);
glVertex2f(-0.3f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Fountain 1
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.2f);
glVertex2f(0.01f,-0.2f);
glVertex2f(0.02f,-0.3f);
glVertex2f(-0.02f,-0.3f);
glEnd();

GLfloat x_fountain=.0f; GLfloat y_fountain=-.2f; GLfloat radius_fountain =.02f; //Fountain 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_POLYGON); // Fountain 2
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.4f);
glVertex2f(0.01f,-0.4f);
glVertex2f(0.023f,-0.5f);
glVertex2f(-0.023f,-0.5f);
glEnd();

 x_fountain=.0f;  y_fountain=-.4f;  radius_fountain =.02f; //Fountain 2 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 3
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.6f);
glVertex2f(0.01f,-0.6f);
glVertex2f(0.026f,-0.7f);
glVertex2f(-0.026f,-0.7f);
glEnd();

x_fountain=.0f;  y_fountain=-.6f;  radius_fountain =.02f; //Fountain 3 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_POLYGON); // Fountain 4
glColor3ub(204, 102, 0);
glVertex2f(-0.01f,-0.8f);
glVertex2f(0.01f,-0.8f);
glVertex2f(0.026f,-0.9f);
glVertex2f(-0.026f,-0.9f);
glEnd();

x_fountain=.0f;  y_fountain=-.8f;  radius_fountain =.02f; //Fountain 4 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 115, 0);
		glVertex2f(x_fountain, y_fountain); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_fountain + (radius_fountain * cos(i *  twicePi / triangleAmount)),
			    y_fountain + (radius_fountain * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//--------------------------------------------------//
   //--------------------------------------------------//
  // ---------------------- Lawn ---------------------//
 //--------------------------------------------------//
//--------------------------------------------------//

glBegin(GL_QUADS); // Lawn left
glColor3ub(102, 51, 0);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glVertex2f(-0.8f,-1.0f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_QUADS); // Lawn right
glColor3ub(102, 51, 0);
glVertex2f(1.0f,-0.1f);
glVertex2f(0.4f,-0.1f);
glVertex2f(0.8f,-1.0f);
glVertex2f(1.0f,-1.0f);
glEnd();


//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//
//------------------------------------------  HUMAN  ------------------------------------------//
//---------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------//

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
GLfloat x_human=-.3f; GLfloat y_human=.1f; GLfloat radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 51, 255);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
glTranslated(0.5,-0.01,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(140, 140, 217);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
glTranslated(0.09,0,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 2040);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(102, 0, 51);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 2045);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);

glTranslated(0.5,-0.01,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(64, 64, 64);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
glTranslated(0.6,-0.01,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(128, 128, 255);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
glTranslated(0.55,-0.03,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(153, 0, 153);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position5,0.0f,0.0f);
glTranslated(0.95,-0.04,0);

 x_human=-.3f;  y_human=.1f;  radius_human =.02f; //Human 1 Head
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     x_human=-.31f;  y_human=.11f;  radius_human =.005f; //Human 1 nose
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
        glVertex2f(x_human, y_human); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x_human + (radius_human * cos(i *  twicePi / triangleAmount)),
                y_human + (radius_human * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glBegin(GL_QUADS); // Human 1 body
glColor3ub(153, 255, 204);
glVertex2f(-0.32f,0.08f);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.28f,0.01f);
glVertex2f(-0.28f,0.08f);
glEnd();

glBegin(GL_QUADS); // Human 1 right leg
glColor3ub(255, 255, 204);
glVertex2f(-0.32f,0.01f);
glVertex2f(-0.33f,-0.04f);
glVertex2f(-0.32f,-0.04f);
glVertex2f(-0.31f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 left leg
glColor3ub(255, 255, 204);
glVertex2f(-0.30f,0.01f);
glVertex2f(-0.29f,-0.04f);
glVertex2f(-0.28f,-0.04f);
glVertex2f(-0.29f,0.01f);
glEnd();

glBegin(GL_QUADS); // Human 1 body
glColor3ub(255, 255, 204);
glVertex2f(-0.34f,0.06f);
glVertex2f(-0.34f,0.05f);
glVertex2f(-0.31f,0.05f);
glVertex2f(-0.31f,0.06f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();





  // ---------------- Starting Left Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.6f,-0.2f);
glVertex2f(-0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(-0.8f,-0.2f);
glVertex2f(-0.8f,-0.4f);
glVertex2f(-0.81f,-0.4f);
glVertex2f(-0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(-0.75f,-0.45f);
glVertex2f(-0.75f,-0.7f);
glVertex2f(-0.74f,-0.7f);
glVertex2f(-0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(-0.85f,-0.45f);
glVertex2f(-0.65f,-0.45f);
glVertex2f(-0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(-0.9f,-0.7f);
glVertex2f(-0.9f,-0.9f);
glVertex2f(-0.91f,-0.9f);
glVertex2f(-0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(-1.0f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.9f,0.4f);
glEnd();

 // ---------------- Starting Right Tree -------------//
 //--------------------------------------------------//
//--------------------------------------------------//



 glBegin(GL_QUADS); // tree 1
glColor3ub(153, 77, 0);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.7f,-0.4f);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.71f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 1
glColor3ub(0, 77, 26);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.6f,-0.2f);
glVertex2f(0.7f,0.6f);
glEnd();


glBegin(GL_QUADS); // tree 2
glColor3ub(153, 77, 0);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.81f,-0.4f);
glVertex2f(0.81f,-0.2f);
glEnd();
glBegin(GL_TRIANGLES); // tree 2
glColor3ub(46, 184, 46);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.8f,0.5f);
glEnd();


glBegin(GL_QUADS); // tree 3
glColor3ub(153, 77, 0);
glVertex2f(0.75f,-0.45f);
glVertex2f(0.75f,-0.7f);
glVertex2f(0.74f,-0.7f);
glVertex2f(0.74f,-0.45f);
glEnd();
glBegin(GL_TRIANGLES); // tree 3
glColor3ub(10, 41, 10);
glVertex2f(0.85f,-0.45f);
glVertex2f(0.65f,-0.45f);
glVertex2f(0.75f,0.1f);
glEnd();


glBegin(GL_QUADS); // tree 4
glColor3ub(153, 77, 0);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,-0.9f);
glVertex2f(0.91f,-0.9f);
glVertex2f(0.91f,-0.7f);
glEnd();
glBegin(GL_TRIANGLES); // tree 4
glColor3ub(0, 77, 26);
glVertex2f(1.0f,-0.7f);
glVertex2f(0.8f,-0.7f);
glVertex2f(0.9f,0.4f);
glEnd();

  // ----------------- Starting Lamp -----------------//
 //--------------------------------------------------//
//--------------------------------------------------//

// ----- Left Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(-0.2f,-0.1f);
glVertex2f(-0.2f,-0.4f);
glVertex2f(-0.21f,-0.4f);
glVertex2f(-0.21f,-0.1f);
glEnd();
GLfloat x_lamp=-.2f; GLfloat y_lamp=-.1f; GLfloat radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.6f);
glVertex2f(-0.37f,-0.9f);
glVertex2f(-0.38f,-0.9f);
glVertex2f(-0.38f,-0.6f);
glEnd();
 x_lamp=-.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


// ----- Right Lamp ----- //
glBegin(GL_QUADS); // Lamp 1
glColor3ub(0, 0, 0);
glVertex2f(0.2f,-0.1f);
glVertex2f(0.2f,-0.4f);
glVertex2f(0.21f,-0.4f);
glVertex2f(0.21f,-0.1f);
glEnd();
 x_lamp=.2f;  y_lamp=-.1f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); // Lamp 2
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.6f);
glVertex2f(0.37f,-0.9f);
glVertex2f(0.38f,-0.9f);
glVertex2f(0.38f,-0.6f);
glEnd();
x_lamp=.37f;  y_lamp=-.6f;  radius_lamp =.04f; //Lamp 1 top
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 242, 242);
		glVertex2f(x_lamp, y_lamp); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x_lamp + (radius_lamp * cos(i *  twicePi / triangleAmount)),
			    y_lamp + (radius_lamp * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





    glFlush();
}

void sound()
{

    PlaySound("Night-2.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void sound2()
{

   PlaySound("bird-2.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound3()
{

   PlaySound("wind01.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound4()
{

   PlaySound("rain-07.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound5()
{

   PlaySound("footsteps-6.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
case 'a':// cloud stop right
    speed = 0.0f;
    break;
case 'b': // cloud speed increase right
    speed = 0.1f;
    break;
case 'c': // cloud speed same right
    speed = 0.02f;
    break;
case 'x': //cloud stop left
    speed2 = 0.0f;
    break;
case 'y': // cloud speed increase left
    speed2 = 0.1f;
    break;
 case 'z': // cloud speed same  left
    speed2 = 0.02f;
    break;
case 'd':
   glutDisplayFunc(day);
   sound5();
   glutPostRedisplay();

    break;
case 'n':
   glutDisplayFunc(night);
   sound();
   glutPostRedisplay();

    break;
    case 'm':
    glLoadIdentity();
   glutDisplayFunc(morning);
   sound2();
   glutPostRedisplay();
    break;

    case 'w':
   glutDisplayFunc(winter);
   sound3();
   glutPostRedisplay();
    break;

    case 'r':
   glutDisplayFunc(rain);
   sound4();
   glutPostRedisplay();
    break;

    case 's':// rain speed
    speedRain = 0.19f;
    break;

    case 'i':// snow speed
    speed3 = 0.05f;
    break;

    case 'j':// snow default
    speed3 = 0.02f;
    break;

    case 'k':// human walk speed
    speed5 = 0.04f;
    break;
glutPostRedisplay();
	}
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("Lalbagh Fort:To see View, Press   m=morning ;     d=day;    n=night;    w=winter;    r=rain");
glutInitWindowSize(320, 320);
glutDisplayFunc(morning);
glutTimerFunc(100,update,0);
glutTimerFunc(100,update2,0);
glutTimerFunc(10,update3,0);
glutTimerFunc(500,updateRain,0);
glutTimerFunc(500,updatecloud,0);
glutTimerFunc(100,update5,0);
glutKeyboardFunc(handleKeypress);
glutMainLoop();
return 0;
}
