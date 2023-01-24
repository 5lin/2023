#include<stdio.h>
int main()
{
int i,j,k,high;
printf("请输入高度：");
scanf("%d",&high);
for(i=1;i<=high;i++)	//由i控制高度high 
{
for(j=1;j<=high-i;j++) //j控制每层的空格数量 
{
printf(" ");
 } 
for(k=1;k<=2*i-1;k++)  //将2*i改成2*high有不同效果    其在2*high时有菱形效果 
{
printf("*"); 
}
printf("\n"); 
}
return 0;
}
