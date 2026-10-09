#include<stdio.h>
#include<string.h>
int main()
{
	char st[10];
	printf("enter string\n");
	gets(st);
	strupr(st);
	printf("the letters converted in upper case is %s\n",st);
	return 0;
}
