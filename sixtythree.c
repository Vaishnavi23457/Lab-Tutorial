#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,max,min;
	max=min=a[0][0];
	printf("matrix element=");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d \t", a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			if(max<=a[i][j])
			{
				max=a[i][j];
			}
			if(min>=a[i][j])
			{
				min=a[i][j];
			}
		}
	}
	printf("max=%d \n", max);
	printf("min=%d", min);
	return 0;
}
