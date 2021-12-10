

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////update///////////////////////////////////////////

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




















