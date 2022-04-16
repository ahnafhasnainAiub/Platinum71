#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI          3.141516
#include<math.h>

//branch from Sakib


GLfloat position5 = 0.0f; //car1
GLfloat speed5 = 0.008f;

GLfloat position6 = 0.0f; //car2
GLfloat speed6 = 0.007f;

GLfloat position7 = 0.0f; //car3
GLfloat speed7 = 0.009f;

GLfloat position8 = 0.0f; //Ship
GLfloat speed8 = 0.0015f;

void update(int value) {






  if(position5 >1.0)
  position5 = -1.0f;
  position5 += speed5;

  if(position6>1.0)
  position6 = 0.0f;
  position6 += speed6;

   if(position7>1.0)
  position7 = 0.0f;
  position7 += speed7;

    if(position8>1.0)
  position8 = 0.0f;
  position8 += speed8;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}


void display()
 {

 glClear(GL_COLOR_BUFFER_BIT);
 glClearColor(0.0f, 0.0f, 0.0f, 0.0f);





  glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge
glVertex2f(1.0f, -0.36f);
glVertex2f(1.0f, -0.44f);
glVertex2f(-1.0f,-0.44f);
glVertex2f(-1.0f,-0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge pillar 1
glVertex2f(-1.0f, -0.44f);
glVertex2f(-1.0f, -0.65f);
glVertex2f(-0.9f,-0.65f);
glVertex2f(-0.9f,-0.44f);
glEnd();

 glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge pillar 2
glVertex2f(-0.5f, -0.44f);
glVertex2f(-0.5f, -0.65f);
glVertex2f(-0.6f,-0.65f);
glVertex2f(-0.6f,-0.44f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge pillar 3
glVertex2f(0.0f, -0.44f);
glVertex2f(0.0f, -0.65f);
glVertex2f(-0.1f,-0.65f);
glVertex2f(-0.1f,-0.44f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge pillar 4
glVertex2f(0.5f, -0.44f);
glVertex2f(0.5f, -0.65f);
glVertex2f(0.4f,-0.65f);
glVertex2f(0.4f,-0.44f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // brown bridge pillar 5
glVertex2f(1.0f, -0.44f);
glVertex2f(1.0f, -0.65f);
glVertex2f(0.9f,-0.65f);
glVertex2f(0.9f,-0.44f);
glEnd();


//Car 1
 glPushMatrix();
glTranslatef(-position5,0.0f, 0.0f);

glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // car1 bottom
glVertex2f(0.35f, -0.3f);
glVertex2f(0.35f, -0.15f);
glVertex2f(0.9f, -0.15f);
glVertex2f(0.9f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // car1 top
glVertex2f(0.45f, -0.15f);
glVertex2f(0.55f, -0.05f);
glVertex2f(0.8f, -0.05f);
glVertex2f(0.9f, -0.15f);
glEnd();

int w1; //Car1 wheel1
    GLfloat a1=0.48f;
    GLfloat b1= -0.3f;
    GLfloat r5 = 0.06f;
    int trgl1=40;

    GLfloat cr1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a1,b1);
    for(w1=0;w1<=trgl1; w1++)
    {
        glVertex2f (
                    a1+(r5*cos(w1*cr1/trgl1)),
                    b1+(r5*sin(w1*cr1/trgl1))
                   );

    }
    glEnd ();

int w2; //Car1 wheel2
    GLfloat a2=0.78f;
    GLfloat b2= -0.3f;
    GLfloat r6 = 0.06f;
    int trgl2=40;

    GLfloat cr2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a2,b2);
    for(w2=0;w2<=trgl2; w2++)
    {
        glVertex2f (
                    a2+(r6*cos(w2*cr2/trgl2)),
                    b2+(r6*sin(w2*cr2/trgl2))
                    );
    }
    glEnd ();
glPopMatrix();




//Car 2
 glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // car1 bottom
glVertex2f(-0.28f, 0.12f);
glVertex2f(-0.28f, 0.25f);
glVertex2f(0.28f, 0.25f);
glVertex2f(0.28f, 0.12f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // car1 top
glVertex2f(-0.2f, 0.25f);
glVertex2f(-0.13f, 0.32f);
glVertex2f(0.13f, 0.32f);
glVertex2f(0.2f, 0.25f);
glEnd();

int w3; //Car1 wheel1
    GLfloat a3=-0.16f;
    GLfloat b3= 0.12f;
    GLfloat r7 = 0.06f;
    int trgl3=40;

    GLfloat cr3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a3,b3);
    for(w3=0;w3<=trgl3; w3++)
    {
        glVertex2f (
                    a3+(r5*cos(w3*cr3/trgl3)),
                    b3+(r5*sin(w3*cr3/trgl3))
                    );


    }
    glEnd ();

int w4; //Car2 wheel2
    GLfloat a4=0.18f;
    GLfloat b4= 0.12f;
    GLfloat r8 = 0.06;
    int trgl4=60;

    GLfloat cr4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a4,b4);
    for(w4=0;w4<=trgl4; w4++)
    {
        glVertex2f (
                    a4+(r8*cos(w4*cr4/trgl4)),
                    b4+(r8*sin(w4*cr4/trgl4))
                    );


    }
    glEnd ();
glPopMatrix();


//Car 3
 glPushMatrix();
glTranslatef(-position6,0.0f, 0.0f);

glBegin(GL_POLYGON);
glColor3ub(127, 255, 0); // car3 bottom
glVertex2f(-0.4f, -0.3f);
glVertex2f(-0.4f, -0.15f);
glVertex2f(0.18f, -0.15f);
glVertex2f(0.18f, -0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(127, 255, 0); // car3 top
glVertex2f(-0.40f, -0.15f);
glVertex2f(-0.35f, -0.05f);
glVertex2f(-0.15f, -0.05f);
glVertex2f(-0.15f, -0.15f);
glEnd();

int w5; //Car3 wheel1
    GLfloat a5=-0.26f;
    GLfloat b5=-0.3f;
    GLfloat r9 = 0.06f;
    int trgl5=40;

    GLfloat cr5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a5,b5);
    for(w5=0;w5<=trgl5; w5++)
    {
        glVertex2f (
                    a5+(r9*cos(w5*cr5/trgl5)),
                    b5+(r9*sin(w5*cr5/trgl5))
                    );


    }
    glEnd ();

int w6; //Car3 wheel2
    GLfloat a6=0.05f;
    GLfloat b6= -0.3f;
    GLfloat r10 = 0.06;
    int trgl6=40;

    GLfloat cr6 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (a6,b6);
    for(w6=0;w6<=trgl6; w6++)
    {
        glVertex2f (
                    a6+(r10*cos(w6*cr6/trgl6)),
                    b6+(r10*sin(w6*cr6/trgl6))
                    );


    }
    glEnd ();
glPopMatrix();

 glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // Road Lamp1
glVertex2f(0.78f, -0.36f);
glVertex2f(0.78f, -0.2f);
glVertex2f(0.81f, -0.2f);
glVertex2f(0.81f, -0.36f);
glEnd();

 glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255); // Road Lamp1 Top
glVertex2f(0.76f, -0.15f);
glVertex2f(0.83f, -0.15f);
glVertex2f(0.795f, -0.2f);

glEnd();

 glBegin(GL_QUADS);
glColor3ub(139, 69, 19); // Road Lamp2
glVertex2f(0.38f, -0.36f);
glVertex2f(0.38f, -0.2f);
glVertex2f(0.41f, -0.2f);
glVertex2f(0.41f, -0.36f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255); // Road Lamp2 Top
glVertex2f(0.36f, -0.15f);
glVertex2f(0.43f, -0.15f);
glVertex2f(0.395f, -0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // Road Lamp3
glVertex2f(-0.08f, -0.36f);
glVertex2f(-0.08f, -0.2f);
glVertex2f(-0.11f, -0.2f);
glVertex2f(-0.11f, -0.36f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255); // Road Lamp3 Top
glVertex2f(-0.13f, -0.15f);
glVertex2f(-0.06f, -0.15f);
glVertex2f(-0.095f, -0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(139, 69, 19); // Road Lamp4
glVertex2f(-0.48f, -0.36f);
glVertex2f(-0.48f, -0.2f);
glVertex2f(-0.45f, -0.2f);
glVertex2f(-0.45f, -0.36f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255); // Road Lamp4 Top
glVertex2f(-0.50f, -0.15f);
glVertex2f(-0.43f, -0.15f);
glVertex2f(-0.465f, -0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(218, 165, 32); // Road Lamp5
glVertex2f(-0.88f, -0.36f);
glVertex2f(-0.88f, -0.2f);
glVertex2f(-0.85f, -0.2f);
glVertex2f(-0.85f, -0.36f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(255, 255, 255); // Road Lamp5 Top
glVertex2f(-0.90f, -0.15f);
glVertex2f(-0.83f, -0.15f);
glVertex2f(-0.865f, -0.2f);
glEnd();

//Ship

glPushMatrix();

glTranslatef(position8,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 255); // SHIP lOW PART
glVertex2f(-0.96f, -0.9f);
glVertex2f(-1.0f, -0.7f);
glVertex2f(0.2f, -0.7f);
glVertex2f(-0.1f, -0.9f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f); // SHIP MIDDLE PART
glVertex2f(-0.92f, -0.7f);
glVertex2f(-0.92f, -0.6f);
glVertex2f(-0.05f, -0.6f);
glVertex2f(0.05f, -0.7f);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); // SHIP top PART
glVertex2f(-0.85f, -0.6f);
glVertex2f(-0.85f, -0.5f);
glVertex2f(-0.14f, -0.5f);
glVertex2f(-0.05f, -0.6f);
glEnd();


 glPopMatrix();

   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(650, 520);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   glutTimerFunc(100, update, 0);

   glutMainLoop();
   return 0;
}
