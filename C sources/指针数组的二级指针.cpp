#include <stdio.h>

int main(){
    int * p[3];   //因为数组内全是指针
    int ** pp = p;  //所以可以直接使用指向指针的指针来指向数组中的第一个指针元素
}
