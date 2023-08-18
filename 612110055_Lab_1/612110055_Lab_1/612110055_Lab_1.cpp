#include<Windows.h>
#include<GL/glut.h>

GLfloat x1 = 0.0f;
GLfloat y1 = 0.0f;
GLfloat rsize = 25;
GLfloat xstep = 1.0f;
GLfloat ystep = 1.0f;
GLfloat windowWidth;
GLfloat windowHeigth;

void RenderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(x1, y1, x1 + rsize, y1 - rsize);
	glutSwapBuffers();

}

void TimerFunction(int value)
{
	if (x1 > windowWidth - rsize || x1 < -windowWidth)
		xstep = -xstep;
	if (y1 > windowHeigth || y1 < -windowHeigth + rsize)
		ystep = -ystep;
	x1 += xstep;
	y1 += ystep;
	
	if (x1 > (windowWidth - rsize + xstep))
		x1 = windowWidth - rsize - 1;
	else if (x1 < -(windowWidth - xstep))
		x1 = -(windowWidth - 1);

	if (y1 > (windowHeigth + ystep))
		y1 = windowHeigth - 1;
	else if (y1 < -(windowHeigth - rsize + ystep))
		y1 = -windowHeigth + rsize - 1;
	glutPostRedisplay();
	glutTimerFunc(33, TimerFunction, 1);
}

void SetupRC(void)
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}

void changeSize(GLsizei w, GLsizei h)
{
	GLfloat aspectRation;
	if (h == 0)
		h = 1;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	aspectRation = (GLfloat)w / (GLfloat)h;
	if (w <= h)
	{
		windowWidth = 100;
		windowHeigth = 100 / aspectRation;
		glOrtho(-100.0, 100.0, -windowHeigth, windowHeigth,1.0,-1.0);

	}

	else
	{
		windowWidth = 100 * aspectRation;
		windowHeigth = 100;
		glOrtho(-windowWidth, windowWidth, -100.0, 100.0,1.0,-1.0);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void main(void)
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Bounce");
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(changeSize);
	glutTimerFunc(33, TimerFunction, 1);
	SetupRC();
	glutMainLoop();
}