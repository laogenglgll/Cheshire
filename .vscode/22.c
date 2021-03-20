#include <stdio.h> //网上找的
struct Date//定义一个时间结构体
{
	int year,month,day;
};
struct Student//定义一个学生结构体
{
	char name[50];
	int num;
	char sex;
	Date birth;
};
//输入：录入学生信息
void input(Student s[],int n);
//输出：在显示台输出存储在数组中的学生信息
void output(Student s[],int n);
//按学号排序：便于在文件中顺序存放
void sort(Student s[],int n);
//新建文件：创建存储数据的文件
void createFile(FILE *fp);
//存储：将录入的学生信息存入文件中
void save(Student s[],int n,FILE *fp);
//读取文件数据：读取文件中的数据在显示台输出
const int N=2;
int main()
{
	FILE *fp;
        Student str[N];
	printf("学生信息录入：姓名 学号 性别（女 w 男 n） 生日（年 月 日）\n");
        input(str,N);
	sort(str,N);
	printf("\n按学号顺序输出学生信息：\n");
	output(str,N);
	printf("\n新建用于存储学生信息的文件\n");
	createFile(fp);
	save(str,N,fp);
	return 0;
}
void input(Student s[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("请输入第%d个学生的信息\n",i+1);
		scanf("%s %d %c %d %d %d",&s[i].name,&s[i].num,&s[i].sex,&s[i].birth.year,&s[i].birth.month,&s[i].birth.day);
	}
 
}
void output(Student s[],int n)
{
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d %s %2c %d-%d-%d\n",s[i].num,s[i].name,s[i].sex,s[i].birth.year,s[i].birth.month,s[i].birth.day);
	}
}
void sort(Student s[],int n)
{
	Student tmp;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(s[j].num<s[j-1].num)
			{
				tmp=s[j]; s[j]=s[j-1]; s[j-1]=tmp;
			}
		}
	}
}
void createFile(FILE *fp)
{
	fp=fopen("sText.txt","w");
	if(!fp)
	{
		printf("file open faile!");
		exit(0);
	}
	fprintf(fp,"%s      %s      %s      %s\n","姓名","学号","性别","生日");
	fclose(fp);
	printf("File created successfully!\n");
}
void save(Student s[],int n,FILE *fp)
{
	fp=fopen("sText.txt","a");
	if(!fp)
	{
		printf("file open faile!");
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"%s         %d         %c        %d-%d-%d\n",s[i].name,s[i].num,s[i].sex,s[i].birth.year,s[i].birth.month,s[i].birth.day);
	}
	fclose(fp);
	printf("data save successful!\n");
}