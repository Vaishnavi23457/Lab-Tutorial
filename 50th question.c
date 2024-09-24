#include<stdio.h>
int main(){

	int i,j,rows=5,k;
	for(i=0;i<rows;i++)
		{
			 
			for(j=0;j<rows-1;j++)
			{
			printf(" ");
		    }
		    for(k=1;k<5;k++)
		    {
		    	printf("%d",k);
				k++;
			}
        
		printf("\n");
	    }
}
