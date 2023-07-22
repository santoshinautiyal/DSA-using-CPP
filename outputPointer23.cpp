#include <iostream>
using namespace std;
void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}
// passin the value from index 1 means from 2
// 1st output- 2
//2nd ----1