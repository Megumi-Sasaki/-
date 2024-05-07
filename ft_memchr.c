/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:13:18 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 21:28:12 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t				count;
	const unsigned char	*target;
	unsigned char		moji;

	count = 0;
	target = (const unsigned char *)buf;
	moji = (unsigned char)ch;
	while (count < n)
	{
		if (target[count] == moji)
			return (void *)(target + count);
		count++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = {0, 1, 2, 3, 4, 5};
// 	char *original;
// 	char *zisaku;
// 	char *original_1;
// 	char *zisaku_1;

// 	original = memchr(str, 256 + 2, 3);
// 	// unsigned charだと256通りまでなので、それ以上の値の場合は256で割った余りを取得して比較している。つまり258の代わりに2を使う。下位8bitがどちらの数も同じだから
// 	zisaku = ft_memchr(str, 256 + 2, 3);
// 	printf("original: %s\n", original);
// 	printf("zisaku: %s\n", zisaku);

// 	original_1 = memchr(str, 3, 5);
// 	zisaku_1 = ft_memchr(str, 3, 5);
// 	printf("original: %d\n", *(char *)original_1);
// 	printf("zisaku: %d\n", *(char *)zisaku_1);

// 	// mem系の関数は1byteごとに比較を行うので、intをunsigned charにする

// 	char str2[] = "abcdef\0ghij"; /* 途中に空文字のある文字列 */
// 	char *original2;
// 	char *zisaku2;

// 	original2 = memchr(str2, 'h', 12);
// 	zisaku2 = ft_memchr(str2, 'h', 12);
// 	printf("original: %s\n", original2);
// 	printf("original: %s\n", zisaku2);

// 	return (0);
// }