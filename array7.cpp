#include <iostream>
using namespace std;
void arrange(int *arr, int n)
{ int start = 0, end = n - 1, val = 1;
    for (int i = 1; i <= n; i++)
    {       if (i % 2 != 0)
        {   arr[start] = val;
            start++;
            val++;
        }                                               //*******************arrange
        else
        {   arr[end] = val;
            end--;
            val++;  }
    }
}
int main()
{
    int n, arr[100];
    cin >> n;
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
