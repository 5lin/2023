#include<stdio.h>
int main()
{
	int a,b,c,temp;
	printf("请输入三个数字\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) //b>a
	{
	temp=a;
	a=b;
	b=temp;
	}
	if(b>c) //c>b
	{
	temp=b;
	b=c;
	c=temp;
	}
	if(a>c) //c>a
	{
	temp=a;
	a=c;
	c=temp;
	}
	printf("此时按顺序排列应当为%d,%d,%d\n",a,b,c); //a>b>c
}
