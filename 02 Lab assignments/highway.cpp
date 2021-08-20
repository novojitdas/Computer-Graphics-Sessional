
#include <GL/gl.h>
#include <GL/glut.h>

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
