#ifndef PARTICLEH
#define PARTICLEH

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
#include <GL/GLAUX.H>
#include "map.h"


class particle {
public:
	particle();
	~particle();
	void init();
	void activate();
	void update();
	void render();

	// ״̬
	bool active;

private:
	
	// λ��
	float pos_x;
	float pos_y;
	float pos_z;
	// �ٶ�
	float speed_x;
	float speed_y;
	float speed_z;
	// ���ٶ�
	float accelerate_x;
	float accelerate_y;
	float accelerate_z;
	// ��ɫ
	float color_r;
	float color_g;
	float color_b;
	// ��С
	float radius;

};


// ѩ�����������
extern particle* snow;
extern int snow_active_count;

// ѩ�йص�ȫ�ֺ���
void initSnow();
void crashSnow();
void updateSnow();
void render_snow();











#endif