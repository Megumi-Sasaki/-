#include <string.h>
#include <stdio.h>

void ft_bzero(void *b, size_t len)
{
    char *p = b;
    int i = 0;

    while(i < len)
    {
        p[i] = 0;
        i++;
    }
}

int main()
{
    char buffer[10];
    char buffer2[10];
    size_t bufferS = sizeof(buffer);
    size_t buffer2S = sizeof(buffer2);
    int i = 0;

    char str01[] = "0123456789";
    char str02[] = "0123456789";

    ft_bzero(buffer, bufferS);
    bzero(buffer2, buffer2S);
    
    printf("zisaku ");
    while(i < bufferS)
   { 
        printf("%d ", buffer[i]);
        i++;
   }
    i = 0;
    printf("\nlibrary ");
   while(i < buffer2S)
   { 
        printf("%d ", buffer2[i]);
        i++;
   }

    ft_bzero(str01, 3);
    bzero(str02, 3);
    printf("\n");
    //ポインタごと０にしてるので文字は見えない？？？？？？
    printf("zisaku  : %s\n", str01);
    printf("library : %s\n", str02);
    
    return 0;
}