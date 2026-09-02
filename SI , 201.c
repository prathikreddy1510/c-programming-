#include<stdio.h>
int main()
{
	float SI,PA,RI,TIME;
	printf("enter the value of PA,RI,TIME\n");
	scanf("%f%f%f",&PA,&RI,&TIME);
	SI=0.1*(PA+RI+TIME);
	printf("SI=%f\n",SI);
	return 0;
}
