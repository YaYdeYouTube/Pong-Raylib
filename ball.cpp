#include "ball.hpp"

Ball::Ball()
{
	position = { float(GetScreenWidth() / 2), float(GetScreenHeight() / 2) };
	speed = { 8.0f, 8.0f };
}

void Ball::Draw()
{
	DrawCircleV(position, 10, WHITE);
}

void Ball::Update()
{
	position.x += speed.x;
	position.y += speed.y;
	if (position.y + 10 < 0)
	{
		speed.y *= -1;
	}
	else if (position.y + 10 > GetScreenHeight())
	{
		speed.y *= -1;
	}
}