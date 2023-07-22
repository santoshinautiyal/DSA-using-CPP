#include <iostream>
using namespace std;

void func(int a) {
    int b = 10;
    a = b + 10;
    cout << a << " ";
}

int main() {
    int a = 10;
    func(a);
    cout << a << " ";
}

/*/
a=10
func(a)-----go to func 
b=10
a=10+10------   a=20
cout<< 20
cout<< 10

OUTPUT----- 20 10
/*/