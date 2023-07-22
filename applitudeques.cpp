
#include <iostream>
using namespace std;
int main(){
    int q;
    float total;
    cout<<"enter the quantity:"<<endl;
    cin>>q;
    if(q*100>1000){
        total=((q*100)-(.1*q*100));  // u can also write this 10*(q*100)/100 instead of (.1*q*100)
        }
    else{
        total=q*100;  
        }
    cout<<total;
}

/*/ so q is the quantity....and according to the ques quantity is q*100
total is a variable for storing the values
lets enter the quantity...we r taking input from user as a quantity ....right
if  the quantity*100 is more than 1000
then the value of total=(q*100)-(10% of quantity of 100)...
then we just printing the total value form here 

else
but if quantity*100 is not more than 1000 then just print total=quantity*100
/*/