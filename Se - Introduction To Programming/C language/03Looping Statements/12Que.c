// Program of Armstrong Number in C Using For Loop & While Loop
/*153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153   -----> 153 is an Armstrong number.
*/
#include <stdio.h>

int main()
{
  // Using while loop
  /*
  int n,x,sum=0,t;
  printf("Enter a number : ");
  scanf("%d",&n);

  x = n;   // x store , n value

  while (x != 0)   // 0 na ho tab tak
  {
    t = x % 10;  // t = 153 % 10 = 3 -- last digit -- one by one
    sum = sum + (t*t*t);  // sum = 0 : sum = sum + (t*t*t) : sum = 0 + (3*3*3) = 27
    x = x / 10;   // x = 153 / 10 = 15
  }

  if (n == sum)
  {
    printf("%d is Armstrong number",n);
  }
  else{
    printf("%d is not Armstrong number",n);
  }
  */

  // Using for loop
  int n, x, sum = 0, t;
  printf("Enter a number : ");
  scanf("%d", &n);

  x = n;

  for (sum = 0; x != 0; x /= 10)
  {
    t = x % 10;
    sum = sum + (t * t * t);
  }

  if (n == sum)
  {
    printf("%d is Armstrong number", n);
  }
  else
  {
    printf("%d is not Armstrong number", n);
  }
}
