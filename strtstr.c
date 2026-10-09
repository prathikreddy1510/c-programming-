#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("enter the string\n");
	scanf("%s",st1);
	scanf("%s",st2);
	if (strstr(st1,st2)!=NULL){
		printf("substring  found\n");}
	else
	printf("substring not found\n");
	
	
	return 0;
	
}
