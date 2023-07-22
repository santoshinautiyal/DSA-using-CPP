#include <iostream>
using namespace std;
int main(){
int i = 1;
while(i < 3) {
    int j = 0;
    while(j < 5) {
        j++;
        if(j == 3) {                 
            continue;
        }
        cout << j << " ";
    }
    i++;
}
}
/*/ i=1
    1<3
    j=0
    0<5
    inc j++  j=1
    print 1
    j++ 2   print 2
    check 2 then j++ j=3 not printing continue
    check 3 then inc j++ j=4 print 4
    then 4 then inc j++ j=5 print 5
    after that out of loop bcause 5<5 isnt true

    now i++ i =2
    same 1 2 4 5 printing
     output-----    1 2 4 5 1 2 4 5n
/*/