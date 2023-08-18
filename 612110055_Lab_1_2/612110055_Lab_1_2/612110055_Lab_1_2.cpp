#include<Windows.h>
#include<GL/glut.h>
void SetupRC(void);
void RenderScene(void);

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(320, 320);
	glutCreateWindow("GLUT Tutorial");
	SetupRC();
	glutDisplayFunc(RenderScene);
	glutMainLoop();
}
void RenderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0f, 1.0f, 0.0f);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(50.0f, 5.0f, 0.0f);
	glEnd();
	glFlush();
}

void SetupRC()
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-200.0, 200.0, -500.0, 500.0, -500.0, 500.0);

}