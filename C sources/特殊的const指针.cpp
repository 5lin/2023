#include <stdio.h>

int main(){
    int a = 9, b = 10;
    const int * p = &a;
    *p = 20;   //这里直接报错，因为被const标记的指针，所指地址上的值不允许发生修改
  	p = &b;   //但是指针指向的地址是可以发生改变的
}
