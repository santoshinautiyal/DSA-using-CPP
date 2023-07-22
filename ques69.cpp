#include <iostream>
using namespace std;
void func(int a) {
    int b = a;
    b = b + 10;
}

int main() {
    int a = 10;
    func(a);
    cout << b << endl;
}

/*/
OUTPUT------
a=10
func(a)----go to func
int b=a;
10+10=20-----
then cou<<b----but cant print because b is not in scope of main func
/*/