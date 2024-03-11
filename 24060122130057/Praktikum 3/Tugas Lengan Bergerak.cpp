/* 
Nama	: Clara Zita Nabilla 
NIM		: 24060122130057
Lab		: B2
*/

#include <GL/glut.h>
#include <string.h>
#include <stdio.h>

static int xbahu, ybahu, zbahu = 0;
static int siku = 0;
static int telapakTangan = 0;
static int jariJempol = 0;
static int jariTelunjuk = 0;
static int jariTengah = 0;
static int jariManis = 0;
static int jariKelingking = 0;

void init() {
	glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display() {
	glColor3f(1.0f, 1.0f, 1.0f);
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    
// bahu
        glTranslatef (-1.0, 0.0, 0.0);
        glRotatef ((GLfloat) xbahu, 1.0, 0.0, 0.0);
        glRotatef ((GLfloat) ybahu, 0.0, 1.0, 0.0);
        glRotatef ((GLfloat) zbahu, 0.0, 0.0, 1.0);
        glTranslatef (1.0, 0.0, 0.0);
        glPushMatrix();
            glScalef(2.0, 0.6, 1.0);
            glutWireCube(1.0);
        glPopMatrix();
        
// siku
        glTranslatef (1.0, 0.0, 0.0);
        glRotatef ((GLfloat) siku, 0.0, 0.0, 1.0);
        glTranslatef (1.0, 0.0, 0.0);
        glPushMatrix();
            glScalef (2.0, 0.6, 1.0);
            glutWireCube (1.0);
        glPopMatrix();
        
// telapak tangan
        glTranslatef (1.0, 0.0, 0.0);
        glRotatef ((GLfloat) telapakTangan, 0.0, 0.0, 1.0);
        glTranslatef (0.3, 0.0, 0.0);
        glPushMatrix();
            glScalef (0.8, 0.8, 1.0);
            glutWireCube (1.0);
        glPopMatrix();
        
// jari kelingking
        glPushMatrix();
                glTranslatef(0.0, 0.0, -0.5);
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariKelingking, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariKelingking, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariKelingking, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
        glPopMatrix();
        
// jari manis
        glPushMatrix();
                glTranslatef(0.0, 0.0, -00.25);
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariManis, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariManis, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariManis, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
        glPopMatrix();
        
// jari tengah
        glPushMatrix();
                glTranslatef(0.0, 0.0, 0.0);
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTengah, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTengah, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTengah, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
        glPopMatrix();
        
// jari telunjuk
        glPushMatrix();
                glTranslatef(0.0, 0.0, 00.25);
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTelunjuk, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTelunjuk, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariTelunjuk, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
        glPopMatrix();
        
// jari jempol
        glPushMatrix();
                glTranslatef(0.0, 0.0, 0.6);
                glTranslatef(0.1, 0.0, 0.0);
                glRotatef((GLfloat) jariJempol, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariJempol, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat) jariJempol, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                glPushMatrix();
                    glScalef(0.5, 0.25, 0.25);
                    glutWireCube(1.0);
                glPopMatrix();
        glPopMatrix();
        
    glPopMatrix();
    
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65, (GLfloat) w/ (GLfloat)h, 1.0, 50.0); 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
}

static void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':
            xbahu = (xbahu + 5) % 360;
            glutPostRedisplay();
            break;
        case 'A':
            xbahu = (xbahu - 5) % 360;
            glutPostRedisplay();
            break;
        case 'b':
            ybahu = (ybahu + 5) % 360;
            glutPostRedisplay();
            break;
        case 'B':
            ybahu = (ybahu - 5) % 360;
            glutPostRedisplay();
            break;
        case 'c':
            zbahu = (zbahu + 5) % 360;
            glutPostRedisplay();
            break;
        case 'C':
            zbahu = (zbahu - 5) % 360;
            glutPostRedisplay();
            break;
        case 's':
            siku = (siku + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            siku = (siku - 5) % 360;
            glutPostRedisplay();
            break;
        case 'f':
            telapakTangan = (telapakTangan + 5) % 360;
            glutPostRedisplay();
            break;
        case 'F':
            telapakTangan = (telapakTangan - 5) % 360;
            glutPostRedisplay();
            break;
        case 'i':
            jariJempol = (jariJempol + 5) % 360;
            glutPostRedisplay();
            break;
        case 'I':
            jariJempol = (jariJempol - 5) % 360;
            glutPostRedisplay();
            break;
        case 'n':
            jariTelunjuk = (jariTelunjuk + 5) % 360;
            glutPostRedisplay();
            break;
        case 'N':
            jariTelunjuk = (jariTelunjuk - 5) % 360;
            glutPostRedisplay();
            break;
        case 'g':
            jariTengah = (jariTengah + 5) % 360;
            glutPostRedisplay();
            break;
        case 'G':
            jariTengah = (jariTengah - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e':
         	jariManis =  (jariManis + 5) % 360;
            glutPostRedisplay();
            break;
        case 'E':
         	jariManis =  (jariManis - 5) % 360;
            glutPostRedisplay();
            break;
        case 'r':
            jariKelingking = (jariKelingking + 5) % 360;
            glutPostRedisplay();
            break;
        case 'R':
            jariKelingking = (jariKelingking - 5) % 360;
            glutPostRedisplay();
            break;
        case 27 :
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
