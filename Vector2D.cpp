#include "Vector2D.h"
#include <iostream>
#include <cmath>

using namespace std;
Vector2D::Vector2D() {
    _x = 0;
    _y = 0;
}

Vector2D::Vector2D(float x, float y) : _x(x), _y(y) {}

Vector2D::~Vector2D() {}

void Vector2D::print() {
    cout << _x << " ";
    cout << _y << endl;
}

float Vector2D::length() {
    return sqrt( (_x*_x) + (_y*_y) );

}

Vector2D Vector2D::normalize() {
    Vector2D temp;
    temp = *this / this->length();
    return temp;
}

Vector2D Vector2D::operator+ (Vector2D vec) {
    Vector2D temp;
    temp._x = _x + vec._x;
    temp._y = _y + vec._y;

    return temp;
}

Vector2D Vector2D::operator- (Vector2D vec) {
    Vector2D temp;
    temp._x = _x - vec._x;
    temp._y = _y - vec._y;

    return temp;
}

Vector2D Vector2D::operator* (float n) {
    Vector2D temp;
    temp._x = _x * n;
    temp._y = _y * n;
    return temp;
}
Vector2D Vector2D::operator* (Vector2D vec) {
    Vector2D temp;
    temp._x = _x * vec._x;
    temp._y = _y * vec._y;
    return temp;
}

Vector2D Vector2D::operator/ (float n) {
    Vector2D temp;
    temp._x = _x * (1.f/n);
    temp._y = _y * (1.f/n);
    return temp;  
}

Vector2D Vector2D::operator/ (Vector2D vec) {
    Vector2D temp;
    temp._x = _x * (1.f/vec._x);
    temp._y = _y * (1.f/vec._y);
    return temp;
}

Vector2D Vector2D::operator++() { // prefix   
    _x++;
    _y++;
    return (*this);
}

Vector2D Vector2D::operator++( int ) { // postfix
    Vector2D ret = (*this);
    _x++;
    _y++;
    return ret;
}

ostream& operator<<(ostream &os, const Vector2D &obj) {
    os << '[' << obj._x << ','  << obj._y << ']';
    return os;
}
