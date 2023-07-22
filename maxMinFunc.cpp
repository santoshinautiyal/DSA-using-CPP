#include<iostream>
using namespace std;
int maxnum(int A, int B, int C){
 int max = A;
 if (B > max){
  max = B;
}
 if(C > max){
    max = C;
}
return max;
}
int minnum(int A, int B, int C){
    int min = A;
    if (B < min) {
        min = B;
    }
     if(C< min) {
        min = C;
    }   return min;
}
   int main(){
   int a, b, c;
  // cin>>a>>b>>c;
   cout<<maxnum(4,6,7)<<endl;
   cout<<minnum(4,6,7)<<endl;

return 0 ;
}