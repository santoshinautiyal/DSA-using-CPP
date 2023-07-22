#include <iostream>
using namespace std;
int main(){
    int marks = 75;

    if(marks>=50){     
       if(marks>=80) cout<<"Grade: A";
       else{ 
          if(marks>=60) cout<<"Grade: B";
          else cout<<"Grade: C";   
       }
     }
     else cout<<"Grade: F";
}