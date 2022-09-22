/* Write a program to find the maximum number between two numbers using a pointer   */

#include<stdio.h>

int main()
{
    int a,b,*p=&a,*q=&b;

    printf("\n Enter a value->");
    scanf("%d",p);

    printf("\n Enter a Value->");
    scanf("%d",q);

    if(*p > *q)
    {
        printf("\n %d is a maximum number",*p);
    }
    else
    {
        printf("\n %d is a maximum number",*q);
    }


}
