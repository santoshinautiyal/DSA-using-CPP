#include <iostream>
using namespace std;
int main(){
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
}
// assume that 0th index is 200
//output==== xyz(because in char it doesnt print the index value)
