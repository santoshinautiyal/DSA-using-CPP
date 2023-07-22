#include <iostream>
using namespace std;
int main(){
int i = 1;
while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}}

/*/ i=1
1<5
1  inc 2
2   inc 3
 infinite times loop circulate 
 output--------1 2
 /*/