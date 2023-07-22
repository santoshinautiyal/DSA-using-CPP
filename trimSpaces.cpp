#include <iostream>
using namespace std;
/*/int length(char input[]) {
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++) {
		count++;
	}
	return count;
}/*/
void trimSpaces(char input[]) {
   // int len=length(input);
     int i=0, k=0;
    for(int i = 0; input[i] != '\0'; i++)
    if(input[i]!=' '){
        input[k++]=input[i];
 }
    input[k]='\0';
}

int main() {
	char input[100];
	cin.getline(input, 100);
	trimSpaces(input);
	cout << input << endl;
}