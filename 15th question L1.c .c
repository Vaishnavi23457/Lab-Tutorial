#include<stdio.h>
int main()
{
    int Eng,Math,Hin,Phy,Chem,Tot, Per;
    printf("Eng =");
    scanf("%d",&Eng);
    printf("Math =");
    scanf("%d",&Math);
    printf("Hin =");
    scanf("%d",&Hin);
    printf("Phy =");
    scanf("%d",&Phy);
    printf("Chem =");
    scanf("%d",&Chem);
    Tot = Eng+Math+Hin+Phy+Chem;
    printf("Tot =%d",Tot);
    if (Tot>=450)
    printf("\n A division");
    else if (Tot<=450 && Tot>=350)
    printf("\n B division");
    else if (Tot<=350 && Tot>=250)
    printf("\n C division");
    else 
    printf("\n D division");
}