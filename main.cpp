#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    vector<char> myvec = { 'H','e','l','l','o'};
    cout << "Hello world!" << endl;
    for_each(myvec.begin(),myvec.end(),[](char c){cout << c << " ";});
   
    cout << *ptr << endl;
    
    return 0;
}
