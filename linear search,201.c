#include<stdio.h>
int main(){
	int a[100],flag,s,i,n;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element to search\n");
	scanf("%d",&s);
	for (i=0;i<n;i++){
	
	if(s==a[i]){
		flag==1;
		printf("%d is found at %d position \n",s,i+1);
		return 0;
	
		 
	}
}
	
	
}



