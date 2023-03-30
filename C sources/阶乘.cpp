#include <stdio.h>
int main()
{
   int cal(int N); 
   int N;int i,s=0;
   printf("输入N(N>3)，将自动计算出1!+2!+3!+...+N!的值:");
   scanf("%d",&N);  
   for(i=1;i<=N;i++)
   	 s=s+cal(i);
   printf("1!+2!+3!+...+%d!=%d",N,s);
   return 0;
 } 
 
 int cal(int N) 
 {
     int f;
     if(N<0)     
       printf("N<0,数据错误!N必须为正整数!");
     else 
    	if(N==0 || N==1)
            f=1;
        else  
         	f=cal(N-1)*N; 
      return(f);
 }
