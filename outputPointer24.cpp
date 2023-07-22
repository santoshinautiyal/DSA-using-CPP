#include <iostream>
using namespace std;
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}
//a=10
// call with address it means changes can be occur in same array
//ahere is also a=10, *p=10*10=100
// but when we wrote here p=&a   its means we broke the connection btw main func and square func
// so the answer is 10
