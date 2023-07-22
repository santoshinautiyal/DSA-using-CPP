#include <iostream>
using namespace std;

int main(){
int i = 1;
while(i < 5) {
    if(i == 3) {
        break;
    }
    cout << i << " ";
    i++;
}}  /*/ i=1 
1<5
1  then inc 2
2<5 
2  then inc 3
then break 
output----- 1,2                        /*/