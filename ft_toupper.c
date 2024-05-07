/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:42:36 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 18:41:11 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	else
	{
		return (c);
	}
}

// int	main(void)
// {
// 	char c;
// 	char d;
// 	char e;
// 	char f;

// 	c = 'a';
// 	d = 'a';
// 	e = '\0';
// 	f = '\0';

// 	printf("original: %c\n", toupper(c));
// 	printf("zisaku: %c\n", ft_toupper(d));

// 	printf("original: %c\n", toupper(e));
// 	printf("zisaku: %c\n", ft_toupper(f));

// 	return (0);
// }