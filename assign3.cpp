
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int p=1;
    for(int i=1;i<=x;i++){
        p=p*n;
    }
    cout<<p;
}