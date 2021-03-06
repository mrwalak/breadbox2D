#ifndef QUAD_H
#define QUAD_H

#include <iostream>
#include "VidElement.h"
#include "Renderer.h"
using namespace std;

class Quad : public VidElement{
	// Status data
	VEC2 pos;
	VEC2 size;
	VEC2 anchor;
	float rot;
	float opacity;
	float active; // 0 = inactive, non-zero = active

	// Animation data
	Anim_v2 posAnim;
	Anim_v2 sizeAnim;
	Anim_v2 anchorAnim;
	Anim_f rotAnim;
	Anim_f opacityAnim;
	Anim_f activeAnim;

	// Fill and stroke
	Fill fill;

	// Color
	VEC3 color;

public:
	Quad(Anim_v2 posAnim_in, Anim_v2 sizeAnim_in, Anim_v2 anchorAnim_in, Anim_f rotAnim_in, Anim_f opacityAnim_in, Anim_f activeAnim_in, Fill fill_in);
	bool isVisible(float x, float y, float t);
	VEC3 getColor(float x, float y, float t);
};

#endif