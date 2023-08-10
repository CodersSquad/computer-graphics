// Source code from the book:
// Computer Graphics with OpenGL- 4th Edition
// Hearn, Baker & Carither, 2013
#include <GL/glut.h>

GLsizei winWidth = 400, winHeight = 300; // Initial display-window size.

void init (void)
{
    glClearColor (0.0, 0.0, 1.0, 1.0); // Set display-window color to blue.
    glMatrixMode (GL_PROJECTION);
    gluOrtho2D (0.0, 200.0, 0.0, 150.0);
}

void displayFcn (void)
{
    glClear (GL_COLOR_BUFFER_BIT);  //Clear display window.
    glColor3f (1.0, 0.0, 0.0);      //Set point color to red.
    glPointSize (3.0);              //Set point size to 3.0.
}

void winReshapeFcn (GLint newWidth, GLint newHeight)
{
    /* Reset viewport and projection parameters */
    glViewport (0, 0, newWidth, newHeight);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ( );
    gluOrtho2D (0.0, GLdouble (newWidth), 0.0, GLdouble (newHeight));
    // Reset display-window size parameters.
    winWidth = newWidth;
    winHeight = newHeight;
}

void plotPoint (GLint x, GLint y)
{
    glBegin (GL_POINTS);
      glVertex2i (x, y);
    glEnd ( );
}

void mousePtPlot (GLint button, GLint action, GLint xMouse, GLint yMouse)
{
    if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	plotPoint (xMouse, winHeight - yMouse);
    glFlush ( );
}

int main (int argc, char** argv)
{
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition (100, 100);
    glutInitWindowSize (winWidth, winHeight);
    glutCreateWindow ("Mouse Plot Points");
    init ( );
    glutDisplayFunc (displayFcn);
    glutReshapeFunc (winReshapeFcn);
    glutMouseFunc (mousePtPlot);
    glutMainLoop ( );
    return 0;
}
