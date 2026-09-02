#include<stdio.h>
int main()
{
	int a,b,r;
	scanf("%d%d",&a,&b);
	r=a;
	a=b;
	b=r;
	printf("a=%d b=%d",a,b);
	return 0;
}
