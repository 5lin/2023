#include <stdio.h>

int main(){
    char str[] = "Hello World!";
    char * p = str;   //？？？啥情况，为什么能直接把数组作为地址赋值给指针变量p？？？

    printf("%c", *p);   //还能正常使用，打印出第一个字符？？？
}
