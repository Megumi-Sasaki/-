#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c) 
{
    return c >= 32 && c < 127;
}


int main() {
    char ch = '7';
     printf("library :%d\n", isprint('2'));
    printf("zisaku  :%d\n", ft_isprint('2'));
    printf("library :%d\n", isprint('\t'));
    printf("zisaku  :%d\n", ft_isprint('\t'));
    printf("library :%d\n", isprint('\n'));
    printf("zisaku  :%d\n", ft_isprint('\n'));

    return 0;
}