#include<stdio.h>
char main()
{
    char num;
    printf("enter a character=");
    scanf("%c",&num);
    if (num<=90 && num>=65)
    {
         printf("CAPITAL LETTER");
    }
    else 
    if (num<=122 && num>=97)
        {
             printf("SMALL CASE LETTER");
         }
             else 
             if (num<=57 && num>=48)
             {
                 printf("A DIGIT");
             }
            else
                {
                    printf("A SPECIAL CHARACTER");
                 }
}