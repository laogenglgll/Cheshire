//结构体数组与函数两参
#include<stdio.h>
struct person{
        char name[10];
        int num;
    }rs[3];
int main()
{
    for(int i=0;i<3;i++)
        scanf("%s%d",rs[i].name,&rs[i].num);

    struct person maxn(struct person ns[]);
    struct person temp;
    temp=maxn(rs);
    printf("  %d",temp.num);
    return 0;
}
struct person maxn(struct person ns[])
{
    struct person tem;
    for(int i=0;i<3-1;i++)
        for(int j=1;j<3;j++)
        if(ns[i].num<ns[j].num)
        {
            tem.num=ns[j].num;
        }
    return tem;
}