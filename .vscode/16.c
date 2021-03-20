//使用结构体数组
#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name [20];
        int num;
    }leader[3]={"a",0,"l",0,"s",0};
        char leader_name[20];
        for(int i=0;i<10;i++){
            scanf("%s",&leader_name);
        for(int j=0;j<3;j++)
            if(strcmp(leader[j].name,leader_name)==0) leader[j].num++;
        }
        printf("Result\n");
        for(int j=0;j<3;j++)
            printf(":%s  %d\n",leader[j].name,leader[j].num);
        printf("\n");
        return 0;
}