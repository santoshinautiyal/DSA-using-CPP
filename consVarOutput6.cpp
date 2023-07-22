#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
    //q++;
    //(*q)++;   gives error
    //p++;     gives error
}