#include<stdio.h>
#define M 3
int main()
{
    int max(int x,int y);
    void print_xx();
    char print_s();
    void print_jj();
    int a[M],i;
    int c=a[0];
    for(i=0;i<M;i++)
    scanf("%d",&a[i]);
    for(i=1;i<M;i++)
    c=max(c,a[i]);
    printf("%d\n",c);
    if(c%2==0)
    print_xx();
    else
    {
        print_jj();
    }
    print_s();
    return 0;
}
int max(int x,int y)
{
    int z;
    if(x<y)
    z=y;
    return (z);
}
void print_xx()
{
    int i;
    for(i=0;i<M;i++)
    printf("***\n");
}
void print_jj()
{
     int i;
    for(i=0;i<M;i++)
    printf("###\n");
}
char print_s()
{
    printf("sahdjashdqwryuzbcxnbq");
    return 0;
}