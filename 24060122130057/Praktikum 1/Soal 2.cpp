/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <GL/glut.h>

void KubusBertingkat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Line 1
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.1, 0.8, 0.0, 0.7);
    glRectf(0.0, 0.8, 0.1, 0.7);
    
    // Line 2
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.2, 0.7, 0.0, 0.6);
    glRectf(0.1, 0.7, 0.2, 0.6);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.1, 0.7, 0.0, 0.6);
    glRectf(0.0, 0.7, 0.1, 0.6);
    
    // Line 3
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.3, 0.6, 0.2, 0.5);
    glRectf(0.2, 0.6, 0.3, 0.5);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.2, 0.6, 0.1, 0.5);
    glRectf(-0.1, 0.6, 0.2, 0.5);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.1, 0.6, 0.0, 0.5);
    glRectf(0.0, 0.6, 0.1, 0.5);

	// Line 4
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.3, 0.5, 0.2, 0.4);
    glRectf(0.2, 0.5, 0.3, 0.4);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.2, 0.5, 0.1, 0.4);
    glRectf(-0.1, 0.5, 0.2, 0.4);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.1, 0.5, 0.0, 0.4);
    glRectf(0.0, 0.5, 0.1, 0.4);
    
    // Line 5
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.4, 0.4, 0.3, 0.3);
    glRectf(0.3, 0.4, 0.4, 0.3);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.3, 0.4, 0.2, 0.3);
    glRectf(0.2, 0.4, 0.3, 0.3);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.2, 0.4, 0.1, 0.3);
    glRectf(-0.1, 0.4, 0.0, 0.3);
    glRectf(0.1, 0.4, 0.2, 0.3);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.1, 0.4, 0.0, 0.3);

    // Line 6
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.5, 0.3, 0.4, 0.2);
    glRectf(0.4, 0.3, 0.5, 0.2);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.4, 0.3, 0.3, 0.2);
    glRectf(0.3, 0.3, 0.4, 0.2);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.3, 0.3, 0.2, 0.2);
    glRectf(-0.2, 0.3, 0.1, 0.2);
    glRectf(-0.1, 0.3, 0.0, 0.2);
    glRectf(0.0, 0.3, 0.1, 0.2);
    glRectf(0.1, 0.3, 0.2, 0.2);
    glRectf(0.2, 0.3, 0.3, 0.2);
    
    // Line 7
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.5, 0.2, 0.4, 0.1);
    glRectf(0.4, 0.2, 0.5, 0.1);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.4, 0.2, 0.3, 0.1);
    glRectf(0.3, 0.2, 0.4, 0.1);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.3, 0.2, 0.2, 0.1);
    glRectf(-0.2, 0.2, 0.1, 0.1);
    glRectf(-0.1, 0.2, 0.0, 0.1);
    glRectf(0.0, 0.2, 0.1, 0.1);
    glRectf(0.2, 0.2, 0.3, 0.1);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.1, 0.2, 0.2, 0.1);
    
    // Line 8
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.6, 0.1, 0.5, 0.0);
    glRectf(0.5, 0.1, 0.6, 0.0);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.5, 0.1, 0.4, 0.0);
    glRectf(0.4, 0.1, 0.5, 0.0);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.4, 0.1, 0.3, 0.0);
    glRectf(-0.3, 0.1, 0.2, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.2, 0.1, 0.1, 0.0);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.1, 0.1, 0.0, 0.0);
    glRectf(0.0, 0.1, 0.1, 0.0);
    glRectf(0.1, 0.1, 0.2, 0.0);
    glRectf(0.2, 0.1, 0.3, 0.0);
    glRectf(0.3, 0.1, 0.4, 0.0);

//	 line 9
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.7, 0.0, -0.6, -0.1);
    glRectf(0.6, 0.0, 0.7, -0.1);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.6, 0.0, -0.5, -0.1);
    glRectf(0.5, 0.0, 0.6, -0.1);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.5, 0.0, -0.4, -0.1);
    glRectf(-0.4, 0.0, -0.3, -0.1);
    glRectf(-0.3, 0.0, -0.2, -0.1);
    glRectf(-0.2, 0.0, -0.1, -0.1);
    glRectf(-0.1, 0.0, -0.0, -0.1);
    glRectf(0.0, 0.0, 0.1, -0.1);
    glRectf(0.1, 0.0, 0.2, -0.1);
    glRectf(0.2, 0.0, 0.3, -0.1);
    glRectf(0.3, 0.0, 0.4, -0.1);
    glRectf(0.4, 0.0, 0.5, -0.1);

//	 line 10
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.7, -0.1, -0.6, -0.2);
    glRectf(0.6, -0.1, 0.7, -0.2);
    glColor3f(252.0f/255.0f, 81.0f/255.0f, 111.0f/255.0f); // Pink
    glRectf(-0.6, -0.1, -0.5, -0.2);
    glRectf(0.5, -0.1, 0.6, -0.2);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.5, -0.1, -0.4, -0.2);
    glRectf(-0.4, -0.1, -0.3, -0.2);
    glRectf(-0.2, -0.1, -0.1, -0.2);
    glRectf(-0.1, -0.1, -0.0, -0.2);
    glRectf(0.0, -0.1, 0.1, -0.2);
    glRectf(0.1, -0.1, 0.2, -0.2);
    glRectf(0.3, -0.1, 0.4, -0.2);
    glRectf(0.4, -0.1, 0.5, -0.2);    
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.3, -0.1, -0.2, -0.2);
    glRectf(0.2, -0.1, 0.3, -0.2);
    
//	Line 11
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.8, -0.2, -0.7, -0.3);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(-0.7, -0.2, -0.6, -0.3);
    glColor3f(214.0f/255.0f, 13.0f/255.0f, 47.0f/255.0f); // Darker Red
    glRectf(-0.6, -0.2, -0.5, -0.3);
    glRectf(-0.5, -0.2, -0.4, -0.3);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.4, -0.2, -0.3, -0.3);
    glRectf(-0.3, -0.2, -0.2, -0.3);
    glRectf(-0.2, -0.2, -0.1, -0.3);
    glRectf(-0.1, -0.2, 0.0, -0.3);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.0, -0.2, 0.1, -0.3);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(0.1, -0.2, 0.2, -0.3);
    glRectf(0.2, -0.2, 0.3, -0.3);
    glRectf(0.3, -0.2, 0.4, -0.3);
    glColor3f(214.0f/255.0f, 13.0f/255.0f, 47.0f/255.0f); // Darker Red
    glRectf(0.4, -0.2, 0.5, -0.3);
    glRectf(0.5, -0.2, 0.6, -0.3);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(0.6, -0.2, 0.7, -0.3);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.7, -0.2, 0.8, -0.3);

// Line 12
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.9, -0.3, -0.8, -0.4);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(-0.8, -0.3, -0.7, -0.4);
    glRectf(-0.7, -0.3, -0.6, -0.4);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(-0.6, -0.3, -0.5, -0.4);
    glRectf(-0.5, -0.3, -0.4, -0.4);
    glColor3f(214.0f/255.0f, 13.0f/255.0f, 47.0f/255.0f); // Darker Red
    glRectf(-0.4, -0.3, -0.3, -0.4);
    glRectf(-0.3, -0.3, -0.2, -0.4);
    glColor3f(255.0f/255.0f, 15.0f/255.0f, 52.0f/255.0f); // Red
    glRectf(-0.2, -0.3, -0.1, -0.4);
    glRectf(-0.1, -0.3, 0.0, -0.4);
    glRectf(0.0, -0.3, 0.1, -0.4);
    glRectf(0.1, -0.3, 0.2, -0.4);
    glColor3f(214.0f/255.0f, 13.0f/255.0f, 47.0f/255.0f); // Darker Red
    glRectf(0.2, -0.3, 0.3, -0.4);
    glRectf(0.3, -0.3, 0.4, -0.4);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(0.4, -0.3, 0.5, -0.4);
    glRectf(0.5, -0.3, 0.6, -0.4);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(0.6, -0.3, 0.7, -0.4);
    glRectf(0.7, -0.3, 0.8, -0.4);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.8, -0.3, 0.9, -0.4);

// Line 13
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.9, -0.4, -0.8, -0.5);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(-0.8, -0.4, -0.7, -0.5);
    glRectf(-0.7, -0.4, -0.6, -0.5);
    glRectf(-0.6, -0.4, -0.5, -0.5);
    glRectf(-0.5, -0.4, -0.4, -0.5);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(-0.4, -0.4, -0.3, -0.5);
    glRectf(-0.3, -0.4, -0.2, -0.5);
    glColor3f(214.0f/255.0f, 13.0f/255.0f, 47.0f/255.0f); // Darker Red
    glRectf(-0.2, -0.4, -0.1, -0.5);
    glRectf(-0.1, -0.4, 0.0, -0.5);
    glRectf(0.0, -0.4, 0.1, -0.5);
    glRectf(0.1, -0.4, 0.2, -0.5);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(0.2, -0.4, 0.3, -0.5);
    glRectf(0.3, -0.4, 0.4, -0.5);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(0.4, -0.4, 0.5, -0.5);
    glRectf(0.5, -0.4, 0.6, -0.5);
    glRectf(0.6, -0.4, 0.7, -0.5);
    glRectf(0.7, -0.4, 0.8, -0.5);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.8, -0.4, 0.9, -0.5);

// Line 14
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.9, -0.5, -0.8, -0.6);
    glColor3f(0.0f/255.0f, 120.0f/255.0f, 56.0f/255.0f); // Darker Green
    glRectf(-0.8, -0.5, -0.7, -0.6);
    glRectf(-0.7, -0.5, -0.6, -0.6);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(-0.6, -0.5, -0.5, -0.6);
    glRectf(-0.5, -0.5, -0.4, -0.6);
    glRectf(-0.4, -0.5, -0.3, -0.6);
    glRectf(-0.3, -0.5, -0.2, -0.6);
    glColor3f(1.0f, 1.0f, 1.0f); // Putih
    glRectf(-0.2, -0.5, -0.1, -0.6);
    glRectf(-0.1, -0.5, 0.0, -0.6);
    glRectf(0.0, -0.5, 0.1, -0.6);
    glRectf(0.1, -0.5, 0.2, -0.6);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(0.2, -0.5, 0.3, -0.6);
    glRectf(0.3, -0.5, 0.4, -0.6);
    glRectf(0.4, -0.5, 0.5, -0.6);
    glRectf(0.5, -0.5, 0.6, -0.6);
    glColor3f(0.0f/255.0f, 120.0f/255.0f, 56.0f/255.0f); // Darker Green
    glRectf(0.6, -0.5, 0.7, -0.6);
    glRectf(0.7, -0.5, 0.8, -0.6);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.8, -0.5, 0.9, -0.6);

// Line 15
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.8, -0.6, -0.7, -0.7);
    glRectf(-0.7, -0.6, -0.6, -0.7);
    glColor3f(0.0f/255.0f, 120.0f/255.0f, 56.0f/255.0f); // Darker Green
    glRectf(-0.6, -0.6, -0.5, -0.7);
    glRectf(-0.5, -0.6, -0.4, -0.7);
    glColor3f(0.0f/255.0f, 161.0f/255.0f, 82.0f/255.0f); // Green
    glRectf(-0.4, -0.6, -0.3, -0.7);
    glRectf(-0.3, -0.6, -0.2, -0.7);
    glRectf(-0.2, -0.6, -0.1, -0.7);
    glRectf(-0.1, -0.6, 0.0, -0.7);
    glRectf(0.0, -0.6, 0.1, -0.7);
    glRectf(0.1, -0.6, 0.2, -0.7);
    glRectf(0.2, -0.6, 0.3, -0.7);
    glRectf(0.3, -0.6, 0.4, -0.7);
    glColor3f(0.0f/255.0f, 120.0f/255.0f, 56.0f/255.0f); // Darker Green
    glRectf(0.4, -0.6, 0.5, -0.7);
    glRectf(0.5, -0.6, 0.6, -0.7);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.6, -0.6, 0.7, -0.7);
    glRectf(0.7, -0.6, 0.8, -0.7);

// Line 16
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.6, -0.7, -0.5, -0.8);
    glRectf(-0.5, -0.7, -0.4, -0.8);
    glColor3f(0.0f/255.0f, 120.0f/255.0f, 56.0f/255.0f); // Darker Green
    glRectf(-0.4, -0.7, -0.3, -0.8);
    glRectf(-0.3, -0.7, -0.2, -0.8);
    glRectf(-0.2, -0.7, -0.1, -0.8);
    glRectf(-0.1, -0.7, 0.0, -0.8);
    glRectf(0.0, -0.7, 0.1, -0.8);
    glRectf(0.1, -0.7, 0.2, -0.8);
    glRectf(0.2, -0.7, 0.3, -0.8);
    glRectf(0.3, -0.7, 0.4, -0.8);
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(0.4, -0.7, 0.5, -0.8);
    glRectf(0.5, -0.7, 0.6, -0.8);

// Line 17
    glColor3f(0.0f, 0.0f, 0.0f); // Hitam
    glRectf(-0.4, -0.8, -0.3, -0.9);
    glRectf(-0.3, -0.8, -0.2, -0.9);
    glRectf(-0.2, -0.8, -0.1, -0.9);
    glRectf(-0.1, -0.8, 0.0, -0.9);
    glRectf(0.0, -0.8, 0.1, -0.9);
    glRectf(0.1, -0.8, 0.2, -0.9);
    glRectf(0.2, -0.8, 0.3, -0.9);
    glRectf(0.3, -0.8, 0.4, -0.9);

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Semangkaaaaa");
    glutDisplayFunc(KubusBertingkat);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
