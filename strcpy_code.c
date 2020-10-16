#include<stdio.h>
#include<stdlib.h>

//自己实现字符串拷贝函数
char *StrCpy(char *src)
{
    //1、计算src的长度 len
    int i = 0, len = 0;
    while (src[i] != 0)
    {
        len++;
        i++;
    }
    //2、用malloc申请长度为 len+1的内存空间
    char *newstr = (char *)malloc((len + 1) * sizeof(char));
    //3、将src字符串逐个字符复制到新申请的内存空间
    for (int i = 0; i < len + 1; i++)
    {
        newstr[i] = src[i];
    }
    //4、新申请内存空间的最后一位放入'\0'
    newstr[len + 1] = 0;
    //5、返回新申请的内存空间指针
    return newstr;
}

int main()
{
    char src[] = "hello world!";
    char *newstr;
    newstr=StrCpy(src);
    printf("%s\n",newstr);
}