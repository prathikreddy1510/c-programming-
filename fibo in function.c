#include<stdio.h>
void fibonacci(int n){
	int a=0,b=1,c,i;
	for(i=0;i<n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	}
	int main()
	{
		int n;
		printf("enter the number of terms\n");
		scanf("%d",&n);
		fibonacci(n);
		
		return 0;
		
	}
		
	
	
	                                  
	

