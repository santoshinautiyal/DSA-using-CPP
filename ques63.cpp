#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int dec = 0;
    int base = 1;
    int temp = n;
        while (temp > 0) 
        {
            int last = temp % 10;
            temp = temp / 10;
            dec += last * base;
            base = base * 2;
        }
        cout<<dec;

}
//101
    //1*2^2+0*2^1+1*2^0
    /*/
    tmep=n----1011
    1011>0
    last=1011%10---1
    temp=1011---11
    dec=dec+last*base----0+1*1----dec 1
    base---1*2--2
    print-----1
    11>0
    11%10----1 last
    1 temp
    dec=1+1*2----3

    /*/