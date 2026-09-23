#include<stdio.h>
int main()
{
	int i,n,c;
	c=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if (n%i==0){
			c++;
			
		}
		if(c==2){
			printf("%d is a prime number\n");
		}
		else {
		
		printf("%d is not prime number\n");}
	}
	return 0;
}
