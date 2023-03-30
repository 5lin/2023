#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len;
    int flag = 1;

    printf("请输入字符串：");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("这是一个回文串\n");
    } else {
        printf("这不是一个回文串\n");
    }

    return 0;
}

