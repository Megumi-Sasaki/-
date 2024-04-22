#include <string.h>
#include <stdio.h>

 size_t ft_strlen(const char *str) 
 {
    size_t length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}


int main() {
   
   const char *moji = "abc";
   const char *moji2 = "\t";
   const char *moji3 = "\naaaa";
     printf("library :%zu\n", strlen(moji));
    printf("zisaku  :%zu\n", ft_strlen(moji));
    printf("library :%zu\n", strlen(moji2));
    printf("zisaku  :%zu\n", ft_strlen(moji2));
    printf("library :%zu\n", strlen(moji3));
    printf("zisaku  :%zu\n", ft_strlen(moji3));

    return 0;
}
