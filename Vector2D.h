#pragma once

class Vector2D {
    public:
        float _x;
        float _y;
    public:
        Vector2D(float x, float y);
        Vector2D();
        ~Vector2D();
        void print();

        Vector2D operator+ (Vector2D vec);

};