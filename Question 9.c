/* Write a program to print the elements of an array in reverse order.  */

#include<stdio.h>

int main()
{
    int a[5],i,*p;

    p=a;

    for(i=0;i<=4;i++)
    {
        printf("\n enter a value->");
        scanf("%d",p+i);
    }

    printf("\n \n");

    for(i=4;i>=0;i--)
    {
        printf("\n %d",*(p+i));
    }

    return 0;
}
