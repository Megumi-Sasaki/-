/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:43:01 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 18:25:24 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;
	int	temp;

	len = 1;
	temp = n;
	while (temp >= 10 || temp <= -10)
	{
		temp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		len;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = get_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1 + (sign == -1)));
	if (!str)
		return (NULL);
	str[len + (sign == -1)] = '\0';
	while (len--)
	{
		str[len + (sign == -1)] = '0' + (n % 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int		num;
// 	char	*str;

// 	num = -12345;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("Number: %d\nString: %s\n", num, str);
// 		free(str); // メモリを解放
// 	}
// 	num = INT_MAX;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("Number: %d\nString: %s\n", num, str);
// 		free(str); // メモリを解放
// 	}
// 	num = INT_MIN;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("Number: %d\nString: %s\n", num, str);
// 		free(str); // メモリを解放
// 	}
// 	num = 0;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("Number: %d\nString: %s\n", num, str);
// 		free(str); // メモリを解放
// 	}
// 	return (0);
// }
