#include <iostream>
using namespace std;
int findUnique(int *arr, int size){
 int curr,num=0;
        for(int i=0;i<size;i++)
        {    curr=0;
         
                  for(int j=0;j<size;j++)
                    {
                      if(i==j)
                      continue;
                      if(arr[i]==arr[j])
                      {
                        curr=1;
                      break;
                      }
                    }
         
            if(curr==0){
                num= arr[i];
            }
        }

		return num;
}