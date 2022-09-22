/* Write a function to swap strings of two char arrays of calling functions. (TSRS) */

#include<stdio.h>

void swap(char **x,char **y)
{
   char *temp;
   temp=*x;
   *x=*y;
   *y=temp;
}

int main()
{
    char *a[20],*b[20];

    printf("\n Enter 2 strings->");
    gets(a);
    gets(b);

    swap(&a,&b);

    printf("%s %s",a,b);

    return 0;
}
