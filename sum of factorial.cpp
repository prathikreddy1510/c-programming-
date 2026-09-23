#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if (n%i==0){
			sum=sum+i;
			
		}
}
printf("%d is sum of factorial of n",sum);
return 0;

	
}

