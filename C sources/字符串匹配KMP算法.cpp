#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char *ptr;

    printf("请输入第一个字符串：");
    scanf("%s", str1);

    printf("请输入第二个字符串：");
    scanf("%s", str2);

    ptr = strstr(str1, str2);

    if (ptr == NULL) {
        printf("第一个字符串不包含第二个字符串\n");
    } else {
        printf("第一个字符串包含第二个字符串\n");
    }

    return 0;
}

