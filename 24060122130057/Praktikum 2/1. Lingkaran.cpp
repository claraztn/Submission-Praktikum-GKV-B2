/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898
#define circle_points 100
#define radius 0.5

void Lingkaran(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4.0);
    glPushMatrix();
    glBegin(GL_LINE_LOOP);
    int i;
    float angle;
    for (i = 0; i < circle_points; i++) {
        angle = 2 * PI * i / circle_points;
        glVertex3f(radius * cos(angle), radius * sin(angle), 0.0);
    }
    glEnd();
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(Lingkaran);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}

