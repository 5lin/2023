
#include <stdio.h> 
int main()
{
	//while解法，和for差不多 
	int i=100;
	int a,b,c;//a为个位数字，b为十位数字，c为百位数字 
	while(i>=100 && i<1000)
	{
		a=i%10;
		b=i/10%10;
		c=i/100;
 
  		if(i==a*a*a+b*b*b+c*c*c)
		{
	     	   printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
