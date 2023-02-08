#include<stdio.h>
int main(){
	int a=1,b=1,c=0,num=2,fbo;
	printf("需要的斐波那契数：");	//1,1,2,3,5,8,13
	scanf("%d",&fbo);
	if(fbo==1||fbo==2){
		fbo=1;
	}
	else{
		while(num<fbo)
		{
			c=a+b;   
			a=b;
			b=c;
			num++;
		}
	}
	printf("fbo=%d\n",c);
	
}

