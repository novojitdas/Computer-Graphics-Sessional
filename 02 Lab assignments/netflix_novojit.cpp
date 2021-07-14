#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float angle = 0.00;
void display()
{

    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    /// Rotation function , passing the angel

    glRotatef(angle, 0.0f, 0.1f, 0.0f); /// Rotation function , passing the angel
    // left of N
    glBegin(GL_POLYGON);

    glColor3ub(255, 0, 0);

    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.5, -0.4);
    glVertex2f(-0.3, -0.4);
    glVertex2f(-0.3, 0.4);

    glEnd();
    //mid of N
    glBegin(GL_POLYGON);

    glColor3ub(255, 0, 0);

    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.3, 0.2);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.3, -0.1);

    glEnd();
    //right of N
    glBegin(GL_POLYGON);

    glColor3ub(255, 0, 0);

    glVertex2f(0.3, 0.4);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.5, -0.4);
    glVertex2f(0.5, 0.4);

    glEnd();

    glPopMatrix();

    angle += 0.05f;

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
    glutCreateWindow("Netflix Novojit");
    glutDisplayFunc(display);

    glutIdleFunc(Ideal);
    //myInit();
    glutMainLoop();
    return 0;
}
