/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:24:14 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 21:33:53 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cchar;

	cchar = (char)c;
	while (*s != '\0')
	{
		if (*s == cchar)
			return ((char *)s);
		s++;
	}
	if (cchar == '\0')
		return ((char *)s);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char com[20] = "computer program";
// 	char *ptr;
// 	char *zisaku_ptr;
// 	int ch = 'u';

// 	ptr = strchr(com, ch);
// 	zisaku_ptr = ft_strchr(com, ch);
// 	printf("original: %s\n", ptr);
// 	printf("zisaku: %s\n", zisaku_ptr);
// 	return (0);
// }