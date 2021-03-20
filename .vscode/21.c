//引用文件输出其中的
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[10],ch;
    scanf("%s",filename);
    if(fp=fopen(filename,"r+")==NULL){
    printf("查无此文件");
    exit(0);}  //无此文件关闭程序
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    return 0;
}