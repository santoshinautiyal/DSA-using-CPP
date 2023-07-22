#include <iostream>
using namespace std;
void reverse(char input[], int start, int end)
{
    while (start < end)
    {
        char temp = input[start];
        input[start++] = input[end];
        input[end--] = temp;
    }
}

void reverseStringWordWise(char input[]) {
    int i=0,j=0;
   { for( i = 0; input[i] != '\0'; i++)
    {if(input[i]=' ')
    reverse(input,j,i-1)
    j=i+1;
    }
    i++;}
    reverse(input, j, i - 1);
}