#include "opponent.hpp"

Opponent::Opponent()
{
	Position = { float(GetScreenWidth() - 50), float(GetScreenHeight() - 150) / 2 };
	Speed = 7.25f;
}

void Opponent::Draw()
{
	DrawRectangleV(Position, { 15, 150 }, WHITE);
}

void Opponent::Update(Vector2 position)
{
	if (Position.y + 15 / 2 < position.y)
	{
		if (Position.y + 150 < GetScreenHeight())
		{
			Position.y += Speed;
		}
	}
	else if (Position.y + 15 / 2 > position.y)
	{
		if (Position.y > 0)
		{
			Position.y -= Speed;
		}
	}
}

Rectangle Opponent::GetRect()
{
	return { Position.x, Position.y, 15, 150 };
}

