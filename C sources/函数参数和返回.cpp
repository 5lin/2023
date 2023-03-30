#include<stdio.h>
int cal(int,int);
 //↑函数原型中需要写上需要的参数类型，多个参数用逗号隔开，比如这里我们需要的就是两个int类型的参数
int main(){
	cal(10,5);
	return 0;
}
 
//cal方法 

//需要形参进行承接 
int cal(int a,int b){
	printf("此时a的值为%d\tb的值为%d\t\n",a,b);
	printf("此时a*b的值为%d",a*b);
}
