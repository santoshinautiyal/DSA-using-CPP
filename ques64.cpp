#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    long place=1,answer=0;
    int remainder;
    while(n!=0){
        remainder=n%2;
        answer= answer+(remainder*place);
        place=place*10;
        n=n/2;
    }
    cout<<answer;
}


/*/
public static void main(String[] args) {
		 Scanner sc= new Scanner(System.in);
        int decimal=sc.nextInt();
         int num;
       long place=1,sum=0;
     while(decimal!=0)
        {  num=decimal%2;
            //sum*=10;
            sum=sum+(num*place);
            place*=10;
            decimal/=2;}
    System.out.println(sum);    
		}
/*/