
#include<iostream>
using namespace std;
int main(){
    double basic;
    char grade;
    double hra=basic*20/100;
    double da=basic*50/100;
    int allow=0;
    if(grade=='A')
    allow=1700;
     else if(grade=='B')
        allow=1500;
     else if(grade>='C'&& grade<='Z')
        allow=1300;
    double pf=basic*11/100;
    double Salary=(double)basic+hra+da+allow-pf;
    double totalSalary=Salary-(int)Salary;
    if(totalSalary<0.5)
cout<<(int)Salary;
else
cout<<(int)Salary+1;
}    
