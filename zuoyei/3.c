//a[3][3]求其中最大的行列号
#include<stdio.h>
int main ()
{
    int a[3][3]={1,2,3,9,8,10,5,7,4};
    int h=0,l=0,max=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    if(a[i][j]>max)
    {
        max=a[i][j];
        h=i;
        l=j;
    }
    printf("%5d %5d",h,l);
    return 0;
}