#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        for(int j=2;j<=i;j++)
        {
            if(i!=1)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}