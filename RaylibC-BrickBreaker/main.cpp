#include <cstdlib>
#include <iostream>
#include <raylib.h>
//#include "Game.h"

int main(int argC, char* argV[])
{
	srand(time(0));

	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "Testing loading images from file");

	Image kite = LoadImage("Resources/testing.png");
	//Image secondKite = LoadImage("Resources/kite.png");
	
	Texture2D kiteTexture = LoadTextureFromImage(kite);
	UnloadImage(kite);

	//UnloadImage(kite);
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawTexture(kiteTexture, 200, 30, WHITE);
		
		//DrawTexture(kiteTexture, screenWidth / 2 - kiteTexture.width / 2, screenHeight / 2 - kiteTexture.height / 2, WHITE);
		DrawText("words", 40, -300, 10, BLACK);
		DrawFPS(40, 160);
		EndDrawing();
	}

	//Game* game = new Game{ 1080, 720, "Brick Breaker", WHITE };

	//int result = game->Run();

//	delete game;

	//UnloadTexture(kiteTexture);

	CloseWindow();

	return 0;
}