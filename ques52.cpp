#include <iostream>
using namespace std;
void fib(int n){
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int num;
    cin>>n;
    cout<<fib(n);
    return 0;
}
