#include<bits/stdc++.h>
using namespace std;
int main()
{    
    char ch;
    ch = cin.get();
    int digits = 0, spaces = 0, characters = 0;
    while(ch != '$') 
{ 
    if(ch >= 'a' && ch <= 'z') {
    characters++; 
}
    else if(ch >= '0' && ch <= '9') {
    digits++; }
    else if(ch == ' ' || ch == '\t' || ch == '\n') {
    spaces++;}
    ch = cin.get();
} 
cout << characters << " " << digits << " " << spaces;

}

