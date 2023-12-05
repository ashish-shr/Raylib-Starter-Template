#include <raylib.h>

const int screenWidth = 800;
const int screenHeight = 600;

int main()
{
  InitWindow(screenWidth, screenHeight, "Raylib");

  // game loop
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(WHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}