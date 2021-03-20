#include<stdio.h>
struct{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int clas;
        char position[0];

    }cate;
}person[2];
int main()
{
    int i; 
    for(i=0;i<2;i++)
    {
    scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
    if(person[i].job=='s') scanf("%d",&person[i].cate);
    else if (person[i].job=='t') scanf("%s",&person[i].cate);
    else printf("你他爹的赶快重新打");
    }
    printf("\n");
    printf("No name     sex job class/psoistion\n");
    for(i=0;i<2;i++)
    {
        if (person[i].job=='s') printf("%6d%7s%4c%4c%7d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].cate.clas);
        else printf("%6d%7s%4c%4c%7d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].cate.position);
    }
    return 0;
}