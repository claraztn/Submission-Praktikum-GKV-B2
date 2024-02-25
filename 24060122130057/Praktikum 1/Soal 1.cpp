/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <GL/glut.h>

void Soal_1(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
// GL_LINE_STRIP
    glLineWidth(2.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
	glVertex2f(0.1, 0.8);
	glVertex2f(-0.3, 0.8);
	glVertex2f(-0.3, 0.55);
	glVertex2f(0.1, 0.55);
	glVertex2f(0.1, 0.2);
	glVertex2f(-0.3, 0.2);
	glVertex2f(-0.3, 0.3);
    glEnd(); 
    
// GL_LINE_LOOP
    glLineWidth(2.5f);
    glBegin(GL_LINE_LOOP);
    glColor3f(165.0f / 255.0f, 42.0f / 255.0f, 42.0f / 255.0f ); // Brown
    // line 1
	glVertex2f(-0.8, 0.4);
	glVertex2f(-0.8, 0.8);
	// Line 2
	glVertex2f(-0.8, 0.8);
	glVertex2f(-0.7, 0.6);
	// Line 3
	glVertex2f(-0.7, 0.6);
	glVertex2f(-0.6, 0.6);
	// Line 4
	glVertex2f(-0.7, 0.6);
	glVertex2f(-0.6, 0.6);
	// Line 5
	glVertex2f(-0.6, 0.6);
	glVertex2f(-0.5, 0.8);
	// Line 6
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.5, 0.4);
	// Line 7
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.65, 0.2);
	glEnd();

// GL_TRIANGLE_FAN
	glBegin(GL_TRIANGLE_FAN);
    // Titik Pusat Segitiga
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glVertex2f(0.5, 0.2);
    // Titik Sudut 1
    glColor3f(1.0f, 0.0f, 0.0f); // Merah
   	glVertex2f(0.2, 0.6);
    // Titik Sudut 2
    glColor3f(1.0f, 0.5f, 0.0f); // Jingga
   	glVertex2f(0.3, 0.8);
    // Titik Sudut 3
    glColor3f(1.0f, 1.0f, 0.0f); // Kuning
   	glVertex2f(0.5, 0.9);
    // Titik Sudut 4
    glColor3f(0.0f, 1.0f, 0.0f); // Hijau
   	glVertex2f(0.7, 0.8);
    // Titik Sudut 5
    glColor3f(0.0f, 0.0f, 1.0f); // Biru
	glVertex2f(0.8, 0.6);
    glEnd();
    
// GL_TRIANGLE_STRIP
	glBegin(GL_TRIANGLE_STRIP);
    glColor4f(0.7412f, 0.7176f, 0.4196f, 1.0f); // Gold
    glVertex2f(-0.8, -0.5);
    glVertex2f(-0.6, -0.8);
    glVertex2f(-0.4, -0.78);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.8);
    glVertex2f(-0.4, -0.78);
    glVertex2f(-0.0, -0.5);
    glEnd();

// GL_QUADS
	glBegin(GL_QUADS);
    glColor3f(216.0f / 255.0f, 191.0f / 255.0f, 216.0f / 255.0f ); // Thistle
    glVertex2f(-0.15, -0.0);
    glVertex2f(0.0, 0.15);
    glVertex2f(0.15, 0.0);
    glVertex2f(0.0, -0.4);
	glEnd();

// GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);
    glColor3f(70.0f / 255.0f, 130.0f / 255.0f, 180.0f / 255.0f ); // Steel Blue
    glVertex2f(0.1, -0.5);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.4, -0.3);    
    glVertex2f(0.4, -0.7);    
    glVertex2f(0.5, -0.5);    
    glVertex2f(0.7, -0.7);    
    glVertex2f(0.8, -0.5);
    glVertex2f(0.8, -0.9);    
    glVertex2f(0.9, -0.7);   
	glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal_1");
    glutDisplayFunc(Soal_1);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}


