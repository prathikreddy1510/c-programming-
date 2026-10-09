#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("enter string\n");
	scanf("%s",st1);
	scanf("%s",st2);
	if (strcmp(st2,st1)==0){
	
	printf("both the strings are equal\n");}
	else{
	 (strcmp(st2,st1)!=0);
	
	printf("both the strings are not equal\n");}
	return 0;
	
}
