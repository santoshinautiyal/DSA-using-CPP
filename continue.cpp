#include<iostream>
using namespace std;
int main()
{
    int i=1;                       //by while loop
    while(i<10){
        if(i==7){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }


for(int j=1;j<10;j++){          //by for loop
    if(j==7){
        continue;
    }
    cout<<j<<endl;
}
}