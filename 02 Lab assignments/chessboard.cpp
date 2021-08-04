#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display()
{

    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    bool f = false;

    for (int x = 0; x <= 800; x += 100)
    {
        for (int y = 0; y <= 800; y += 100)
        {
            if (f)
            {
                glColor3ub(0, 0, 0);
                f = !f;
            }
            else
            {
                glColor3ub(255, 255, 0);
                f = !f;
            }

            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x, y + 100);
            glVertex2i(x + 100, y + 100);
            glVertex2i(x + 100, y);

            glEnd();
        }
    }

    glFlush();
}

void myInit(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Chess Board");
    glutInitWindowSize(800, 800);
    glutDisplayFunc(display);

    myInit();
    glutMainLoop();
    return 0;
}
