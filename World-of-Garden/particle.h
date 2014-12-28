#ifndef PARTICLEH
#define PARTICLEH

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "glhead.h"
#include "map.h"


class Particle {
public:
	Particle();
	~Particle();
	void init();
	void activate();
	void update();
	void render();

	// ״̬
	bool active;

private:
	void crash_terrain();

	
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
extern Particle* snow;
extern int snow_active_count;
extern int snow_active_speed;
extern float wind_x_accelerate;
extern float wind_z_accelerate;
extern float particle_x_reverse;
extern float particle_z_reverse;
extern int snow_active_speed;

// ѩ�йص�ȫ�ֺ���
void initSnow();
void crashSnow();
void updateSnow();
void render_snow();











#endif