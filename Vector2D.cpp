#include "Vector2D.h"
#include <iostream>

using namespace std;
Vector2D::Vector2D() {
    _x = 0;
    _y = 0;
}

Vector2D::Vector2D(float x, float y) : _x(x), _y(y) {}

Vector2D::~Vector2D() {}

void Vector2D::print() {
    cout << _x << endl;
    cout << _y << endl;
}

Vector2D Vector2D::operator+ (Vector2D vec) {
    Vector2D temp;
    temp._x = _x + vec._x;
    temp._y = _y + vec._y;

    return temp;
}

