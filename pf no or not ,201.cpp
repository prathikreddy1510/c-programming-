#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for (i=1;i<n;i++)
		if (n%i==0){
			sum=sum+i;
		}
		if (sum==n){
			printf("%d is a perfect no\n",n);
		}
		else {
			printf("%d is not perfect no\n",n);
		}

	return 0;
}
