#include<stdio.h>
int main()
{
    int a[4],n;
    int *p;
    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);
    p=a;
    sort(a,0,4);
    for(int i=0;i<4;i++)
    printf("%d",a[i]);
    return 0;

}
int sort(int *p,int n,int x)
{
    if ((x-n)<=1)
    return 0;
    int moddle,head=n,load=x-1,mod;
    moddle = x/2;
    mod=*(p+moddle);

    while (head<load)
    {
        for(;head<load;head++)
        {
            if(*(p+head)>mod) {*(p+moddle) = *(p+head),moddle = head;break; }
        }
        for(;load>head;load--)
        {
            if(*(p+load)<mod) {*(p+moddle) = *(p+load),moddle = load;break;}
        }
    }
    printf("%d",*p);
    sort(p,0,moddle);
    sort(p,moddle+1,4);
    return 0;
}