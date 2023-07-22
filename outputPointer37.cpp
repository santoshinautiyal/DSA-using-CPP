#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;  //i=8
  p = &i;  
  (*p)++; //i=9
  q = &p;//q=9
  (**q)++;//q=10
  r = &q;//10
  cout<<*p << " " <<**q << " "<<***r;// 10 10 10
  return 0;
}


//10 10 10