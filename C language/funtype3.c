  #include <stdio.h>

  int add(a, b) // parameter
  {
    printf("%d", a);
    printf("\n%d", b);
    // printf("\nAddition : %d", a + b);
    return a + b;
  }

  int main(){
    int result = add(10,20);
    printf("\n%d",result);

  }
