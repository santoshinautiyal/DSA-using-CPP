#include <iostream>
using namespace std; 
int main(){
    int c,n;
    cin>>n;
    cin>>c;
    if(c==1){
        int sum=0;
        for(int i=1;i<=n;i++)
            {
                sum=sum+i;
            } 
            cout<<sum;
    }
    else if(c==2){
        int mul=1;
        for(int i=1;i<=n;i++){
            mul=mul*i;            
        } cout<<mul;
    } 
    else{
        cout<<"-1";
    }
}
/*/ 10
1
1........10 sum
/*/