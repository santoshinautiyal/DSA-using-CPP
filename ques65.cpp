#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int squareroot=0;
    for(int i=0;i<n;i++){
    if((i*i)>n){
      squareroot=i-1;
      break;                        //************SQUAREROOT*********
       }
       }
       cout<<squareroot;
}