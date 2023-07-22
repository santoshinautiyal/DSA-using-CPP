
#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cin >> n;
for(i = 1; i <= n; i++)
{
for(s = i; s < n; s++)
{
cout << " ";
}
for(j = 1; j <= (2 * i - 1); j++)
{
cout << "*";
}
// ending line after each row
cout << "\n";
}
}