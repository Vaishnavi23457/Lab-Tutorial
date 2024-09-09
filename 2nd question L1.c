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
    Per = (Tot*100)/500;
    printf("Per =%d",Per);
    return 0;
}