#include <windows.h>
#include <GL/glut.h>

void userdraw(){
    static int tick=0;



glBegin(GL_LINE_LOOP);
glColor3f(15,2,5);
glVertex2i(16,16);
glVertex2i(12,16);
glVertex2f(8,12.5);
glEnd();

}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120_NURUL FATIMAH");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
