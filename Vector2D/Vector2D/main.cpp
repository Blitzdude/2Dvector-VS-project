#define _USE_MATH_DEFINES // for C++
#include <iostream>
#include <vector>
#include <array>
#include "Vector2D.h"
#include <cmath>

using namespace std;

int main() {
   Vector2D vec1(5.0f, 5.0f);
   Vector2D vec2(0.0f, 0.0f);

   Vector2D vec3 = vec1 + vec2;
   Vector2D vec4 = vec1 - vec2;
   Vector2D vec5 = vec1 * 4.f;
   Vector2D vec6 = vec1 * vec2;
   Vector2D vec7 = vec1 / 7.f;
   Vector2D vec8 = vec1 / vec2;
   Vector2D vec9 = vec1.normalize();
   float vecLen = vec1.length();

   cout << "add: " << vec3 << endl;
   cout << "subtract: " << vec4 << endl;
   cout << "Scale" << vec5 << endl;
   cout << "Scale with vector: " << vec6 << endl;
   cout << "division: " << vec7 << endl;
   cout << "division with vector: " << vec8 << endl;
   cout << "normalized vector: " << vec9 << endl;
   cout << "length of vec2: " << vecLen << endl;

   cout << "\n\n";

   cout << vec1 << endl;
   vec1++;
   cout << vec1 << endl;
   ++vec1;
   cout << vec1 << endl;

   cout << "\n\n";

   vec2 = vec2.normalize();
   cout << "Normalized vector 2 " << vec2 << endl;
   float vecAngle = vec2.angle();

   cout << "Angle of the vector " <<  vecAngle << " Rads" << endl;
   cout << vecAngle * (180 / M_PI) << " Degrees" << endl; // rad to degrees.

   float userX, userY;
   cout << "give x and y cordinate" << endl;
   cin >> userX;
   cin >> userY;

   Vector2D userVec(userX, userY);
   Vector2D userTemp = userVec.normalize();
   float userLen = userTemp.length();
   float userAngle = userTemp.angle();
   

   cout << "vector length: " << userLen << " vector angle: " << userAngle * (180 / M_PI) << endl;
   

    
    return 0;
}
