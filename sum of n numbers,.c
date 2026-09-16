#include<stdio.h>
int main()
{
	int a,r;
	printf("enter a value\n");
	scanf("%d",&a);
	r=(a*(a+1))/2;
	printf("sum of numbers from 1 to %d=%d",a,r);
	return 0;
}
