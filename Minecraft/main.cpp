#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Minecraft");

    Camera3D camera = { 0 };
    camera.position = { 0, 10, 10 };
    camera.target = { 0, 0, 0 };
    camera.up = { 0, 1, 0 };
    camera.fovy = 45;
    camera.projection = CAMERA_PERSPECTIVE;

    Vector3 cubePosition = { 0, 0, 0 };

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);

            BeginMode3D(camera);
                DrawCube(cubePosition, 1, 1, 1, RED);

                DrawGrid(10, 1);
            EndMode3D();

            DrawFPS(5, 5);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}