#include <iostream>
using namespace std;
int main(){
  char ch;
  cin>>ch;
  if(ch>='A'&& ch<='Z'){
    cout<<1<<endl;
}
else if(ch>='a' && c<='z'){
  cout<<0<<endl;
}
else{
  cout<<-1<<endl;
}
}