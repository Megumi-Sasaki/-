/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdegit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:51:27 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/01 21:40:51 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	char ch = '7';
// 	printf("library :%d\n", isdigit('2'));
// 	printf("zisaku  :%d\n", ft_isdigit('2'));
// 	printf("library :%d\n", isdigit('A'));
// 	printf("zisaku  :%d\n", ft_isdigit('A'));
// 	printf("library :%d\n", isdigit('1'));
// 	printf("zisaku  :%d\n", ft_isdigit('1'));

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