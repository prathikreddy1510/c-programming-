#include<stdio.h>
#include<string.h>
int main()
{
	
	char st1[10],st2[10];
	printf("enter string to make it reverse\n");
	scanf("%s",st1);
	st2=strrev(st1);


	printf("the reverse string is  = %s\n",st2);
	return 0;
	
}
