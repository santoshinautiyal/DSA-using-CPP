#include <iostream>
using namespace std;
int main(){
for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           continue;
    cout << i << " ";
 } 
}

/*/ 
output---
i=0
0<5 true 
if(0==2) false 
print i =0
i++ i=1                  output--------  0 1  3 4
1<5 true 
1==2 false 
print 1   
i++ i=2
2<5   yes
2==2 (true then not printing i=2 and continue the for loop)
i++ i=3
3<5 yes
3==2
print i=3
i++ i=4
4<5  yes
4==2  no
print i=4  

/*/