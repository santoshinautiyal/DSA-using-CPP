#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}
//*p=5
//arr start with 5
// arr is starting with 0
//4+9==13
//output=13