#include<stdio.h>
int main()
{
	char name[16],s=0;
	int i;
	printf("enter the name\n");
	scanf("%s",name);
	for (i=0;name[i]!='\0';i++)
	s++;
	for(i=s-1;i>=0;i--)
	printf("%c",name[i]);
	return 0;
	
}

