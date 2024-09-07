#include <stdio.h>
main (){
	char a[5],b[5];
	
	printf("\nEnter String : ");
	scanf("%s",&a);
	
	printf("\nEnter String : ");
	scanf("%s",&b);
	
	int result = strcmp(a,b);
	printf("\nResult is :%d",result);
}
