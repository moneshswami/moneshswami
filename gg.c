#include<stdio.h>
void main()
{
    int e;
    printf("enter the number by your choice:");
    scanf("%i",&e);
    if(e>=0 & e<10)
    printf("the number is single digit");
    if(e>=10 & e<100)
    printf("the number is two digit");
    if(e>=100 & e<1000)
    printf("the number is three digit");
    if(e>1000)
printf("the number is more than three digit");
}