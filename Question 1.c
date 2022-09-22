/* Write a function to swap values of two in variables of calling function. (TSRS)  */

#include<stdio.h>

void  swap(int *,int *);

int main()
{
    int a,b;

    printf("\n Enter value of a->");
    scanf("%d",&a);

    printf("\n Enter value of b->");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\n a=%d \n b=%d",a,b);

    return 0;
}

void  swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
