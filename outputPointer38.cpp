#include<iostream>
using namespace std;
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;   //5
    z = **ppz;    //5
    *py += 2;   //6
    y = *py;     //6
    x += 3;  //
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
