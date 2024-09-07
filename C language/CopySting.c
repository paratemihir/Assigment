#include <stdio.h>

main(){
	int i;
	char a[5],b[5];
	
	printf("enter String : ");
	gets(a);
	
	printf("\nOriginal String : %s",a);
	
	for(i = 0;a[i] != '\0'; i++){
		b[i] = a[i];
	}
	b[i]='\0';
	printf("\nString Copy is: %s",b);
}
