#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]) {
    for (int i = 0; i < strlen(input); i++){
        for (int j = i; j < strlen(input); j++){
            for (int k = i; k <= j; k++){
                cout << input[k];
            }
            cout << endl;
        }
    }
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
/*/  cons
i=0 & j=i====j=0
k=0
c
i=1
co
/*/