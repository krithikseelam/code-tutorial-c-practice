#include <stdio.h>

int numberPositiveNo(int a[],int n){
    int no_of_positive_no = 0;
    for (int i = 0; i < n; i++)
    {
      if(a[i] > 0){
        no_of_positive_no++;
      }      
    }
    return no_of_positive_no;
}

int main(){
    int arr[] = {34,67,-34,64,-9,-100};
    printf("%d is the no of +ve number in array",numberPositiveNo(arr,6));
    return 0;
}