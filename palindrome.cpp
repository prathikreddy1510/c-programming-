#include<stdio.h>
int main()
{
	int n,rev=0,rem,palindrome;
	printf("enter n value\n");
	scanf("%d",&n);
	palindrome=n;
	while(n>0){
	
	rem = n%10;
	rev=rev*10+rem;
	n=n/10;}
	if ( palindrome==rev)
		printf("%d is palindrome\n",palindrome);
		
	
	else 
	printf("%d is not palindrome\n",palindrome);
	return 0;

}
	

