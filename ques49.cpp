#include <iostream>
using namespace std;
int main(){
for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
 } 
}
/*/ 
i=0 
j=0
if(j==1) no then print j=0 
j++ means j=1
but go to 1st for loop
i=2
j=0
if(j==1)   no 
print j=0 
j++ meansa j=1 
now i=3 but 3<2  false ....terminate                /*/