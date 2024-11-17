#pragma once
#include "raylib.h"

class Paddle
{
public:
	Paddle();
	void Draw();
	void MoveUp();
	void MoveDown();
	Rectangle GetRect();
private:
	Vector2 position;
	float speed;
};