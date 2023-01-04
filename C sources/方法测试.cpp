#include<stdio.h>
double cal(int num1,int num2,char oper){
double res=0.0;
switch(oper){
case'+':
res=num1+num2;
break;
case'-':
res=num1-num2;
break;
case'*':
res=num1*num2;
break;
case'/':
res=num1/num2;
break;
default:
printf("ÔËËã·û´íÎó");	
}
printf("%d%c%d=%2f\n",num1,oper,num2);
return res;
} 

int main(){
int num1=10;
int num2=20;
double res=0.0;
char oper='-';
printf("²âÊÔ´ğ°¸\n");

res =cal(num1,num2,oper);
	
}
