#include <iostream>
using namespace std;
int main(){
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
}
//a=10
//10     21
//*p=&a     &a=200
//**q=&p         
//b=20     &b=300
//*q=&b               q point 20
//*p  ++
//a=10    b=21