#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n,temp,rem,sum=0;
	printf("%enter a number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+factorial(rem);
		n=n/10;
	}
	if (sum==temp)
	{
		printf("strong number\n");
	}
	else
	{
		printf("not a strong number");
	}
	return 0;
}
