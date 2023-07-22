#include <iostream>
using namespace std;
int count(int n){
    
    if (n == 0) 
		return 0;
        int small=count(n/10);
        return small+1;

}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
}


//input --- 143
// output---3 ***************count the digits