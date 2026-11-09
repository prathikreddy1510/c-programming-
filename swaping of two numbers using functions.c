#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping 1st=%d and 2nd=%d\n",a,b);
}
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("beforer swaping %d and %d",x,y);
	return 0;
}
