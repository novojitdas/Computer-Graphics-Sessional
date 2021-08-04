#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float first = 0.01;

float second = 0.01;

float third = 0.01;

void display()
{

    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    // first object
    glPushMatrix();

    glRotatef(first, 1.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);

    glColor3ub(255, 0, 0);

    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.5, 0.2);
    glVertex2f(-0.396, 0.024);
    glVertex2f(-0.3, 0.2);
    glEnd();

    glPopMatrix();

    first += 0.2f;

    // second object
    glPushMatrix();

    glRotatef(second, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);

    glColor3ub(255, 255, 0);

    glVertex2f(0.1, 0.3);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.6, 0.2);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.2, 0.4);
    glEnd();

    glPopMatrix();

    second += 0.12f;

    // third object
    glPushMatrix();

    glRotatef(third, 0.0f, 1.0f, 0.0f);

    glBegin(GL_TRIANGLES);

    glColor3ub(0, 0, 255);

    glVertex2f(-0.2, -0.1);
    glVertex2f(-0.1, -0.4);
    glVertex2f(0.2, -0.4);
    glEnd();

    glPopMatrix();

    third += 0.11f;

    glFlush();
}

void Ideal()
{
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Glut Shape");
    glutDisplayFunc(display);

    //glutDisplayFunc(display1);

    glutIdleFunc(Ideal);
    //myInit();
    glutMainLoop();
    return 0;
}
