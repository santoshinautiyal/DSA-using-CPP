#include<iostream>
using namespace std ;
double geometricSum(int k) {
    if(k==0){
        return 1;
    }

    int smalloutput=geometricSum(k-1);
    return smalloutput+1/(power(2,k));
 
}
int main()
{  int k;
cin>>k;
cout<<geometricSum(k);
}

//ans=a+1/2k