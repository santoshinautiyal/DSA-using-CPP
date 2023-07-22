#include <iostream>
using namespace std;
int main(){
int i = 1;
while(i < 3) {
    int j = 1;
    while(j < 5) {
        if(j == 3) {
            break;
        }
        cout << j << " ";
        j++;
    }
    i++;
}}
/*/ i=1
    1<3
    j=1
    1<5
    print j= 1 inc 2
    print j=2  inc 3
    i++ i=2
    j=1 
    print 1  inc 2
    print 2 inc 3
    output 1 2 1 2
/*/