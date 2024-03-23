/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <stdlib.h> // standard library
#include <stdio.h> // C I/O (for sprintf)
#include <math.h> // math functions
#include <GL/gl.h> // OpenGL
#include <GL/glut.h> // GLUT

double rotAngle = 20; // rotation angle (BEWARE: Global)
double rotAngle1 = 20; // rotation angle (BEWARE: Global)
double translateX = 0; // translation along x-axis
double translateY = 0; // translation along y-axis

//------------------------------------------------------------------
// init
// Sets up some default OpenGL values.
//------------------------------------------------------------------
void init()
{
    glClearColor(0, 0, 0, 0); // background color
    glClearDepth(1.0); // background depth value
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 1, 1000); // setup a perspective projection
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt( // set up the camera
            0.0, 0.0, 5.0, // eye position
            0.0, 0.0, 0.0, // lookat position
            0.0, 1.0, 0.0); // up direction
}

//------------------------------------------------------------------
// display callback function
// This is called each time application needs to redraw itself.
// Most of the opengl work is done through this function.
//------------------------------------------------------------------
void display()
{
    glClear(
            GL_COLOR_BUFFER_BIT | // clear the frame buffer (color)
            GL_DEPTH_BUFFER_BIT); // clear the depth buffer (depths)
    glPushMatrix(); // save the current camera transform
    glRotated(rotAngle, 0, 1, 0); // rotate by rotAngle about y-axis
    glRotated(rotAngle1, 1, 0, 0); // rotate by rotAngle about X-axis
        glTranslated(translateX, translateY, 0); // translate the object
	glEnable(GL_COLOR_MATERIAL); // specify object color
    glColor3f(1.0, 0.1, 0.1); // redish
    glutSolidTeapot(1); // draw the teapot
    glPopMatrix(); // restore the modelview matrix
    glFlush(); // force OpenGL to render now
    glutSwapBuffers(); // make the image visible
}

//------------------------------------------------------------------
// keyboard callback function
// This is called whenever a keyboard key is hit.
//------------------------------------------------------------------
void keyboard(unsigned char k, int x, int y)
{
    switch (k)
    {
        case 'v': // Increase rotation on Y-axis
            rotAngle += 5;
            break;
        case 'w': // Decrease rotation on Y-axis
            rotAngle -= 5;
            break;
        case 'x': // Increase rotation on X-axis
            rotAngle1 += 5;
            break;
        case 'y': // Decrease rotation on X-axis
            rotAngle1 -= 5;
            break;
        case 'u': // Move up
            translateY += 0.1;
            break;
        case 'd': // Move down
            translateY -= 0.1;
            break;
        case 'r': // Move right
            translateX -= 0.1;
            break;
        case 'l': // Move left
            translateX += 0.1;
            break;
        case 'q': 
            exit(0); // exit 
            break;
    }
    glutPostRedisplay(); // redraw the image now
}

//-----------------------------------------------------------------
// main program
// Where everything begins.
//------------------------------------------------------------------
int main(int argc, char** argv)
{
    glutInit(&argc, argv); // initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB); // set display mode
    glutCreateWindow("GLUT Example"); // create the window
    glutDisplayFunc(display); // call display() to redraw window
    glutKeyboardFunc(keyboard); // call keyboard() when key is hit
	init(); // our own initializations
    glutMainLoop(); // let GLUT take care of everything
    return 0;
}
