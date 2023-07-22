#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int x;
    int num=1,count=0;
    while(count<n){
        x=3*num+2;
        if(x%4!=0){
            cout<<x<<" ";
            count++;
        }num++;
    }
}
/*/import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
		// Write your code here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,res;
        int no=1,count=0;;
        while(count<n)
        {
            res=3*no+2;
            if(res%4!=0)
            {
                System.out.print(res+" ");
                count++;
            }
        no++;
        }
	}
}/*/
