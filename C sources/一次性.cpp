#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[] = "abcdef";
	strcpy(str1, str2);//将字符串str2的内容拷贝到字符串str1中
	printf("%s", str1);
	return 0;
}
