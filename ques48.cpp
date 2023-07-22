 #include <iostream>
using namespace std;
int main(){
for(int i = 1; i < 5; i = i + 1){
    cout << i << " ";
    i = i - 1;
}
}
/*/   i=1 
      1<5 true
      print 1 then i++ =2
      i--=1
      then i=1..... always printing 1 it means output is infinite times 1  /*/