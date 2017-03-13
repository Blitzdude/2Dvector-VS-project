#include <iostream>
#include <vector>
#include <array>

#include "Vector2D.h"

using namespace std;

int main() {
   Vector2D vec1(10.f, 10.f);
   Vector2D vec2(10.f, 20.f);

   Vector2D vec3 = vec1 + vec2;
   Vector2D vec4 = vec1 - vec2;
   Vector2D vec5 = vec1 * 4.f;
   Vector2D vec6 = vec1 * vec2;
   Vector2D vec7 = vec1 / 7.f;
   Vector2D vec8 = vec1 / vec2;
   Vector2D vec9 = vec1.normalize();
   float vecLen = vec1.length();

   cout << vec3 << endl;
   cout << vec4 << endl;
   cout << vec5 << endl;
   cout << vec6 << endl;
   cout << vec7 << endl;
   cout << vec8 << endl;
   cout << vec9 << endl;
   cout << vecLen << endl;

   cout << vec1 << endl;
   vec1++;
   cout << vec1 << endl;
   ++vec1;
   cout << vec1 << endl;
    
    return 0;
}
