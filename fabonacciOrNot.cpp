#include <iostream>
using namespace std;
bool checkmember(int n){
int a=0,b=1;
if(n==0){
    return true;
}
while((a+b)<=n)
        {int temp=a+b;
         a=b;
         b=temp;
         if(n==temp )
         {return true;
         }
        }
        return false;
}
/*/
a=0,b=0
so if n==0
just return true ...cause its function bool type so it return true of false(0&1)

if a+b<=n  let n=5...a+b=0+1==1
temp=1
now a=1,b=temp means b=1

/*/