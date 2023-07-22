#include <iostream>
using namespace std;
int sum(int input[], int n) {
     if (n == 0) 
		return 0;
        if (n == 1) 
		return input[0];

 return sum(input+1,n-1)+input[0] ;
}
int main(){
    int n,input[100];
    cin>>n>>input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout<<sum(input,n);

}
