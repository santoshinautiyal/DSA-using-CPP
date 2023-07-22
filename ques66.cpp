#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    bool f1 =true;
    int dir=0;
    for(int i=1;i<n;i++){
        int curr;
        cin>>curr;
        if(curr-prev==0){
            f1=false;
            break;
        }
        if(curr-prev>0 && dir==0){
            dir=1;
        }
        if(curr-prev<0 && dir==1){
            f1=false;
            break;
        }
        if(curr-prev<0){
            dir=0;
        }
        prev=curr;
    } cout<<f1;
    
}

