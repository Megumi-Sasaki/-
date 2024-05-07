/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:51:39 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/01 21:40:46 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char ch = '7';
// 	printf("library :%d\n", isascii(' '));
// 	printf("zisaku  :%d\n", ft_isascii('a'));
// 	printf("library :%d\n", isascii('A'));
// 	printf("zisaku  :%d\n", ft_isascii('A'));
// 	printf("library :%d\n", isascii('1'));
// 	printf("zisaku  :%d\n", ft_isascii('1'));

// 	if (isdigit(ch))
// 	{
// 		printf("%c is a digit\n", ch);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit\n", ch);
// 	}
// 	return (0);
// }