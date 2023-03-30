#include<stdio.h>
int main(){
	int a=10;
	int b= ++a;  //  ++a等价于  a=a+1 
	printf("此时的b是%d\n",b);
	int c=50;
	int d=c++;	//	和写在前面的区别是，它是先返回当前变量的结果，再进行自增的，顺序是完全相反的.
	printf("此时的D是%d\n",d);
	printf("此时的C是%d\n",c);
	
//	总结：++在前，那么先自增再出结果；，++在后，那么先出结果再自增。 
} 
