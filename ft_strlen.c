/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:49:42 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/07 22:22:19 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// int	main(void)
// {
// 	const char	*moji = "abc";
// 	const char	*moji2 = "\t";
// 	const char	*moji3 = "\naaaa";

// 	printf("library :%zu\n", strlen(moji));
// 	printf("zisaku  :%zu\n", ft_strlen(moji));
// 	printf("library :%zu\n", strlen(moji2));
// 	printf("zisaku  :%zu\n", ft_strlen(moji2));
// 	printf("library :%zu\n", strlen(moji3));
// 	printf("zisaku  :%zu\n", ft_strlen(moji3));
// 	return (0);
// }
