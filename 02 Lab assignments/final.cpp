
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

GLfloat position = -01.0f;
GLfloat positiona = 1.0f; // working
GLfloat speed = 0.1f;
GLfloat speeda = 0.05f;

void update(int value)
{

    if (position > 1.0)
        position = -1.0f;

    position += speed;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}

void updatea(int value)
{

    if (positiona < -01.0)
        positiona = 1.0f;

    positiona -= speeda;

    glutPostRedisplay();

    glutTimerFunc(100, updatea, 0);
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);                 // ROAD
    glColor3f(128.0f, 128.0f, 128.0f); // White / gray
    glVertex2f(-1.0f, 0.4f);           //
    glVertex2f(-1.0f, -0.5f);          //-
    glVertex2f(1.0f, -0.5f);           //
    glVertex2f(1.0f, 0.4f);            //
    glEnd();

    glBegin(GL_QUADS);               // Divider 1
    glColor3f(255.0f, 0.0f, 255.0f); // pink
    glVertex2f(-0.5f, 0.029f);       //
    glVertex2f(-0.5f, 0.0f);         //
    glVertex2f(-0.3f, 0.0f);         //
    glVertex2f(-0.3f, 0.029f);       //
    glEnd();

    glBegin(GL_QUADS);               // Divider 2
    glColor3f(255.0f, 0.0f, 255.0f); // pink
    glVertex2f(0.3f, 0.039f);        //
    glVertex2f(0.3f, 0.0f);          //
    glVertex2f(0.5f, 0.0f);          //
    glVertex2f(0.5f, 0.039f);        //
    glEnd();

    glBegin(GL_QUADS);             // SKY
    glColor3f(0.0f, 0.0f, 255.0f); // pink
    glVertex2f(-1.0f, 1.00f);      // G1
    glVertex2f(-1.0f, 0.4f);       // Q
    glVertex2f(1.0f, 0.4f);        //  V
    glVertex2f(1.0f, 1.00f);       // H1
    glEnd();

    glBegin(GL_QUADS);               // SUN
    glColor3f(255.0f, 255.0f, 0.0f); // Yellow

    glEnd();

    // gl_circle

    GLfloat x = .6f;
    GLfloat y = .8f;
    GLfloat radius = .2f;
    int triangleAmount = 20; //# of triangles used to draw circle
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi /
                              triangleAmount)),
            y + (radius * sin(i * twicePi /
                              triangleAmount)));
    }
    glEnd();

    // gl_circle_ends

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    //glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.3f, 0.1f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.2f, 0.2f);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(positiona, 0.0f, 0.0f);
    //glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.2f, -0.3f);

    glEnd();

    glPopMatrix();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Highway");
    glutDisplayFunc(display);
    init();

    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, updatea, 0);

    glutMainLoop();
    return 0;
}
