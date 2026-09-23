#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("enter n value\n");
	scanf("%d",&n);
	while (n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	printf("%d is reverse no of n\n",rev);
	return 0;
	
}
