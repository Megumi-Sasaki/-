/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:41:24 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 20:30:05 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 'a');
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

// 	c = 'A';
// 	d = 'A';
// 	e = '\0';
// 	f = '\0';

// 	printf("original: %c\n", tolower(c));
// 	printf("zisaku: %c\n", ft_tolower(d));

// 	printf("original: %c\n", tolower(e));
// 	printf("zisaku: %c\n", ft_tolower(f));

// 	return (0);
// }