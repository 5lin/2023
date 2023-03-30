#include <stdio.h>

int main(){
    int arr[3] = {111, 222, 333};
    int (*p)[3] = &arr;  //直接对整个数组再取一次地址

    printf("%d, %d, %d", *(*p+0), *(*p+1), *(*p+2));   //要获取数组中的每个元素，稍微有点麻烦
}
