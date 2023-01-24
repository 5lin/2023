#include<stdio.h>
int main(){
	int a[4][5] ={1,2,3,4,5}; //看看会不会乱码 
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
