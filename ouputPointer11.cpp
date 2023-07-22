#include <iostream>
using namespace std;
int main(){
int a[5];
int *c;
cout << sizeof(a) << " " << sizeof(c);
}

// output---  20        4  
// if size of pointer already given that is 8 then we have ------20 8