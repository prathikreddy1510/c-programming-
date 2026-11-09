#include<stdio.h>
int reverse(int n)
{
	int rev=0,rem;
	while(n>0){
		rem = n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	printf("enter the number to reverse\n");
	scanf("%d",&n);
	reverse(n);
	printf("%d is reverse value of %d",n,reverse(n));
	return 0;
}

