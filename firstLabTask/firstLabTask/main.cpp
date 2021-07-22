
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

//red circle
glColor3f (1.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex3f (0.36, 0.68, 0.0);
    glVertex3f (0.36, 0.65, 0.0);
    glVertex3f (0.37, 0.63, 0.0);
    glVertex3f (0.39, 0.61, 0.0);
    glVertex3f (0.42, 0.59, 0.0);
    glVertex3f (0.46, 0.58, 0.0);
    glVertex3f (0.50, 0.577, 0.0);
    glVertex3f (0.54, 0.58, 0.0);
    glVertex3f (0.57, 0.59, 0.0);
    glVertex3f (0.59, 0.60, 0.0);
    glVertex3f (0.62, 0.618, 0.0);



    glVertex3f (0.64, 0.65, 0.0);
    glVertex3f (0.64, 0.68, 0.0);
    glVertex3f (0.63, 0.71, 0.0);
    glVertex3f (0.61, 0.72, 0.0);
    glVertex3f (0.585, 0.73, 0.0);
    glVertex3f (0.56, 0.74, 0.0);
    glVertex3f (0.50, 0.745, 0.0);
    glVertex3f (0.46, 0.74, 0.0);
    glVertex3f (0.44, 0.735, 0.0);
    glVertex3f (0.42, 0.728, 0.0);
    glVertex3f (0.39, 0.71, 0.0);
    glEnd();




    glColor3f (1.0, 1.0, 1.0);


    glBegin(GL_QUADS);


    //1st
    glVertex3f(0.1, 0.4, 0.0);
    glVertex3f(0.10, 0.6, 0.0);
    glVertex3f(0.12, 0.6, 0.0);
    glVertex3f(0.12, 0.4, 0.0);





    //vitorer line


    glVertex3f(0.129, 0.4, 0.0);
    glVertex3f(0.129, 0.6, 0.0);
    glVertex3f(0.134, 0.6, 0.0);
    glVertex3f(0.134, 0.4, 0.0);

    glVertex3f(0.146, 0.4, 0.0);
    glVertex3f(0.146, 0.6, 0.0);
    glVertex3f(0.151, 0.6, 0.0);
    glVertex3f(0.151, 0.4, 0.0);


    //uporer line

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.1, 0.6, 0.0);
    glVertex3f(0.1, 0.62, 0.0);
    glVertex3f(0.18, 0.62, 0.0);
    glVertex3f(0.18, 0.6, 0.0);


    glVertex3f(0.16, 0.4, 0.0);
    glVertex3f(0.16, 0.6, 0.0);
    glVertex3f(0.18, 0.6, 0.0);
    glVertex3f(0.18, 0.4, 0.0);


    //2nd


    glVertex3f(0.25, 0.4, 0.0);
    glVertex3f(0.25, 0.7, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.27, 0.4, 0.0);




    //vitorer line
    glVertex3f(0.279, 0.4, 0.0);
    glVertex3f(0.279, 0.7, 0.0);
    glVertex3f(0.284, 0.7, 0.0);
    glVertex3f(0.284, 0.4, 0.0);

    glVertex3f(0.292, 0.4, 0.0);
    glVertex3f(0.292, 0.7, 0.0);
    glVertex3f(0.297, 0.7, 0.0);
    glVertex3f(0.297, 0.4, 0.0);



    //uporer line



    glVertex3f(0.25, 0.7, 0.0);
    glVertex3f(0.25, 0.72, 0.0);
    glVertex3f(0.33, 0.72, 0.0);
    glVertex3f(0.33, 0.7, 0.0);


    glVertex3f(0.31, 0.4, 0.0);
    glVertex3f(0.31, 0.7, 0.0);
    glVertex3f(0.33, 0.7, 0.0);
    glVertex3f(0.33, 0.4, 0.0);


    //middle
    glVertex3f(0.4, 0.4, 0.0);
    glVertex3f(0.4, 0.8, 0.0);
    glVertex3f(0.42, 0.8, 0.0);
    glVertex3f(0.42, 0.4, 0.0);

    glVertex3f(0.4, 0.8, 0.0);
    glVertex3f(0.35, 0.9, 0.0);
    glVertex3f(0.37, 0.9, 0.0);
    glVertex3f(0.42, 0.8, 0.0);



    //vitorer line

    glVertex3f(0.429, 0.4, 0.0);
    glVertex3f(0.429, 0.8, 0.0);
    glVertex3f(0.434, 0.8, 0.0);
    glVertex3f(0.434, 0.4, 0.0);

    glVertex3f(0.446, 0.4, 0.0);
    glVertex3f(0.446, 0.8, 0.0);
    glVertex3f(0.451, 0.8, 0.0);
    glVertex3f(0.451, 0.4, 0.0);



    glVertex3f(0.459, 0.4, 0.0);
    glVertex3f(0.459, 0.8, 0.0);
    glVertex3f(0.464, 0.8, 0.0);
    glVertex3f(0.464, 0.4, 0.0);

    glVertex3f(0.472, 0.4, 0.0);
    glVertex3f(0.472, 0.8, 0.0);
    glVertex3f(0.477, 0.8, 0.0);
    glVertex3f(0.477, 0.4, 0.0);







    //middle upore slim line
    glVertex3f(0.4, 0.8, 0.0);
    glVertex3f(0.4, 0.801, 0.0);
    glVertex3f(0.6, 0.801, 0.0);
    glVertex3f(0.6, 0.8, 0.0);






    //uporer vitorer small lines first row


    glVertex3f(0.429, 0.8, 0.0);
    glVertex3f(0.378, 0.9, 0.0);
    glVertex3f(0.385, 0.9, 0.0);
    glVertex3f(0.434, 0.8, 0.0);



    glVertex3f(0.446, 0.8, 0.0);
    glVertex3f(0.395, 0.9, 0.0);
    glVertex3f(0.4, 0.9, 0.0);
    glVertex3f(0.451, 0.8, 0.0);


    glVertex3f(0.459, 0.8, 0.0);
    glVertex3f(0.41, 0.9, 0.0);
    glVertex3f(0.419, 0.9, 0.0);
    glVertex3f(0.464, 0.8, 0.0);

    glVertex3f(0.472, 0.8, 0.0);
    glVertex3f(0.429, 0.9, 0.0);
    glVertex3f(0.436, 0.9, 0.0);
    glVertex3f(0.477, 0.8, 0.0);



    //uporer bar

    glVertex3f(0.35, 0.9, 0.0);
    glVertex3f(0.35, 0.91, 0.0);
    glVertex3f(0.57, 0.91, 0.0);
    glVertex3f(0.57, 0.9, 0.0);




    glVertex3f(0.49, 0.4, 0.0);
    glVertex3f(0.49, 0.8, 0.0);
    glVertex3f(0.51, 0.8, 0.0);
    glVertex3f(0.51, 0.4, 0.0);

    glVertex3f(0.49, 0.8, 0.0);
    glVertex3f(0.45, 0.9, 0.0);
    glVertex3f(0.47, 0.9, 0.0);
    glVertex3f(0.51, 0.8, 0.0);



    //vitorer line 2nd row

    glVertex3f(0.526, 0.4, 0.0);
    glVertex3f(0.526, 0.8, 0.0);
    glVertex3f(0.531, 0.8, 0.0);
    glVertex3f(0.531, 0.4, 0.0);

    glVertex3f(0.54, 0.4, 0.0);
    glVertex3f(0.54, 0.8, 0.0);
    glVertex3f(0.545, 0.8, 0.0);
    glVertex3f(0.545, 0.4, 0.0);


    glVertex3f(0.551, 0.4, 0.0);
    glVertex3f(0.551, 0.8, 0.0);
    glVertex3f(0.556, 0.8, 0.0);
    glVertex3f(0.556, 0.4, 0.0);

    glVertex3f(0.563, 0.4, 0.0);
    glVertex3f(0.563, 0.8, 0.0);
    glVertex3f(0.568, 0.8, 0.0);
    glVertex3f(0.568, 0.4, 0.0);

    //uporer vitorer small lines first row

    glVertex3f(0.526, 0.8, 0.0);
    glVertex3f(0.488, 0.9, 0.0);
    glVertex3f(0.495, 0.9, 0.0);
    glVertex3f(0.531, 0.8, 0.0);



    glVertex3f(0.54, 0.8, 0.0);
    glVertex3f(0.505, 0.9, 0.0);
    glVertex3f(0.512, 0.9, 0.0);
    glVertex3f(0.545, 0.8, 0.0);

    glVertex3f(0.551, 0.8, 0.0);
    glVertex3f(0.519, 0.9, 0.0);
    glVertex3f(0.525, 0.9, 0.0);
    glVertex3f(0.556, 0.8, 0.0);

    glVertex3f(0.563, 0.8, 0.0);
    glVertex3f(0.533, 0.9, 0.0);
    glVertex3f(0.538, 0.9, 0.0);
    glVertex3f(0.568, 0.8, 0.0);












//majer last row

    glVertex3f(0.58, 0.4, 0.0);
    glVertex3f(0.58, 0.8, 0.0);
    glVertex3f(0.6, 0.8, 0.0);
    glVertex3f(0.6, 0.4, 0.0);
    //uporer row
    glVertex3f(0.58, 0.8, 0.0);
    glVertex3f(0.55, 0.9, 0.0);
    glVertex3f(0.57, 0.9, 0.0);
    glVertex3f(0.6, 0.8, 0.0);






    glVertex3f(0.4, 0.8, 0.0);
    glVertex3f(0.4, 0.801, 0.0);
    glVertex3f(0.6, 0.801, 0.0);
    glVertex3f(0.6, 0.8, 0.0);




    //4th

    glVertex3f(0.68, 0.4, 0.0);
    glVertex3f(0.68, 0.7, 0.0);
    glVertex3f(0.70, 0.7, 0.0);
    glVertex3f(0.70, 0.4, 0.0);


    //uporer bar
    glVertex3f(0.68, 0.7, 0.0);
    glVertex3f(0.68, 0.72, 0.0);
    glVertex3f(0.76, 0.72, 0.0);
    glVertex3f(0.76, 0.7, 0.0);


    glVertex3f(0.74, 0.4, 0.0);
    glVertex3f(0.74, 0.7, 0.0);
    glVertex3f(0.76, 0.7, 0.0);
    glVertex3f(0.76, 0.4, 0.0);


    //vitorer row
    glVertex3f(0.71, 0.4, 0.0);
    glVertex3f(0.71, 0.7, 0.0);
    glVertex3f(0.715, 0.7, 0.0);
    glVertex3f(0.715, 0.4, 0.0);

    glVertex3f(0.725, 0.4, 0.0);
    glVertex3f(0.725, 0.7, 0.0);
    glVertex3f(0.73, 0.7, 0.0);
    glVertex3f(0.73, 0.4, 0.0);






    //last row





    glVertex3f(0.83, 0.4, 0.0);
    glVertex3f(0.83, 0.6, 0.0);
    glVertex3f(0.85, 0.6, 0.0);
    glVertex3f(0.85, 0.4, 0.0);



    glVertex3f(0.83, 0.6, 0.0);
    glVertex3f(0.83, 0.62, 0.0);

    glVertex3f(0.92, 0.62, 0.0);
    glVertex3f(0.92, 0.6, 0.0);



    glVertex3f(0.9, 0.4, 0.0);
    glVertex3f(0.9, 0.6, 0.0);
    glVertex3f(0.92, 0.6, 0.0);
    glVertex3f(0.92, 0.4, 0.0);


    //vitorer row
    glVertex3f(0.86, 0.4, 0.0);
    glVertex3f(0.86, 0.6, 0.0);
    glVertex3f(0.865, 0.6, 0.0);
    glVertex3f(0.865, 0.4, 0.0);

    glVertex3f(0.88, 0.4, 0.0);
    glVertex3f(0.88, 0.6, 0.0);
    glVertex3f(0.885, 0.6, 0.0);
    glVertex3f(0.885, 0.4, 0.0);






    //lowershape

     glColor3f (0.60,0.40,0.70);

    glVertex3f(0.0, 0.35, 0.0);
    glVertex3f(0.00, 0.4, 0.0);
    glVertex3f(1, 0.4, 0.0);
    glVertex3f(1, 0.35, 0.0);

    glVertex3f(0.1, 0.35, 0.0);
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(.9, 0.3, 0.0);
    glVertex3f(.9, 0.35, 0.0);

     glVertex3f(0.2, 0.3, 0.0);
    glVertex3f(0.2, 0.25, 0.0);
    glVertex3f(.8, 0.25, 0.0);
    glVertex3f(.8, 0.3, 0.0);

    glVertex3f(0.3, 0.25, 0.0);
    glVertex3f(0.3, 0.2, 0.0);
    glVertex3f(.7, 0.2, 0.0);
    glVertex3f(.7, 0.25, 0.0);

     glVertex3f(0.4, 0.2, 0.0);
    glVertex3f(0.4, 0.15, 0.0);
    glVertex3f(.6, 0.15, 0.0);
    glVertex3f(.6, 0.2, 0.0);



    glEnd();//




    glFlush ();
}
void init (void)
{

    glClearColor (1.0f, 0.5f, 0.0f, 0.0f); //select clearing (background) color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 700);
    glutInitWindowPosition (100, 20);
    glutCreateWindow ("Shaheed Minar");
    init ();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
