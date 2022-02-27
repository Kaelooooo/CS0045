#include <iostream> //RINON, Charles
#include <GL\glut.h>
using namespace std;

void defaultDisplay();
void point();
void triangle();

int main(int argc, char **argv){ //RUBIO, Aaron
    glutInit(&argc, argv);
    glutInitWindowSize(1024,768);
    glutInitWindowPosition(200,50);
    glutCreateWindow("My First OpenGL");
    glutDisplayFunc(defaultDisplay);
    glutMainLoop();
    
    return 0;
}

void triangle(){ //SANTIAGO, Deniel
    
    GLfloat trianglevertex[] = { 
        0.0f, .35f, 0.0f,
       -0.35f, 0.0f, 0.0f,
       0.35f, 0.0f, 0.0f,
       
       -0.35f, -0.35f, 0.0f,
       0.0f, 0.0f, 0.0f,
       0.35f, -0.35f, 0.0f,
       
       0.0f, -0.35f, 0.0f,
       -0.35f, -0.72f, 0.0f,
       0.35f, -0.72f, 0.0f
    };
    
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, trianglevertex);
    glDrawArrays(GL_TRIANGLES, 0, 9);
    glDisableClientState(GL_VERTEX_ARRAY);
}

void point(){ //SAULO, Jerome
    glPointSize(20.0);
    
    GLfloat pointvertex[] = { 
        -0.75f, -0.75f, 0.0f,
        -0.75f, 0.75f, 0.0f,
        0.75f, 0.75f, 0.0f,
        0.75f, -0.75f, 0.0f
    };
    
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, pointvertex);
    glDrawArrays(GL_POINTS, 0, 4);
    glDisableClientState(GL_VERTEX_ARRAY);
}

void defaultDisplay(){ //SAMOLDE, Roy 
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
        point();
        triangle();    
    glFlush();
}
