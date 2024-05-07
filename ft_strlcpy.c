/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:32:44 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 20:01:42 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_length;
	size_t	copy_length;
	size_t	i;

	src_length = 0;
	copy_length = 0;
	i = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
		copy_length = size - 1;
	while (i < copy_length && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dst[i] = '\0';
	}
	return (src_length);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst[11];
// 	char dst_zisaku[11];
// 	char src2[] = "Hello!";
// 	char dst2[] = "DenkiGroove";
// 	char dst2_zisaku[] = "DenkiGroove";

// 	size_t len = strlcpy(dst, src, sizeof(dst));
// 	size_t len2 = strlcpy(dst2, src2, 3);

// 	size_t len3 = ft_strlcpy(dst_zisaku, src, sizeof(dst_zisaku));
// 	size_t len4 = ft_strlcpy(dst2_zisaku, src2, 3);
// 	// dst2は文字列なので、終端のヌルがカウントされ、12文字分(終端ヌルも含める)コピーされる？

// 	printf("Copied string_dst: %s\n", dst);
// 	printf("Length of copied string_src: %zu\n", len);
// 	printf("Copied string_dst2: %s\n", dst2);
// 	printf("Length of copied string_src2: %zu\n", len2);

// 	printf("dst_zisaku: %s\n", dst_zisaku);
// 	printf("zisaku_src_length: %zu\n", len3);
// 	printf("dst2_zisaku: %s\n", dst2_zisaku);
// 	printf("zisaku_src2_length: %zu\n", len4);
// 	//指定されたバイトだけコピーし、そのあとこの関数は自動で終端にヌルを入れる
// 	//返り値は第2引数のバイト数(nullは含まない)になるので、src_lengthでカウント
// 	return (0);
// }