#include<stdio.h>
int main ()
{

    int hs2(int *x,int y);
    int a[10],i,n,*p=a;
    for(i=0;i<10;i++)
        scanf("%d",p++);
        p=a;
    hs2(p,10);
    return 0;
}
 int hs2(int *x,int y)
{
    int z=*x;
    int i;
    for(i=0;i<y;i++)
    {
        if(*x>z)
            z=*x;
            x++;
    }
    printf("%d",z);

return 0;
}