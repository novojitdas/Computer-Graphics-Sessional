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

    glBegin(GL_QUADS);             // Each set of 4 vertices form a quad
    glColor3f(0.0f, 255.0f, 0.0f); // white
    glVertex2f(-0.9f, -0.8f);      // x--,y--
    glVertex2f(-0.0f, -0.8f);      //x++,y--
    glVertex2f(-0.0f, -0.0f);      //x++,y++
    glVertex2f(-0.9f, -0.0f);      //x--,y++
    glEnd();

    // 1st
    glBegin(GL_QUADS);               // Each set of 4 vertices form a quad
    glColor3f(255.0f, 0.0f, 255.0f); // pink
    glVertex2f(-0.8f, -0.7f);        // x--,y--
    glVertex2f(-0.1f, -0.7f);        //x++,y--
    glVertex2f(-0.1f, -0.1f);        //x++,y++
    glVertex2f(-0.8f, -0.1f);        //x--,y++
    glEnd();

    //2nd
    glBegin(GL_QUADS);             // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 255.0f); // blue
    glVertex2f(-0.7f, -0.6f);      // x--,y--
    glVertex2f(-0.2f, -0.6f);      // x++,y--
    glVertex2f(-0.2f, -0.2f);      // x++,y++
    glVertex2f(-0.7f, -0.2f);      // x--,y++
    glEnd();

    //3rd
    glBegin(GL_QUADS);                 // Each set of 4 vertices form a quad
    glColor3f(255.0f, 255.0f, 255.0f); // white
    glVertex2f(-0.6f, -0.5f);          // x--,y--
    glVertex2f(-0.3f, -0.5f);          // x++,y--
    glVertex2f(-0.3f, -0.3f);          // x++,y++
    glVertex2f(-0.6f, -0.3f);          // x--,y++
    glEnd();

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);               // Initialize GLUT
    glutCreateWindow("Layered Windows"); // Create a window with the given title
    glutInitWindowSize(320, 320);        // Set the window's initial width & height
    glutInitWindowPosition(50, 50);      // Position the window's initial top-left corner
    glutDisplayFunc(display);            // Register display callback handler for window re-paint
    glutMainLoop();                      // Enter the event-processing loop
    return 0;
}
