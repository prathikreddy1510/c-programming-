#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d;
	printf("enter values of (x1,y1)\n");
	scanf("%f%f",&x1,&y1);
	printf("enter values of (x2,y2)\n");
	scanf("%f%f",&x2,&y2);
	d=sqrt(pow(x1-x2,2)+pow(y1-y1,2) );
	printf("distance between the coordintes=%f\n",d);
	return 0;
	
	
}
