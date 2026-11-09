#include<stdio.h>
void prime(int n)
{
	int i,c=0;
	for(i=1;i<n;i++)
	{ 
		if(n%i==0)
		{
		    c++;
	    }
	}
    if(c==2)
    {
	   	printf("%d is a prime number",n);
	}else{
		printf("%d is not a prime number",n);
	}
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
    prime(n);
	return 0;
}
