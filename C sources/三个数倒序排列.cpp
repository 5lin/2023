#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个数字\n");
	scanf("%d,%d,%d",&a,&b,&c);
	max=a;
	if(max<b){
		max=b;
		b=a;
		a=max;
	}
	if(max<c){
		max=c;
		c=a;
		a=max;
	}
	if(b<c){
		max=c;
		c=b;
		b=max;
	}
	printf("此时按顺序排列应当为%d,%d,%d\n",a,b,c); //a>b>c
}

