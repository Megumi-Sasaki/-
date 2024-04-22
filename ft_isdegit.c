
#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    return c >= '0' && c <= '9';
} 

int main() {
    char ch = '7';
     printf("library :%d\n", isdigit('2'));
    printf("zisaku  :%d\n", ft_isdigit('2'));
    printf("library :%d\n", isdigit('A'));
    printf("zisaku  :%d\n", ft_isdigit('A'));
    printf("library :%d\n", isdigit('1'));
    printf("zisaku  :%d\n", ft_isdigit('1'));

    if (isdigit(ch)) {
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is not a digit\n", ch);
    }
    return 0;
}