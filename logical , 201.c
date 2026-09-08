#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three no to perform logical operator\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("(%d>%d)&&(%d>%d)=%d\n",a,b,a,c,(a>b)&&(a>c));
	printf("(%d>%d)||(%d>%d)=%d\n",a,b,a,c,(a>b)||(a>c));
	printf("!(%d>%d)=%d\n",a,b,!(a>b));
	return 0;
	
}
