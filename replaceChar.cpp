int length(char input[])
{   int i = 0;
    while (input[i] != '\0')
        i++;
    return i;
}
void replaceCharacter(char input[], char c1, char c2) {
  for(int i=0; input[i] != '\0';i++)
    while(input[i]==c1){
        c1=c2;

    }
}