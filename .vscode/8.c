#include<stdio.h>
int main ()
{
    int i=9,*p;
    p=&i;
    int hs4(int *p,int x);
    hs4(p,8);
    printf("%d",*p);
    return 0;
}
int hs4(int *p,int x)
{
    printf("%d\n",x);
    printf("%d",*p);
    return 0;
}