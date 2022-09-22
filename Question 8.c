/* Write a program to compute the sum of all elements in an array using pointers.   */

#include<stdio.h>

int main()
{
    int a[5],i,*p,sum=0;

    p=a;

    for(i=0;i<=4;i++)
    {
        printf("\n Enter a value->");
        scanf("%d",&a[i]);
    }

    for(i=0;i<=4;i++)
    {
        sum+=*(p+i);
    }

    printf("\n sum=%d",sum);

    return 0;

}
