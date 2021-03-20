#include<stdio.h>
int main ()
{
    int a[3][4]={1,2,3,4,5,6,7,8,0,9,23,11};
    int (*p)[4]=a,*p1=*a,n;
    scanf("%d",&n);

    printf("%d,%d",*p1,*((*(p+n))+1));
    return 0;
}