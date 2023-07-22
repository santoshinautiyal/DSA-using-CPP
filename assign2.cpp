#include<iostream>
using namespace std;
int main(){
    int num,temp;
    cin>>num;
    int sum1=0,sum2=0;
    temp=num;
    while(temp!=0){
        int rem=temp%10;
        if(rem%2==0){
            sum1=sum1+rem;
        }
        if(rem%2!==0){
            sum2=sum2+rem;
        }
        temp=temp/10;
    } cout<<sum1<<sum2;
}
