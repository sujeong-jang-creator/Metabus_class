#include <GL/freeglut.h>

void Display() {
	glutWireTeapot(0.5);

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(80, 80);
	glutInitWindowSize(400, 300);
	glutCreateWindow("GNU Triangle");

	glutDisplayFunc(Display);

	glutMainLoop();
}