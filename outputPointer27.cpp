#include <iostream>
using namespace std;
int main()
{  int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
}

//a=100
// b=**q  ++
//*r=101
//*r ++ ==102
//a=102    b=100