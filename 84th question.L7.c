#include<stdio.h>
char bookinfo(){
char name [20], author [20], publishers [50], price [10];
printf("ENTER THE NAME OF BOOK:\n");
gets(name);
printf("ENTER THE NAME OF AUTHOR: \n");
gets(author);
printf("ENTER THE NAME OF PUBLISHERS: \n");
gets(publishers);
printf("ENTER THE PRICE OF THE BOOK:\n");
 gets(price);
printf("\"%s\"\n", name);
printf("By %s \n", author);
printf("published by %s \n", publishers);
 printf("Price:%s\\-\n",price);
 }
 int main()
{
 bookinfo();
}