#include <iostream>
using namespace std;
int main(){
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
}
//h  h
//because we are printing array at THE 0TH INDEX