#include<stdio.h>

main(){
	int n;
	printf("Eneter num : ");
	scanf("%d",&n);
	
//	(n%2==0)?printf("%d is Even",n):printf("%d is odd",n);
(n==0)?printf("%d is Zero",n):(n%2==0)?printf("%d is Even",n):printf("%d is odd",n);
	
}
