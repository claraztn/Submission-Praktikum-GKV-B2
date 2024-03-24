/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <math.h> 
#include <GL/glut.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

float angle = 0.0, deltaAngle = 0.0, ratio; 
float x = 0.0f, y = 1.75f, z = 15.0f; // posisi awal kamera 
float lx = 0.0f, ly = 0.0f, lz = -1.0f; 
int deltaMove = 0, h, w; 
int bitmapHeight = 12; 

void Reshape(int w1, int h1) { 
    // Fungsi reshape 
    if (h1 == 0) 
        h1 = 1; 
    w = w1; 
    h = h1; 
    ratio = 1.0f * w / h; 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    glViewport(0, 0, w, h); 
    gluPerspective(45, ratio, 0.1, 1000); 
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity(); 
    gluLookAt(x, y, z, 
              x + lx, y + ly, z + lz, 
              0.0f, 1.0f, 0.0f); 
} 

void orientMe(float ang) { 
    // Fungsi ini untuk memutar arah kamera (tengok kiri/kanan) 
    lx = sin(ang); 
    lz = -cos(ang); 
    glLoadIdentity(); 
    gluLookAt(x, y, z, 
              x + lx, y + ly, z + lz, 
              0.0f, 1.0f, 0.0f); 
} 

void moveMeFlat(int i) { 
    // Fungsi ini untuk maju mundur kamera 
    x = x + i * (lx) * 0.1; 
    z = z + i * (lz) * 0.1; 
    glLoadIdentity(); 
    gluLookAt(x, y, z, 
              x + lx, y + ly, z + lz, 
              0.0f, 1.0f, 0.0f); 
} 

void Grid() { 
    // Fungsi untuk membuat grid di "lantai" 
    double i; 
    const float Z_MIN = -50, Z_MAX = 50; 
    const float X_MIN = -50, X_MAX = 50; 
    const float gap = 1.5; 
    glColor3f(0.5, 0.5, 0.5); 
    glBegin(GL_LINES); 
    for (i = Z_MIN; i < Z_MAX; i += gap) { 
        glVertex3f(i, 0, Z_MIN); 
        glVertex3f(i, 0, Z_MAX); 
    } 
    for (i = X_MIN; i < X_MAX; i += gap) { 
        glVertex3f(X_MIN, 0, i); 
        glVertex3f(X_MAX, 0, i); 
    } 
    glEnd(); 
} 

void drawCar() {
    // Kubus Bawah
    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Kubus Atas
    glColor3f(0.8, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(0.4, 0.5, 0);
    glScalef(1.2, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

	// Jendela
	glColor3f(0.7686f, 0.8706f, 0.9647f);
    glPushMatrix();
    glTranslatef(0.13, 0.5, 0.51); 
    glBegin(GL_QUADS);
    glVertex2f(-0.28, 0.2);
    glVertex2f(0.28, 0.2);
    glVertex2f(0.28, -0.2);
    glVertex2f(-0.28, -0.2);
    glEnd();
    glPopMatrix();

	glColor3f(0.7686f, 0.8706f, 0.9647f);
    glPushMatrix();
    glTranslatef(0.13, 0.5, 0.51); 
    glBegin(GL_QUADS);
    glVertex2f(0.30, 0.2);
    glVertex2f(0.80, 0.2);
    glVertex2f(0.80, -0.2);
    glVertex2f(0.30, -0.2);
    glEnd();
    glPopMatrix();
    
	glColor3f(0.7686f, 0.8706f, 0.9647f);
    glPushMatrix();
    glTranslatef(0.13, 0.5, -0.51); 
    glBegin(GL_QUADS);
    glVertex2f(-0.28, 0.2);
    glVertex2f(0.28, 0.2);
    glVertex2f(0.28, -0.2);
    glVertex2f(-0.28, -0.2);
    glEnd();
    glPopMatrix();

	glColor3f(0.7686f, 0.8706f, 0.9647f);
    glPushMatrix();
    glTranslatef(0.13, 0.5, -0.51); 
    glBegin(GL_QUADS);
    glVertex2f(0.30, 0.2);
    glVertex2f(0.80, 0.2);
    glVertex2f(0.80, -0.2);
    glVertex2f(0.30, -0.2);
    glEnd();
    glPopMatrix();
    
    // Kaca depan
	glColor3f(0.7686f, 0.8706f, 0.9647f);
	glPushMatrix();
	glTranslatef(-0.21, 0.5, 0.0); 
	glRotatef(90.0, 0.0, 1.0, 0.0); 
	glTranslatef(-0.5, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(0.05, 0.2);
	glVertex2f(0.95, 0.2);
	glVertex2f(0.95, -0.2);
	glVertex2f(0.05, -0.2);
	glEnd();
	glPopMatrix();

    // Kaca belakang
	glColor3f(0.7686f, 0.8706f, 0.9647f);
	glPushMatrix();
	glTranslatef(1.01, 0.5, 0.0); 
	glRotatef(90.0, 0.0, 1.0, 0.0); 
	glTranslatef(-0.5, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(0.05, 0.2);
	glVertex2f(0.95, 0.2);
	glVertex2f(0.95, -0.2);
	glVertex2f(0.05, -0.2);
	glEnd();
	glPopMatrix();

	//Bawah kap
    glColor3f(0.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-1.01, 0.0, 0.0); 
	glRotatef(90.0, 0.0, 1.0, 0.0); 
	glTranslatef(-0.5, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(0.05, 0.2);
	glVertex2f(0.95, 0.2);
	glVertex2f(0.95, -0.2);
	glVertex2f(0.05, -0.2);
	glEnd();
	glPopMatrix();

    // Roda
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-0.6, -0.3, 0.6);
    glutSolidTorus(0.1, 0.2, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6, -0.3, -0.6);
    glutSolidTorus(0.1, 0.2, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6, -0.3, 0.6);
    glutSolidTorus(0.1, 0.2, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6, -0.3, -0.6);
    glutSolidTorus(0.1, 0.2, 20, 20);
    glPopMatrix();
    
    // serep
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
	glRotatef(90.0, 0.0, 1.0, 0.0); 
    glTranslatef(0.0, 0.23, 1.11);
    glutSolidTorus(0.1, 0.2, 20, 20);
    glPopMatrix();

    // Bumper
	glColor3f(0.4549f, 0.4549f, 0.4549f);
	glPushMatrix();
	glTranslatef(1.01, 0.0, 0.0); 
	glRotatef(90.0, 0.0, 1.0, 0.0); 
	glTranslatef(-0.5, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(0.05, -0.045);
	glVertex2f(0.95, -0.045);
	glVertex2f(0.95, -0.2);
	glVertex2f(0.05, -0.2);
	glEnd();
	glPopMatrix();
    
    // Lampu belakang
	glColor3f(0.6784f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(1.0, -0.12, 0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0, -0.12, -0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    // Lampu depan
	glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glTranslatef(-1.0, -0.05, 0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0, -0.05, -0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();
}

void display() { 
    // Kalau move dan angle tidak nol, gerakkan kamera... 
    if (deltaMove) 
        moveMeFlat(deltaMove); 
    if (deltaAngle) { 
        angle += deltaAngle; 
        orientMe(angle); 
    } 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
    // Gambar grid 
    Grid(); 
    // Gambar objek di sini... 
    drawCar(); 
    glutSwapBuffers(); 
    glFlush(); 
} 

void pressKey(int key, int x, int y) { 
    // Fungsi ini akan dijalankan saat tombol keyboard ditekan dan belum dilepas 
    // Selama tombol ditekan, variabel angle dan move diubah => kamera bergerak 
    switch (key) { 
        case GLUT_KEY_LEFT: 
            deltaAngle = -0.01f; 
            break; 
        case GLUT_KEY_RIGHT: 
            deltaAngle = 0.01f; 
            break; 
        case GLUT_KEY_UP: 
            deltaMove = 1; 
            break; 
        case GLUT_KEY_DOWN: 
            deltaMove = -1; 
            break; 
    } 
} 

void releaseKey(int key, int x, int y) { 
    // Fungsi ini akan dijalankan saat tekanan tombol keyboard dilepas 
    // Saat tombol dilepas, variabel angle dan move diset nol => kamera berhenti 
    switch (key) { 
        case GLUT_KEY_LEFT: 
            if (deltaAngle < 0.0f) 
                deltaAngle = 0.0f; 
            break; 
        case GLUT_KEY_RIGHT: 
            if (deltaAngle > 0.0f) 
                deltaAngle = 0.0f; 
            break; 
        case GLUT_KEY_UP: 
            if (deltaMove > 0) 
                deltaMove = 0; 
            break; 
        case GLUT_KEY_DOWN: 
            if (deltaMove < 0) 
                deltaMove = 0; 
            break; 
    } 
} 

// Variable untuk pencahayaan 
const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f }; 
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f }; 
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f }; 
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f }; 
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat high_shininess[] = { 100.0f }; 

void lighting() { 
    // Fungsi mengaktifkan pencahayaan 
    glEnable(GL_DEPTH_TEST); 
    glDepthFunc(GL_LESS); 
    glEnable(GL_LIGHT0); 
    glEnable(GL_NORMALIZE); 
    glEnable(GL_COLOR_MATERIAL); 
    glEnable(GL_LIGHTING); 
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient); 
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse); 
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular); 
    glLightfv(GL_LIGHT0, GL_POSITION, light_position); 
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient); 
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse); 
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular); 
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess); 
} 

void init(void) { 
    glEnable(GL_DEPTH_TEST); 
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); 
} 

int main(int argc, char **argv) { 
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA); 
    glutInitWindowPosition(100, 100); 
    glutInitWindowSize(640, 480); 
    glutCreateWindow("Mobil 3D"); 
    glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombol keyboard dipencet terus) 
    glutSpecialFunc(pressKey); 
    glutSpecialUpFunc(releaseKey); 
    glutDisplayFunc(display); 
    glutIdleFunc(display); // Fungsi display-nya dipanggil terusmenerus 
    glutReshapeFunc(Reshape); 
    lighting(); 
    init(); 
    glutMainLoop(); 
    return(0); 
}
