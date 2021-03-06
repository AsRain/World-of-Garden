#ifndef SNOWPLANTH
#define SNOWPLANTH

#include <vector>
#include "plants.h"
#include "map.h"
#include "particle.h"
#include "glhead.h"

#define SNOWPLANT_COLLAPSE_MAX 10
#define SNOWPLANT_COLLAPSE_ACTION 60

using std::vector;

enum SnowPlantType{XTREE};


class Snow_plant {
public:
	Snow_plant(int _x, int _z, SnowPlantType _type, float _size);
	void render();

	int pos_x;  // center_x: 4*pos_x + 2
	int pos_z;	// center_z: 4*pos_z + 2
	float size;
	SnowPlantType type;
	vector<void*> particle_set_1;	// ��һ���ѩ
	vector<void*> particle_set_2;
	vector<void*> particle_set_3;
	bool action_1;
	bool action_2;
	bool action_3;
	int action_count_1;
	int action_count_2;
	int action_count_3;

	void collapse_snow_plant_level_1();
	void collapse_snow_plant_level_2();
	void collapse_snow_plant_level_3();

private:

};

void initSnowplant();
void render_snow_plant();
void collapse_snow_plant();


extern vector<Snow_plant> snow_plant;


#endif