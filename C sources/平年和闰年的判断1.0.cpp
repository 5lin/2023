#include<stdio.h>
int main()
{
	int years;
	while(true){
	printf("please input a year：");
	scanf("%d",&years);
	if(years%400==0||years%100==0||years%4==0)
	printf("此年是润年\n");
	else
	printf("此年不是润年\n");
	char Y,N,next;
	printf("\n是否继续判断？（Y/N)：");
	fflush(stdin);
	scanf("%c",&next);
	if(next=='Y'||next=='y')
	printf("\n继续判断\n");
	if(next=='N'||next=='n')
	return 0;
}
}
