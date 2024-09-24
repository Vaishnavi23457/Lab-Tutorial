#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter the elements of the matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("value of the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
		print("\n");
	}
	printf("\n Transpose of the matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[j][i];
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

