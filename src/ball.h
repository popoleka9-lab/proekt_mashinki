#pragma once

class Ball
{
public:
    Ball();
    void Update();
    void Draw() const;
int x;
    int y;
private:
    
    int speedX;
    int speedY;
    int radius;
};