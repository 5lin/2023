#include <stdio.h>

int main(){
    int a, b, c;
    int * arr[3] = {&a, &b, &c};   //可以看到，实际上本质还是数组，只不过存的都是地址
}
