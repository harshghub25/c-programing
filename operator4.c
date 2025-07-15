#include<stdio.h>
void main()
{
    int a=10; int b=20; int c;
    a=a+10;
    printf("value of a :%d",a);
    b+=10;
    printf("\n value of b :%d",b);
    a-=5;
    printf("\n new value of a :%d",a);
    b*=10;
    printf ("\n new value of b : %d",b);
    a/=3;
    printf("\n the newest value of a: %d",a);
    b%=18;
    printf("\n the newest value of b: %d",b);    
}