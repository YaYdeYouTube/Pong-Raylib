#pragma once
#include "raylib.h"

class Opponent
{
public:
	Opponent();
	void Draw();
	void Update(Vector2 position);
	Rectangle GetRect();
private:
	Vector2 Position;
	float Speed;
};
