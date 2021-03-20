#include<stdio.h>

int  main()
{
	int maxn(int x,int y);
	int min (int x,int y);
	int funn(int x,int y,int (*p)(int ,int ));
	int addx(int x,int y);
	int a=12,b=83,n;
	scanf("%d",&n);
	if(n==1) funn (a,b,maxn);
	else if(n==2) funn (a,b,min);
	else funn(a,b,addx);
	return 0;
}
int maxn(int x,int y)
{	int z;
	if(x<y) z=y;
	else z=x;
	printf("max=");
	return (z);
}
int funn(int x,int y,int(*p)(int ,int ))
{
	int c;
	c=(*p)(x,y);
	printf("%d",c);
	return 0;

}
int min (int x,int y)
{
	int z;
	if(x>y) z=y;
	else z=x;
	printf("min=");
	return (z);
}
int addx(int x,int y)
{
	int z;
	z=x+y;
	printf("add=");
	return (z);
}
//github测试