#include<stdio.h>
int main(){
	int i,n,s,l,h,a[100],mid;
	printf("enter n values\n");
	scanf("%d",&n);

	l=0;
	h=n-1;
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
		printf("enter s value that should be found\n");
	scanf("%d",&s);
	while(l<=h){
		mid=(l+h)/2;
		if(s==a[mid]){
			printf("%d is found at %d position\n",s,mid+1);
			break;
		}
		else if(s>a[mid]){
			l=mid+1;}
			else(s<a[mid]);{
				h=mid - 1;
			}
				
			
		}
		if (l>h)
		printf("%d is not found\n");
		return 0;
	
	}

