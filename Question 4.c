/* Write a program in C to demonstrate how to handle the pointers in the program.   */

#include<stdio.h>

int mai()
{
    int a=10;
    int *p;

    p=&a;

    printf("%d %d %d %d",*p,&p,&a,*&a);

    return 0;
}
