#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;  
  cout<<z << " ";    //14   
}
void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";  // 7
}
int main()
{
  int x = 5;
  P(&x);
  cout<<x;  //6
  return 0;
}

//  14 7 6