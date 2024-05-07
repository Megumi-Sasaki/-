/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:13:46 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 21:27:46 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char	*str;
	const unsigned char	*str2;
	size_t				co;

	str = (unsigned char *)buf1;
	str2 = (unsigned char *)buf2;
	co = 0;
	while (co < count)
	{
		if (str[co] != str2[co])
			return (str[co] - str2[co]);
		co++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";
// 	char	str3[] = "Hellz";
// 	int		original;
// 	int		zisaku;
// 	int		original_1;
// 	int		zisaku_1;
// 	char	str4[] = "Helloo";
// 	int		original_2;
// 	int		zisaku_2;
// 	char	empty1[] = "";
// 	char	empty2[] = "";
// 	int		original_3;
// 	int		zisaku_3;

// 	original = memcmp(str1, str2, strlen(str1));
// 	zisaku = ft_memcmp(str1, str2, strlen(str1));
// 	printf("original: (\"Hello\", \"Hello\"): %d\n", original);
// 	printf("zisaku: (\"Hello\", \"Hello\"): %d\n", zisaku);
// 	original_1 = memcmp(str1, str3, strlen(str1));
// 	zisaku_1 = ft_memcmp(str1, str3, strlen(str1));
// 	printf("original: (\"Hello\", \"Hellz\"): %d\n", original_1);
// 	printf("zisaku: (\"Hello\", \"Hellz\"): %d\n", zisaku_1);
// 	// テストケース2: 長さが異なるケース
// 	original_2 = memcmp(str1, str4, strlen(str1));
// 	zisaku_2 = ft_memcmp(str1, str4, strlen(str1));
// 	printf("original: (\"Hello\", \"Helloo\"): %d\n", original_2);
// 	printf("zisaku: (\"Hello\", \"Helloo\"): %d\n", zisaku_2);
// 	// テストケース3: 長さが 0 のケース
// 	original_3 = memcmp(empty1, empty2, 0);
// 	zisaku_3 = ft_memcmp(empty1, empty2, 0);
// 	printf("original: (\"\", \"\"): %d\n", original_2);
// 	printf("zisaku: (\"\", \"\"): %d\n", zisaku_2);
// 	return (0);
// }
