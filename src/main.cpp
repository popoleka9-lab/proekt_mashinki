#include <raylib.h>
#include "ball.h"

int main() 
{
    const Color darkGreen = {200, 10, 133, 255};
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    Texture2D arbuzuki = LoadTexture("assets/arbuzuki.png");
    
    Ball ball;
    
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        ball.Update();
        
        BeginDrawing();
            ClearBackground(darkGreen);
            ball.Draw();
            DrawTexture(arbuzuki,ball.x -60,ball.y - 60,WHITE);
        EndDrawing();
    }
    
    CloseWindow();
}