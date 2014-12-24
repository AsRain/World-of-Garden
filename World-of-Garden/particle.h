#ifndef PARTICLEH
#define PARTICLEH

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
#include <GL/GLAUX.H>
#include "map.h"


class Particle {
public:
	Particle();
	~Particle();
	void init();
	void activate();
	void update();
	void render();

	// 状态
	bool active;

private:
	void crash_terrain();

	
	// 位置
	float pos_x;
	float pos_y;
	float pos_z;
	// 速度
	float speed_x;
	float speed_y;
	float speed_z;
	// 加速度
	float accelerate_x;
	float accelerate_y;
	float accelerate_z;
	// 颜色
	float color_r;
	float color_g;
	float color_b;
	// 大小
	float radius;

};


// 雪粒子数组对象
extern Particle* snow;
extern int snow_active_count;

// 雪有关的全局函数
void initSnow();
void crashSnow();
void updateSnow();
void render_snow();











#endif