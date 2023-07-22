#include <iostream>
using namespace std;
int main(){
for(int i = 0; i < 5; i = i + 1){
    cout << i << " ";
    i = i + 1;
}
}    
/*/print 0
i++  1 , i++ 2   print 2
i++  3, i++ 4    print 4
i++  5   terminate   output---- 0  2  4  /*/