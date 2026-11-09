#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
int main()
{
	int m,res;
	printf("enter a number to find factorial\n");
	scanf("%d",&m);
	res=factorial(m);
	printf("the factorial of %d is %d\n",m,res);
	return 0;
}
