/*WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/

#include <stdio.h>

int main(){
    int num[5];
    // user inputed 5 numbers
    printf("Enter 5 numbers : \n");
    for (int i = 0; i < 5; i++)
    {
      scanf("%d",&num[i]);
    }

    // Print reverse order 
    // 0 1 2 3 4 
    // 4 3 2 1 0
    printf("reverse order : ");
    for (int i = 4; i >= 0; i--)
    {
      printf("%d",num[i]);
    }
    
    
}