#include <stdio.h>

//without 'strcat' using concat string

main (){
	char a[5],b[5],c[5];
	int i,j;
	
	printf("\nEnter String 1 : ");
	gets(a);
	
	printf("\nEnter String 2 :  ");
	gets(b);
	
	for(i = 0;a[i] != '\0'; i++){
		c[i] = a[i];
	}
	
	for(j = 0;b[j] != '\0'; j++){
		c[i] = b[j];
		i++;
	}
	c[i]='\0';
	
	printf("\nString is : %s",c);
}
