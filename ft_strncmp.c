/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:12:19 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 18:39:22 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	size_t			i;
	unsigned char	ch1;
	unsigned char	ch2;

	i = 0;
	while ((s1[i] || s2[i]) && i < count)
	{
		ch1 = (unsigned char)s1[i];
		ch2 = (unsigned char)s2[i];
		if (ch1 != ch2)
			return (ch1 - ch2);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str;
// 	char *str1;
// 	int ans;

// 	str = "mori";
// 	str1 = "SAMURAI";

// 	ans = ft_strncmp(str, str1, 8);
// 	printf("%d\n", ans);
// 	ans = strncmp(str, str1, 8);
// 	printf("%d\n", ans);

// 	const char *abc = "ABC";
// 	const char *nul = "\0";

// 	printf("original ABC: ABD   = %d\n", strncmp(abc, "ABD", 2));
// 	printf("zisaku ABC: ABD   = %d\n", ft_strncmp(abc, "ABD", 2));

// 	printf("original ABC: AAA   = %d\n", strncmp(abc, "AAA", 2));
// 	printf("zisaku ABC: AAA   = %d\n", ft_strncmp(abc, "AAA", 2));

// 	printf("original ABC: ABCD  = %d\n", strncmp(abc, "ABCD", 2));
// 	printf("zisaku ABC: ABCD  = %d\n", ft_strncmp(abc, "ABCD", 2));

// 	printf("original ABC: AB    = %d\n", strncmp(abc, "AB", 2));
// 	printf("zisaku ABC: AB    = %d\n", ft_strncmp(abc, "AB", 2));

// 	printf("original ABC: B     = %d\n", strncmp(abc, "B", 2));
// 	printf("zisaku ABC: B     = %d\n", ft_strncmp(abc, "B", 2));

// 	printf("original ABC: a     = %d\n", strncmp(abc, "a", 2));
// 	printf("zisaku_ABC: a     = %d\n", ft_strncmp(abc, "a", 2));

// 	printf("original ABC: null     = %d\n", strncmp(abc, "\0", 2));
// 	printf("zisaku_ABC: null     = %d\n", ft_strncmp(abc, "\0", 2));

// 	printf("original null: abc     = %d\n", strncmp(nul, "\0", 2));
// 	printf("zisaku_null: abc   = %d\n", ft_strncmp(nul, "\0", 2));

// 	return (0);
// }