#ifndef KEYBOARDH
#define KEYBOARDH

#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <string>
#include <math.h>
#include "glhead.h"
#include "ui.h"
#include "map.h"
#include "plants.h"
#include "particle.h"

extern UI_set* UI;

extern float angle_plane;
extern float angle_updown;
extern float ratio;
extern float x, y, z;
extern float lx, ly, lz;
extern int select_x;
extern int select_z;
extern int plant_x;
extern int plant_z;

extern bool click_left;
extern bool click_right;


void turn_left();
void turn_right();
void walk_ahead();
void walk_back();
void walk_left();
void walk_right();
void select_this_land();

void flush_view(float ang_p, float ang_u);
void move_ab(float i);
void move_ud(float i);
void move_lr(float i);
void onlight();
void offlight();
void allsnowland();
void allgrassland();
void changeParticleRender();

void initNormalKeys(unsigned char key, int x, int y);
void initSpecialKeys(int key, int x, int y);
void initKeyBord();

#endif