// Write a program to find out the max number from given array using function

#include <stdio.h>

void max(int arr[],int n);

int main(){
  int arr[] = {100,500,300};
  max(arr,3);
}

void max(int arr[],int n){
  if (arr[0] > arr[1] && arr[0] > arr[2])
  {
    printf("%d",arr[0]);
  }
  else if (arr[1] > arr[0] && arr[1] > arr[2])
  {
    printf("%d",arr[1]);
  }
  else{
    printf("%d",arr[2]);
  }
  
  
}