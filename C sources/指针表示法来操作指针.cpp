*p   //数组的第一个元素
p   //数组的第一个元素的地址
p == str   //肯定是真，因为都是数组首元素地址
*str    //因为str就是首元素的地址，所以这里对地址加*就代表第一个元素，使用的是指针表示法
&str[0]   //这里得到的实际上还是首元素的地址
*(p + 1)   //代表第二个元素
p + 1    //第二个元素的内存地址
*p + 1    //注意*的优先级比+要高，所以这里代表的是首元素的值+1，得到字符'K'
