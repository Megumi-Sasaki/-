/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:50:24 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 21:27:09 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = src;
	d = dst;
	if (dst == src)
		return (dst);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[10];
// 	char str3[] = "Hello";
// 	char str4[10];

// 	char *strKaki = strdup("HelloWorld!");
// 	char *strtotyu = &strKaki[5];
// 	char *strKaki2 = strdup("HelloWorld!");
// 	char *strtotyu2 = &strKaki[5];

// 	// str1の内容をstr2にコピーする
// 	memcpy(str2, str1, strlen(str1) + 1);
// 	ft_memcpy(str4, str3, strlen(str1) + 1);

// 	memcpy(strKaki, strtotyu, 5);
// 	ft_memcpy(strKaki2, strtotyu2, 5);

// 	printf("strKaki: %s\n", strKaki);
// 	printf("strKaki: %s\n", strKaki2);

// 	// コピーされた文字列を出力する
// 	printf("str2: %s\n", str2);
// 	printf("str4: %s\n", str4);

// 	return (0);
// }