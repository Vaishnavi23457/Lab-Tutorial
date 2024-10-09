#include<stdio.h>
int main()
{
    int a[10], i, evennum=0,oddnum=0;
    printf("enter array number=");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            evennum=evennum+1;
        }
        else
        {
            oddnum=oddnum+1;
        }
        
    }    
        printf("\n total evennums=%d",evennum);
        printf("\n total oddnums=%d",oddnum);
            

}