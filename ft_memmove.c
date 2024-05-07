/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:36:51 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 21:25:04 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[10];
// 	char str3[] = "Hello";
// 	char str4[10];
// 	char memdest[10] = "1234567890";
// 	char memdest2[10] = "1234567890";
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = {0, 0, 0, 0, 0, 0, 0};
// 	char s1[] = {0, 0, 0, 0, 0, 0, 0};

// 	memmove(s0, s, 7);
// 	ft_memmove(s1, s, 7);
// 	printf("original_s0: %s\n", s0); // null(0)が途中にあれば、その時点で置き換え終了。要素5まで
// 	printf("zisaku_s0: %s\n", s1);

// 	memmove(memdest + 3, memdest, 5);
// 	ft_memmove(memdest2 + 3, memdest2, 5);
// 	printf("original_memdest: %s\n", memdest);
// 	printf("zisaku_memdest: %s\n", memdest2);

// 	memmove(str2, str1, strlen(str1) + 1);
// 	ft_memmove(str4, str3, strlen(str3) + 1);
// 	printf("original_str2: %s\n", str2);
// 	printf("zisaku_str4: %s\n", str4);

// 	return (0);
// }