/* Write a program to print a string in reverse using a pointer */

#include<stdio.h>

int main()
{
   int length;
   int i,size=0;
   char a[20],*ptr;

   printf("\n enter string->");

   gets(a);

   ptr=a;

   for(i=0;a[i]!='\0';i++)
   {
       size=i;
   }

   for(i=size;i>=0;i--)
   {
       printf("%c",*(ptr+i));
   }

   return 0;
}
