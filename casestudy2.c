#include<stdio.h>
int main()
{
	int n,m,i,tem1,tem2,j,sum=0,avg;
	int arr[n],a[n],b[n],k[n];
	printf("enter your n value");
	scanf("%d",&n);
	printf("enter your m value");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		printf("enter your a[%d],b[%d],k[%d] value",i,i,i);
		scanf("%d%d%d",&a[i],&b[i],&k[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("a=%d\tb=%d\tc=%d\n",a[i],b[i],k[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<m;i++)
	{
		tem1=a[i];
		tem2=b[i];
		for(j=tem1-1;j<tem2;j++)	
		{
			arr[j]=arr[j]+k[i];
		}
	}
	for(i=0;i<n;i++)
	{
		 printf("arr[%d]=%d\t",i,arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];	 
	}
	 
		printf("avrage=%d",sum/n);
}         