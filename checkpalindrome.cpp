#include <iostream>
#include <cstring>
using namespace std;
int length(char str[])
{   int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
//Time: - O(n) Space: - O(1)
bool checkPalindrome(char str[])
{
    int i = 0, j = length(str) - 1;
    while (i < j)
 {  if (str[i++] != str[j--])
    return false;  }
    return true;
}
int main()
{   int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}