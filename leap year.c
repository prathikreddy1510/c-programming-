#include<stdio.h>
int main()
{
	int year;
	printf("enter year value\n");
	scanf("%d",&year);
	if ((year % 400 ==0) || (year % 4 == 0) && (year % 100 !=0)){
		printf("the year is leap year \n");
	}
	else {
	
	printf("not a leap year \n");}
	return 0;
}
