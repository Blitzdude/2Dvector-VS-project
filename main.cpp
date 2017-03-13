#include <iostream>
#include <vector>
#include <array>

#include "Vector2D.cpp"

using namespace std;

int main() {
   Vector2D vec2D1(20.f, 30.f);
   Vector2D vec2D2(20.f, 30.f);

   Vector2D vec2D3 = vec2D1 + vec2D2;
   vec2D3.print();
    
    return 0;
}
