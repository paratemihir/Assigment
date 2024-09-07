#include <stdio.h>

struct myStructure{
	int a,b;
}s1;

main(){
	printf("enter num1 : ");
	scanf("%d",&s1.a);
	
	printf("enter num2 : ");
	scanf("%d",&s1.b);
	
	printf("%d",s1.a);
	printf("%d",s1.b);
	
}



/*
#include <stdio.h>

union my_Struct{
	int a,b;
}s1,s2;

main(){
	printf("enter a num1 : ");
	scanf("%d",&s1.a);
	
	printf("enter a num2 : ");
	scanf("%d",&s2.b);
	
	printf("%d",s1.a);
	printf("%d",s2.b);
}
*/
