#include<stdio.h>
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,0,11,23};
    int * hs6(int x,int(* p)[4]);
    int *p;
    int x;
    scanf("%d",&x);
    p=hs6(x,a);
    for(int i=0;i<4;i++)
        printf("%d",*p++);
    return 0;
}
int * hs6(int x,int(*p)[4])
{
    int *p1;
    p1=*(p+x);
    return (p1);
}