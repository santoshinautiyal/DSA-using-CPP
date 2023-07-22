#include <iostream>
using namespace std;
int lastIndex(int input[], int size, int x) {
    if (size == 0) 
		return -1;
int ans=lastIndex(input+1,size-1,x);
       if (input[0] == x && ans == -1)
        return 0;
        if (ans == -1)
        return ans;

    return ans+1;
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
    cout<<firstIndex(input,n,x);
}