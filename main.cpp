#include "raylib.h"
#include "game.hpp"

int screenWidth = 1200;
int screenHeight = 650;

int main()
{
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);

    Font font = LoadFont("Font/monogram.ttf");
    Game game;

    while (!WindowShouldClose())
    {
        game.Update();

        BeginDrawing();

        ClearBackground(BLACK);
        DrawLine(GetScreenWidth()/2, 0, GetScreenWidth()/2, GetScreenHeight(), WHITE);
        DrawTextEx(font, TextFormat("%d", game.playerScore), {float(GetScreenWidth() / 2 - 200), 20}, 75, 2, WHITE);
        DrawTextEx(font, TextFormat("%d", game.opponentScore), { float(GetScreenWidth() / 2 + 200), 20 }, 75, 2, WHITE);

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
}
