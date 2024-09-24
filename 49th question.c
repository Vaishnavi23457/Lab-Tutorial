#include<stdio.h>
int main(){

	int i,j,rows=5,k,d;
	for(i=1;i<=rows;i++)
		{
			int a=0;
			for(j=1;j<=i;+j++)
			{
			int d=a+65;
			char ch=(char)d;
			printf("%c",ch);
			a++;
		    }
        
		printf("\n");
	    }
}
