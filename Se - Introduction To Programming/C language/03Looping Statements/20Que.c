/*WAP program to print below output using for loop
01  02  03  04  05  06  07  08  09  10
11  12  13  14  15  16  17  18  19  20
*/

#include <stdio.h>

int main()
{
  int num = 1;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      printf("%02d ", num);  // print number 2 digit
      num++;    // increment number
    }
    printf("\n");  // new line
  }  
}