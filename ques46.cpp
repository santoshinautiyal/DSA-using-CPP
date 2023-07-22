#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x <<" " << y;
}    // 10>10 false// 21>20
//inside if 11 21