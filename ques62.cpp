#include<bits/stdc++.h>
using namespace std;
int main(){
int d, number,temp, revnum = 0;
cin>>number;
temp=number;
while (temp >0) 
        {
            d = temp %10;
            revnum = (revnum*10)+d;
            temp = temp/10;
        }
        cout<<revnum;
}

/*/
number-576
temp-576
temp(576)>0 if ture
   d=temp%10=====576%10==6
   d=6
   revnum=0*10 + 6--------6
   temp=576/10======57
   then revnum---6
/*/