#pragma once
#include "raylib.h"

class Ball
{
public:
	Ball();
	void Draw();
	void Update();
	Vector2 position;
	Vector2 speed;
};