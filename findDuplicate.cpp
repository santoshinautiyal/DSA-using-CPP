#include <iostream>
using namespace std;
int duplicateNumber(int *arr, int size){
 int num=0;
        for(int i=0;i<size;i++)
      {  
          for (int j = 0; j < size; j++) {
            if (i == j)
              continue;
            if (arr[i] == arr[j])
              num = arr[i];
          }
          return num;
        }
}