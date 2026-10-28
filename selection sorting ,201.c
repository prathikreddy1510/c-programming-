#include<stdio.h>
int main(){


	int a[100],i,j,n,temp,min;
	printf("enter no of array values\n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
		for(i=0;i<n-1;i++){
		
			min = i;
			for(j=i+1;j<n;j++){
				if(a[j]<a[min])
					min = j;}
					
			
				if(i!=min){
					temp = a[i];
					a[i]=a[min];
					a[min]=temp;
				}
				
			}
		
		printf("the sorted array\n");
		for (i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
		return 0;
	}
