#include<string.h>
#include<stdio.h>
int main()
{
	char st[10];
	printf("enter string\n");
	scanf("%s",st);
	strlwr(st);
	printf("the letters translated to lower case is %s\n",st);
	return 0;
	
}
