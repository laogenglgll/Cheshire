//找到文件或创建文件并输入
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch,filename[10];
    printf("请输入所用文件名:");
    scanf("%s",filename);
    getchar();
    if((fp=fopen(filename,"w"))==NULL){printf("cannot open file\n");
    exit(0);}

    printf("请输入一个准备储存到磁盘文件的字符串（以#结束）：");
    ch=getchar();
    while(ch!='#')
    {
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
}