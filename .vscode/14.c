//结构构体
#include<stdio.h>
int main()
{
    struct student{
        int num;
        char name [20];
        int cj;
    };
    struct student st_1,st_2;
    scanf("%d%s%d",&st_1.num,st_1.name ,&st_1.cj);//非数组不能用for  st_[i]输入
    scanf("%d%s%d",&st_2.num,st_2.name ,&st_2.cj);
    int n;
    if(st_1.cj>st_2.cj) printf("%d    %d",st_1.num,st_1.cj);
    else 
    printf("%d   %d",st_2.num,st_2.cj);
    return 0;
}
