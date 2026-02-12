#include <cstdlib>
#include <iostream>

#include <raylib.h>

int main(int argC, char* argV[])
{
	InitWindow(1080, 720, "BrickBreaker");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground((RAYWHITE));

		DrawCircle(540, 200, 93.2f, GREEN);
		DrawRectangle(110, 35, 12, 41, ORANGE);
		
		EndDrawing();
	}
	
	CloseWindow();
	
	return EXIT_SUCCESS;
}