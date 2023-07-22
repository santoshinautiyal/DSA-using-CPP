#include <iostream>
using namespace std;
int power(int x, int n) {
    if (n == 0) 
		return 1;
	 return x * power(x, n - 1);
}
int main(){
    int x,n=0;
    cin>>x>>n;
    cout<<power(x,n);
}



// power like x^n=3^4=81