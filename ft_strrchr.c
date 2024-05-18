/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:10:43 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:57:03 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	length;
	size_t	count;
	char	cchar;

	count = 0;
	length = ft_strlen(string);
	cchar = c;
	while (count <= length)
	{
		if (string[length - count] == cchar)
			return ((char *)(&string[length - count]));
		count++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char c[20] = "Denki Groove";
// 	char *result;
// 	char *zisaku_res;
// 	int ch = 'G';

// 	result = strrchr(c, ch);
// 	zisaku_res = ft_strrchr(c, ch);

// 	printf("original: %s\n", result);
// 	printf("zisaku: %s\n", zisaku_res);

// 	char str[] = "Hello, world!";
// 	int ch2 = 'o';

// 	char *result_strrchr = strrchr(str, ch2);
// 	char *result_ft_strrchr = ft_strrchr(str, ch2);

// 	printf("original: %s\n", result_strrchr);
// 	printf("zisaku: %s\n", result_ft_strrchr);

// 	char str2[] = "Hello, world!";
// 	int ch3 = 'V';

// 	char *result_strrchr2 = strrchr(str2, ch3);
// 	char *result_ft_strrchr2 = ft_strrchr(str2, ch3);

// 	printf("original: %s\n", result_strrchr2);
// 	printf("zisaku: %s\n", result_ft_strrchr2);

// 	return (0);
// }