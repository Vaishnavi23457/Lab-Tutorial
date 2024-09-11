#include<stdio.h>
int main()
 {
   int i,n,a=0;
   printf(" enter n:");
   scanf("%d",&n);
   if(n==1)
   printf("1 is neither prime nor composite number \n");
   else 
   {
     for(i=1;i<=n;i++)
     {
       if(n%i==0)
        a++;
     }
      if(a==2)
      printf("%d is  prime number \n",n);
      else 
      printf(" %d is composite number \n",n);
   }
   return 0;
 }