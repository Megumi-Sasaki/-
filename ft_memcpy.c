#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t len)
{
    

}

int main() 
{
    char str1[] = "Hello";
    char str2[10];

    // str1の内容をstr2にコピーする
    memcpy(str2, str1, strlen(str1) + 1);

    // コピーされた文字列を出力する
    printf("str2: %s\n", str2);

    return 0;
}