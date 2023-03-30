#include <stdio.h>

int main(){
    int a = 9, b = 10;
    int * const p = &a;   //const关键字被放在了类型后面
    *p = 20;   //允许修改所指地址上的值
    p = &b;   //但是不允许修改指针存储的地址值，其实就是反过来了。
}
