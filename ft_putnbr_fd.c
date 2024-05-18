/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:42:09 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/15 21:03:07 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_put_unsigned(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_put_unsigned(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
	{
		ft_put_unsigned((unsigned int)n, fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_put_unsigned((unsigned int)-n, fd);
	}
}
//#include <stdio.h>

// int	main(void)
// {
// 	int	n;

// 	n = -2;
// 	ft_putnbr_fd(n, 1); // 標準出力に出力する場合は fd = 1 を指定
// 	write(1, "\n", 1);
// 	n = INT_MIN;
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }
