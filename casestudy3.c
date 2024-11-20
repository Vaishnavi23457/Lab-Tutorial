#include<stdio.h>
int main(){
	int n,j;
	printf("enter no of testcases");
	scanf("%d",&n);
	
	int num;
	for(j=0;j<n;j++)
	{
		printf("enter the no ");
		scanf("%d",&num);
	}
	
	

	int count=0;
	while(num>0){
	int digit =num%10;
	if(digit!=0 && num%digit==0)
	{
		count++;
	}
	num/=10;
	}

	printf("%d\n",count);
	
}