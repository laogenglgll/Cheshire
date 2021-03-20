//a[6]起泡
#include<stdio.h>
int main()
{
    int a[6]={1,6,5,2,4,3},j,temp;
    for(int i=0;i<5;i++)
    for(j=i+1;j<6;j++)
        if(a[j]>a[i])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    for(int i=0;i<6;i++)
    printf("%d",a[i]);
    return 0;
}