#include <iostream>
using namespace std;
int main()
{                                  //y=15   then y=16    z=17
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << “ “ << z;
}