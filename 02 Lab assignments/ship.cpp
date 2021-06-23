#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    // Draw a Red 1x1 Square centered at origin
    //0th

    glBegin(GL_POLYGON);             //
    glColor3f(255.0f, 255.0f, 0.0f); // yellow
                                     // ship base
    glVertex2f(-0.9f, 0.2f);         //a
    glVertex2f(-0.8f, -0.1f);        //b
    glVertex2f(0.6f, -0.1f);         //c
    glVertex2f(0.9f, 0.2f);          //d

    glEnd();

    glBegin(GL_POLYGON);             //
    glColor3f(255.0f, 0.0f, 255.0f); // pink
                                     // ship tail
    glVertex2f(-0.8f, -0.1f);        //b
    glVertex2f(-0.8f, -0.2f);        //e
    glVertex2f(0.55f, -0.19f);       //f
    glVertex2f(0.6f, -0.1f);         //c

    glEnd();

    glBegin(GL_POLYGON);             //
    glColor3f(255.0f, 0.0f, 255.0f); // pink
                                     // ship room 1
    glVertex2f(-0.4f, 0.5f);         //h
    glVertex2f(-0.4f, 0.2f);         //g
    glVertex2f(-0.1f, 0.2f);         //j
    glVertex2f(-0.1f, 0.5f);         //i

    glEnd();

    glBegin(GL_POLYGON);             //
    glColor3f(255.0f, 0.0f, 255.0f); // pink
                                     // ship room 3
    glVertex2f(0.2f, 0.2f);          //k
    glVertex2f(0.5f, 0.2f);          //l
    glVertex2f(0.5f, 0.5f);          //m
    glVertex2f(0.2f, 0.5f);          //n

    glEnd();

    glBegin(GL_POLYGON);           //
    glColor3f(0.0f, 0.0f, 255.0f); // blue
                                   // ship room 2
    glVertex2f(-0.1f, 0.2f);       //j
    glVertex2f(0.2f, 0.2f);        //k
    glVertex2f(0.2f, 0.5f);        //n
    glVertex2f(-0.1f, 0.5f);       //i

    glEnd();

    glBegin(GL_POLYGON);           //
    glColor3f(0.0f, 128.0f, 0.0f); // green
                                   // ship control room base
    glVertex2f(-0.85f, 0.2f);      //o
    glVertex2f(-0.45f, 0.2f);      //p
    glVertex2f(-0.45f, 0.3f);      //k
    glVertex2f(-0.85f, 0.3f);      //r

    glEnd();

    glBegin(GL_POLYGON);           //
    glColor3f(255.0f, 0.0f, 0.0f); // red
                                   // ship control room
    glVertex2f(-0.8f, 0.8f);       //s
    glVertex2f(-0.8f, 0.3f);       //t
    glVertex2f(-0.5f, 0.3f);       //u
    glVertex2f(-0.5f, 0.8f);       //v

    glEnd();

    glBegin(GL_POLYGON);             //
    glColor3f(0.255f, 0.255f, 0.0f); // yellow
                                     // ship room window 1
    glVertex2f(-0.7f, 0.7f);         //w
    glVertex2f(-0.7f, 0.6f);         //z
    glVertex2f(-0.6f, 0.6f);         //a1
    glVertex2f(-0.6f, 0.7f);         //b1

    glEnd();

    glBegin(GL_POLYGON);             //
    glColor3f(0.255f, 0.255f, 0.0f); // yellow
                                     // ship room window 2
    glVertex2f(-0.7f, 0.5f);         //c1
    glVertex2f(-0.7f, 0.4f);         //d1
    glVertex2f(-0.6f, 0.4f);         //e1
    glVertex2f(-0.6f, 0.5f);         //f1

    glEnd();

    glBegin(GL_POLYGON);           //
    glColor3f(255.0f, 0.0f, 0.0f); // red
                                   // ship art 2
    glVertex2f(0.49f, 0.05f);      //u
    glVertex2f(0.7f, 0.0f);        //v
    glVertex2f(0.8f, 0.1f);        //w

    glEnd();

    glBegin(GL_POLYGON);           //
    glColor3f(255.0f, 0.0f, 0.0f); // red
                                   // ship top
    glVertex2f(0.672f, 0.298f);    //o1
    glVertex2f(0.6f, 0.2f);        //p1
    glVertex2f(0.9f, 0.2f);        //d
    glVertex2f(0.98f, 0.3f);       //q1

    glEnd();

    glBegin(GL_POLYGON);               //
    glColor3f(255.0f, 255.0f, 255.0f); // white
                                       // ship rack 1
    glVertex2f(-0.2f, 0.3f);           //g1
    glVertex2f(-0.2f, 0.2f);           //h1
    glVertex2f(0.0f, 0.2f);            //i1
    glVertex2f(0.0f, 0.3f);            //j1

    glEnd();

    glBegin(GL_POLYGON);               //
    glColor3f(255.0f, 255.0f, 255.0f); // white
                                       // ship rack 2
    glVertex2f(0.1f, 0.3f);            //k1
    glVertex2f(0.1f, 0.2f);            //l1
    glVertex2f(0.3f, 0.2f);            //m1
    glVertex2f(0.3f, 0.3f);            //n1

    glEnd();

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("SHIP");       // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutDisplayFunc(display);       // Register display callback handler for window re-paint
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}
