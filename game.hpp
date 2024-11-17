#pragma once
#include "raylib.h"
#include "paddle.hpp"
#include "ball.hpp"
#include "opponent.hpp"

class Game
{
public:
	Game();
	void Draw();
	void Update();
	void CheckForCollision();
	int playerScore;
	int opponentScore;
private:
	void HandleInput();
	void CheckForAddingScore();
	Paddle paddle;
	Ball ball;
	Opponent opponent;
};