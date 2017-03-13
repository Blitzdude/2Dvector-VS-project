#pragma once

#include <iostream>

using namespace std;
class Vector2D {
    public:
        float _x;
        float _y;
    public:
		Vector2D();
        Vector2D(float x, float y);
  
        ~Vector2D();
        void print();
        float length();
        Vector2D normalize();

        Vector2D operator+ (Vector2D vec);
        Vector2D operator- (Vector2D vec);
        Vector2D operator* (float n);
        Vector2D operator* (Vector2D vec);
        Vector2D operator/ (float n);
        Vector2D operator/ (Vector2D vec);

        Vector2D operator++(); // prefix ++Vector2D
        Vector2D operator++(int); // postfix, Vector2D++, int not used;

        friend ostream& operator<<(ostream &os, const Vector2D &obj);
};
