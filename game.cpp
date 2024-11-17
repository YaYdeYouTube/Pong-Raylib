#include "game.hpp"

Game::Game()
{
	playerScore = 0;
	opponentScore = 0;
}

void Game::Draw()
{
	paddle.Draw();
	ball.Draw();
	opponent.Draw();
}

void Game::Update()
{
	ball.Update();
	opponent.Update(ball.position);

	HandleInput();
	CheckForCollision();
	CheckForAddingScore();
}

void Game::CheckForCollision()
{
	if (CheckCollisionCircleRec(ball.position, 10, paddle.GetRect()))
	{
		ball.speed.x *= -1;
	}
	else if (CheckCollisionCircleRec(ball.position, 10, opponent.GetRect()))
	{
		ball.speed.x *= -1;
	}
}

void Game::HandleInput()
{
	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
	{
		paddle.MoveUp();
	}
	else if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
	{
		paddle.MoveDown();
	}
}

void Game::CheckForAddingScore()
{
	if (ball.position.x < 0)
	{
		ball.position = { float(GetScreenWidth() / 2), float(GetScreenHeight() / 2) };
		opponentScore += 1;
	}
	else if (ball.position.x + 10 > GetScreenWidth())
	{
		ball.position = { float(GetScreenWidth() / 2), float(GetScreenHeight() / 2) };
		playerScore += 1;
	}
}
