#include<stdio.h>
int main(){
//此为解法1	
//分别从三个位上的数字入手， 如果这三个数的立方和等于这个三个数的组合，则说明这个组合数就是水仙花数。
//水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。
int a,b,c,water;	//分别以a,b,c为个十百位，water表示水仙花数。 
for(c=1;c<=9;c++)
{
	for(b=0;b<=9;b++)
	{
	for(a=0;a<=9;a++)
	{
	water=c*100+b*10+a;
	if(a*a*a+b*b*b+c*c*c==water)
	{
	printf("水仙花数有%d\n",water);
	}
	}
	}
}
return 0;
}
