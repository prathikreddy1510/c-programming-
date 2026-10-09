#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("enter string\n");
	gets(st1);
	gets(st2);
	strcpy(st2,st1);
	printf("copied string is =%s",st2);
	return 0;
	
}
