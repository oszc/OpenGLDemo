#include <iostream>
#include "GLUT/glut.h"

void init();

using namespace std;

void line(){
    glBegin(GL_LINES);
    glVertex2i(180,15);
    glVertex2i(10,145);
    glEnd();
}
void onDraw(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.4, 0.2);
    line();
    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);

}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(50,100);
    glutInitWindowSize(400,300);
    glutCreateWindow("An Example OpenGL Program");

    init();

    glutDisplayFunc(onDraw);
    glutMainLoop();
    return 0;
}

