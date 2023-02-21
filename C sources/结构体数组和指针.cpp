#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

int main() {
    struct Student arr[3] = {{1, 18, "小明"},   //声明一个结构体类型的数组，其实和基本类型声明数组是一样的
                             {2, 17, "小红"},   //多个结构体数据用逗号隔开
                             {3, 18, "小刚"}};
}
