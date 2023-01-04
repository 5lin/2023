#include<stdio.h>         
void inv(int *x,int n)
{
	int *p,*i,*j,tmp,m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{
		tmp=*i;
		*i=*j;
		*j=tmp;
	}
}
int main()
{
	int i,a[10]={1,5,3,8,0,6,7,5,4,2};
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	inv(a,10);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
