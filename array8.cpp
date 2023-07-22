#include <iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{   int i = 0, j = 1;
    while (j < size)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;                                //********************swap alternate
        i += 2;
        j += 2;
    }  
      }
int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}