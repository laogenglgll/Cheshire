#include<stdio.h>
#include<stdlib.h>
int main()
{ int a;
    for(int i =0;i<10;i++)
    {a = rand()%10+8;
    printf("%-8d",a);}
    return 0;
}