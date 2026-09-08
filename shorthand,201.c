#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x and y values\n");
	scanf("%d%d",&x,&y);
	printf("%d+=%d\n",x,y,x+=y);
	printf("%d-=%d\n",x,y,x-=y);
	printf("%d*=%d\n",x,y,x*=y);
	printf("%d%%=%d\n",x,y,x%=y);
	printf("%d/=%d\n",x,y,x/=y);
	return 0;
	
}
