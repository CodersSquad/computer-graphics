// First Program in OpenGL
// Compile with:
// g++ hello-OpenGL.cpp -o hello-opengl -lglut -lGLU -lGL

#include <GL/glut.h>
// (or others, depending on the system in use)
void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);    // Set display-window color to white.
    glMatrixMode (GL_PROJECTION);         // Set projection parameters.
    gluOrtho2D (0.0, 200.0, 0.0, 150.0);
}
void lineSegment (void)
{
    glClear (GL_COLOR_BUFFER_BIT);        // Clear display window.

    glColor3f (0.0, 0.4, 0.2);            // Set line segment color to green.
    glBegin (GL_LINES);
    glVertex2i (180, 15);                 // Specify line-segment geometry.
    glVertex2i (10, 145);
    glEnd ( );
    glFlush ( );                          // Process all OpenGL routines as quickly as possible.
}

void points (void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.4, 0.2);
    glBegin (GL_POINTS);
    for (int i = 0; i<400; i++)
      glVertex2i (i, i);
    glEnd ();
    glFlush();
}

int main (int argc, char** argv)
{
    glutInit (&argc, argv);    // Initialize GLUT.
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);    // Set display mode.
    glutInitWindowPosition (50, 100);    // Set top-left display-window position.
    glutInitWindowSize (400, 400);    // Set display-window width and height.
    glutCreateWindow ("An Example OpenGL Program"); // Create display window.
    init ( ); // Execute initialization procedure.
    glutDisplayFunc (lineSegment);    // Send graphics to display window.
    //glutDisplayFunc (points);
    glutMainLoop ( );    // Display everything and wait.
    return 0;
}
