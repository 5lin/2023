#include <stdio.h>

int main(){
    int a, b, c;
    int * arr[3] = {&a, &b, &c};

    *arr[0] = 999;   //[]运算符的优先级更高，所以这里先通过[0]取出地址，然后再使用*将值赋值到对应的地址上
    printf("%d", a);
}
