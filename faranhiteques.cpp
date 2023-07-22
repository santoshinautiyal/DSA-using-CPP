#include <iostream>
using namespace std;
void printTable(int S, int E, int W){
    int celcius;
    while(S<E){                                //WITH FUNCTION
        celcius=((5*(S-32))/9);
        cout<<S<<" "<<celcius<<endl;
        S=S+W;
}
}                             

/*/int main(){
    int S,E,W;
    cin>>S>>E>>W;
    int celcius;                           //WITHOUT FUNCTION
    while(S<E){
        celcius=((5*(S-32))/9);
        cout<<S<<" "<<celcius<<endl;
        S=S+W;
    }
}/*/