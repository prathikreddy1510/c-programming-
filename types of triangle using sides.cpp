#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b==c){
		printf("the triangle is equilateral\n"); }
	else if (a=b!=c){
		printf("the triangle is isosceles\n");
	}	
	else if (a!=b!=c){
		printf("the triangle is scalene\n");
		
	}
	return 0;

		
		
	
}
