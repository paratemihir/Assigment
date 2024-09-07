#include <stdio.h>

main(){
	char n;
	
	printf("Enter Character : ");
	scanf("%c",&n);
	
	switch(n){
		case 'a':
			printf("%c is vowel",n);
			break;
		case 'e':
			printf("%c is vowel",n);
			break;
		case 'i':
			printf("%c is vowel",n);
			break;
		case 'o':
			printf("%c is vowel",n);
			break;
		case 'u':
			printf("%c is vowel",n);
			break;
		default:
			printf("%c is not a vowel",n);
	}
}
