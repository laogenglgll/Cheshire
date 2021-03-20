#include<stdio.h>
#include<max.c>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a;
    a=max(n,m);
    printf("%d",a);
    return 0;

}