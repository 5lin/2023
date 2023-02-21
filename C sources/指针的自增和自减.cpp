#include <stdio.h>

int main(){
    char str[] = "Hello World!";
    char * p = str;

    p++;  //自增后相当于指针指向了第二个元素的地址

    printf("%c", *p);   //所以这里打印的就是第二个元素的值了
}
