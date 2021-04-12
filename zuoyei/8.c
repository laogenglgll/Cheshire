#include<stdio.h>
int kongge,zm,sz,ts;
int main()
{
    void geshu (char a[]);
    char a[10];
    gets(a);
    geshu(a);
    printf("%d",kongge);
    printf("%d",zm);
    printf("%d",sz);
    printf("%d",ts);
    return 0;
}

void geshu(char a[])
{
    int i = 0;
    for(int i =0;i<10;i++)
    {
        if(a[i]==32) kongge+=1;
        else if(a[i]>47&&a[i]<57) sz+=1;
        else if(a[i]>57&&a[i]<122) zm+=1;
        else ts+=1;
    }
}