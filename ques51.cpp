#include <iostream>
using namespace std;
int main(){
    int n,n1=0,n2=1, fib;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i<=1)
        fib=i;
        else{
            fib=n1+n2;
            n1=n2;
            n2=fib;
            cout<<fib;
        }
    }
}
//printing fabonacci series