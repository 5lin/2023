#include<stdio.h>
int main()
{
	int a[3]= {1,1,0};				// 1,1,2,3,5,8,13
	int target=0,result=0,num=2;

	printf("请输入想获取的斐波那契数:");
	scanf("%d",&target);
	if(target==1||target == 2){
		result=1;
	}else{	
		while(num < target){
			a[2] = a[1] + a[0];
			a[0] = a[1];
			a[1] = a[2];
			num++;
		} 
		result = a[2];
	}
	printf("%d",result);
	return 0;
}

