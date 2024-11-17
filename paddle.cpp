#include "paddle.hpp"

Paddle::Paddle()
{
	position = { 50, float((GetScreenHeight() - 150) / 2) };
	speed = 7.0f;
}

void Paddle::Draw()
{
	DrawRectangleV(position, {15, 150}, WHITE);
}

void Paddle::MoveUp()
{
	position.y -= speed;
	if (position.y < 0)
	{
		position.y = 0;
	}
}

void Paddle::MoveDown()
{
	position.y += speed;
	if (position.y > GetScreenHeight() - 150)
	{
		position.y = GetScreenHeight() - 150;
	}
}

Rectangle Paddle::GetRect()
{
	return { position.x, position.y, 15, 150 };
}
