/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:14:48 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:56:42 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < length && big[i] != '\0')
	{
		e = 0;
		if (big[i] == little[e])
		{
			while ((i + e) < length && big[i + e] == little[e])
			{
				if (little[e + 1] == '\0')
					return ((char *)(big + i));
				e++;
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *larges = "Three Musketeers";
// 	const char *smalls = "A";
// 	const char *smalls2 = "Musket";

// 	char *original = strnstr(larges, smalls, 16);
// 	char *zisaku = ft_strnstr(larges, smalls, 16);
// 	printf("original: %s\n", original);
// 	printf("zisaku: %s\n", zisaku);

// 	char *original2 = strnstr(larges, smalls2, 12);
// 	char *zisaku2 = ft_strnstr(larges, smalls2, 12);
// 	printf("original2: %s\n", original2);
// 	printf("zisaku2: %s\n", zisaku2);

// 	char a[] = "aiueo";

// 	printf("%s : %s\n", strnstr(a, "", 6), ft_strnstr(a, "", 6));
// 	// littleをNULLにすると、ヌルポインタとなり、本物はセグフォになる。
//自作の関数は、あえてチェックしてない（!lit_unsignedをはじいてない）
// 	printf("%s : %s\n", strnstr(a, "a", 6), ft_strnstr(a, "a", 6));
// 	printf("%s : %s\n", strnstr(a, "i", 6), ft_strnstr(a, "i", 6));
// 	printf("%s : %s\n", strnstr(a, "eui", 6), ft_strnstr(a, "eui", 6));
// 	printf("%s : %s\n", strnstr(a, "ie", 6), ft_strnstr(a, "ie", 6));
// 	printf("%s : %s\n", strnstr(a, "uo", 6), ft_strnstr(a, "uo", 6));
// 	return (0);

// 	return (0);
// }