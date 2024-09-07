#include <stdio.h>

main(){
	FILE * fp;
//	fp =fopen("test1.txt", "w");    //Write - w
//	fp =fopen("test1.txt", "a");	//append - a
//	fprintf(fp,"\nHelloo this is append method");
	
	
//	read method
	fp =fopen("test1.txt", "r");	//read - r
	char a[100];
	int i;
	while(fgets(a,100,fp)!=NULL){
		printf("%s",a);
	}
	fgets(a,100,fp);
	printf("%s",a);
	fclose(fp);
}
