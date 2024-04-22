#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char ch = ' ';
	 printf("library :%d\n", isalpha('2'));
    printf("zisaku  :%d\n", ft_isalpha('2'));
    printf("library :%d\n", isalpha('A'));
    printf("zisaku  :%d\n", ft_isalpha('A'));
    printf("library :%d\n", isalpha('/'));
    printf("zisaku  :%d\n", ft_isalpha('/'));


	if (isalpha(ch))
	{
		printf("%c is an alphabet character\n", ch);
	}
	else
	{
		printf("%c is not an alphabet character\n", ch);
	}
	return (0);
}