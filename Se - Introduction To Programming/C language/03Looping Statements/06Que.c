// WAP to print Fibonacci series up to given numbers

/*
Fibonacci series = 0,1,1,2,3,5,8,13,21.....
Logic
a      b     c
-1  +  1  =  0
1   +  0  =  1
0   +  1  =  1
*/

#include <stdio.h>

int main(){
    int r,a,b,c;
    printf("enter range : ");
    scanf("%d",&r);

    a = -1;
    b = 1;
    
    printf("Fibonacci series : ");
    for (int i = 0; i < r; i++)
    {
      c = a + b;
      printf("%d,",c);
      a = b;
      b = c;
    }
    
}

