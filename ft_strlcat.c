/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:51:57 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/07 22:20:44 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *str, size_t n)
{
	size_t	length;

	length = 0;
	while (length < n && str[length] != '\0')
	{
		length++;
	}
	return (length);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dst_len = ft_strnlen(dst, size);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	i = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (dst_len + 1 < size && src[i] != '\0')
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}

// int	main(void)
// {
// 	char dst[3] = "aiu";
// 	char dst_zisaku[3] = "aiu";
// 	char src[] = "Sorosoromuri";
// 	int i = 1;

// 	char dst2[30] = "aiu";
// 	char dst_zisaku2[30] = "aiu";
// 	char src2[] = "";

// 	char dst3[30] = "";
// 	char dst_zisaku3[30] = "";
// 	char src3[] = "Sorosoromuri";

// 	size_t totalsize = strlcat(dst, src, i);
// 	size_t totalsize2 = ft_strlcat(dst_zisaku, src, i);
// 	printf("original: %s, %lu\n", dst, totalsize);
// 	printf("zisaku  : %s, %lu\n", dst_zisaku, totalsize2);

// 	size_t totalsize3 = strlcat(dst2, src2, i);
// 	size_t totalsize4 = ft_strlcat(dst_zisaku2, src2, i);
// 	printf("original: %s, %lu\n", dst2, totalsize3);
// 	printf("zisaku  : %s, %lu\n", dst_zisaku2, totalsize4);

// 	size_t totalsize5 = strlcat(dst3, src3, i);
// 	size_t totalsize6 = ft_strlcat(dst_zisaku3, src3, i);
// 	printf("original: %s, %lu\n", dst3, totalsize5);
// 	printf("zisaku  : %s, %lu\n", dst_zisaku3, totalsize6);

// 	// sizeは１．dstよりも小さい…x + src　2．dst + src以下もしくは dst + srcより大きい…dst文字数+src文字数
// }