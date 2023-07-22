#include <iostream>
using namespace std;
int main(){
int a = 50;
 int *ptr = &a;
 cout << (*ptr)++ ;
 cout << a << endl;
}


//a=50    50   51