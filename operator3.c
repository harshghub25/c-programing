#include<stdio.h>
void main()
{
   int a=10;
   int b=20;
   int c=30;
   int d=40;
   int e=50;
   int f;
   int g;
   e=(a==b && c<=b);
   
   printf("its value is :%d",e);
  
   f=( b==a || a==b);
   {
   printf("\n value is :%d",f);
   } 
    g=!(a<b);
   {
      printf ("\n value is :%d",g);
} 
}