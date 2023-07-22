#include <iostream>
using namespace std;
bool checkNumber(int input[], int n, int x) {
    if (n == 0) 
		return false;
        if (input[0] == x)
        return true;
       return checkNumber(input+1,n-1,x);

}
int main(){
    int n;
    cin>>n;
    int *input = new int[n];
    int x;
    cin>>x;

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout<<checkNumber(input,n,x);
}