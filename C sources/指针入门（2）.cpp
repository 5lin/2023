#include <stdio.h>

int main(){
    int a = 666;
    int * p = &a;

    *p = 999;   //通过*来访问对应地址的值，并通过赋值运算对其进行修改

    printf("a的值为：%d", a);
}
