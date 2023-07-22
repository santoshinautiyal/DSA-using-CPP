#include <iostream>
using namespace std;
void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}

//a =10
//call then go to function      
//passing the address so array is pointing same location, so change can be occur in same array
//output---      -10