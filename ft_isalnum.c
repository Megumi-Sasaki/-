#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

int main() {
    char ch = '\n';

    printf("library :%d\n", isalnum('2'));
    printf("zisaku  :%d\n", ft_isalnum('2'));
    printf("library :%d\n", isalnum('A'));
    printf("zisaku  :%d\n", ft_isalnum('A'));
    printf("library :%d\n", isalnum('/'));
    printf("zisaku  :%d\n", ft_isalnum('/'));
    

    if (ft_isalnum(ch)) {
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is not a digit\n", ch);
    }
    return 0;
}