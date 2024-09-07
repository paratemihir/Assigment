#include <stdio.h>

int main(){
	char a[5],b[5];
	
	printf("Enter String : ");
	scanf("%s",&a);
	
	strcpy(b,a);
	
	printf("\nString is : %s",b);
}
