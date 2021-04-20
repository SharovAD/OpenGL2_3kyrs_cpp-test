/*
 * DemoWindow.cpp
 *
 *  Created on: 19 ���. 2021 �.
 *      Author: kompU510
 */

#include "DemoWindow.h"

DemoWindow::DemoWindow(int width, int height)
: Window(width, height)
{
	set_title("OpenGL Demo Window");
}

void DemoWindow::setup_gl()
{
	glEnable(GL_DEPTH_TEST);// ������� ������������� ����������� ����


	glClearColor(0.2f, 0.4f, 0.7f, 1.0f);

	glMatrixMode(GL_PROJECTION);
	gluPerspective(
			45.0,								// ���� ������ �� ���������
			double(width()) / double(height()),	// ����������� ������
			0.1,								// ���������� �� ������� ��
			20.0);								// ���������� �� ������� ��
	glMatrixMode(GL_MODELVIEW);
}

void funcKUB () {  // �������
	glBegin(GL_QUADS);

		glNormal3d(  0.,  0.,  -1.);
		glColor3d(1.0, 0.0, 0.0);		// ������ �����, �������
		glVertex3d(  1.,  1., -1.);
		glVertex3d( -1.,  1., -1.);
		glVertex3d( -1., -1., -1.);
		glVertex3d(  1., -1., -1.);

		glNormal3d(  0.,  0., 1.);
		glColor3d(0.0, 1.0, 1.0);		// ������� �����, ���������
		glVertex3d( -1.,  1.,  1.);
		glVertex3d(  1.,  1.,  1.);
		glVertex3d(  1., -1.,  1.);
		glVertex3d( -1., -1.,  1.);

		glNormal3d(  1.,  0.,  0.);
		glColor3d(0.0, 1.0, 0.0);		// ������� �����1, �����
			glVertex3d(1.0, -1.0,  1.0);
			glVertex3d( 1.0, 1.0,  1.0);
			glVertex3d( 1.0,  1.0,  -1.0);
			glVertex3d(1.0,  -1.0,  -1.0);

			glNormal3d( -1.,  0.,  0.);
			glColor3d(1.0, 0.0, 1.0);		// ������� �����2, �������
					glVertex3d(-1.0, 1.0,  1.0);
					glVertex3d( -1.0, -1.0,  1.0);
					glVertex3d( -1.0,  -1.0,  -1.0);
					glVertex3d(-1.0,  1.0,  -1.0);

					glNormal3d(  0.,  1.,  0.);
			glColor3d(1.0, 1.0, 1.0);		// ������� �����3, �����
					glVertex3d(-1.0, 1.0,  1.0);
					glVertex3d( 1.0, 1.0,  1.0);
					glVertex3d( 1.0,  1.0,  -1.0);
					glVertex3d(-1.0,  1.0,  -1.0);

					glNormal3d(  0., -1.,  0.);
					glColor3d(0.0, 0.0, 0.0);		// ������� �����4, ������
							glVertex3d(1.0, -1.0,  1.0);
							glVertex3d( -1.0, -1.0,  1.0);
							glVertex3d( -1.0,  -1.0,  -1.0);
							glVertex3d(1.0,  -1.0,  -1.0);
							glEnd();
}

void DemoWindow::render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // �������

	glLoadIdentity(); // MV = ��������� �������

	gluLookAt(	3.0, 4.0, 2.0,		// ���������� ������
				0.0, 0.0, 0.0,		// ���������� ������
				0.0, 0.0, 1.0);		// ����������� �����,	MV = C





	/* TODO: ������� ��� ��������������� ������
		 * - �������� ���������� ����� ����
		 * - ��������, ������ ��� � ������� ���� ������������ �����������
		 * - ��������� ���������, ����� ��� ����� ��������� ������������
		 * - ����������� � ��������� ����������������:
		 * 		~ ������������ �������;
		 * 		~ �������;
		 * 		~ ���������������.
		 * - ����������� � ��������� glPushMatrix() � glPopMatrix()
		 * - ��������� �� ������� ���������:
		 *          +-+
		 *          |X|
		 *        +-+ +-+
		 *        |X| |X|
		 *      +-+ +-+ +-+
		 *      |X| |X| |X|
		 *      +-+ +-+ +-+
		 */

	glEnd();
}

