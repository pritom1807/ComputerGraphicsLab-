//Use only Triangle and quads
//gradient  color
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); //Begin Quads coordinates


    //main body
    glColor3f (1.0, 0.0, .0);
    glVertex3f(0.2, 0.2, 0.0);
    glColor3f (0.7, 0.4, .0);
    glVertex3f(0.8, 0.2, 0.0);
    glColor3f (0.5, 0.1, .0);
    glVertex3f(0.8, 0.5, 0.0);
    glColor3f (0.7, 0.4, .0);
    glVertex3f(0.2, 0.5, 0.0);


    //Door part
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.43, 0.2, 0.0);
    glVertex3f(0.57, 0.2, 0.0);
    glVertex3f(0.57, 0.34, 0.0);
    glVertex3f(0.43, 0.34, 0.0);



    //left window
    glColor3f (0.7, 1.0, 0.2);
    glVertex3f(0.3, 0.27, 0.0);
    glColor3f (0.5, 0.1, .0);
    glVertex3f(0.35, 0.27, 0.0);
    glVertex3f(0.35, 0.33, 0.0);
    glVertex3f(0.3, 0.33, 0.0);


    //right window
    glColor3f (0.7, 1.0, 0.2);
    glVertex3f(0.65, 0.27, 0.0);
    glColor3f (0.0, 0.0, .0);
    glVertex3f(0.71, 0.27, 0.0);
    glColor3f (0.7, 1.0, 0.2);
    glVertex3f(0.71, 0.33, 0.0);
    glVertex3f(0.65, 0.33, 0.0);



    //fire escape
    glColor3f (0.0, 0.0, .0);
    glVertex3f(0.7, 0.55, 0.0);
    glColor3f (0.9, 0.0, .1);
    glVertex3f(0.75, 0.55, 0.0);
    glVertex3f(0.75, 0.67, 0.0);
    glVertex3f(0.7, 0.67, 0.0);


    //Lower Shape
    glColor3f (0.0, 0.0, .0);
    glVertex3f(0.17, 0.17, 0.0);
    glVertex3f(0.82, 0.17, 0.0);
    glVertex3f(0.82, 0.2, 0.0);
    glVertex3f(0.17, 0.2, 0.0);

    glEnd();//End triangle coordinates


    //up home shape
    glBegin(GL_TRIANGLES);
    glColor3f (0.2f, 0.1f, 0.0f);
    glVertex3f(0.9, 0.5, 0.0);
    glColor3f (0.1f, 0.0, .0);
    glVertex3f(0.1, 0.5, 0.0);
    glColor3f (0.5, 0.1, .0);
    glVertex3f(0.5, 0.7, 0.0);
    glEnd();

    glFlush ();
}
void init (void)
{
    glClearColor (.7,.6,.5, 0.0); //select clearing (background) color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Home Pritom Saha");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
