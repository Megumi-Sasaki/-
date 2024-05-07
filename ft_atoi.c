/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:35:22 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 20:49:54 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	space_or_not(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *string)
{
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	while (space_or_not(*string) == 1)
		string++;
	if (*string == '+' || *string == '-')
	{
		if (*string == '-')
			minus = -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		result = 10 * result + (*string - '0');
		string++;
	}
	return (minus * result);
}

// int	main(void)
// {
// 	int		i;
// 	int		zisaku;
// 	char	*s;
// 	char	*e;
// 	char	str[20];
// 	char	str2[20];
// 	char	str3[20];
// 	char	str4[30];

// 	s = "-775";
// 	e = "-775";
// 	i = atoi(s);         /* i = -9885 */
// 	zisaku = ft_atoi(s); // const char *string と *stringの違いがわからない
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	s = "\t\v\n\r\f123";
// 	i = atoi(s);
// 	zisaku = ft_atoi(s);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	s = "0";
// 	i = atoi(s);
// 	zisaku = ft_atoi(s);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	s = "+0000000000000000000000000000000000000000000000000000123";
// 	i = atoi(s);
// 	zisaku = ft_atoi(s);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	s = "12/3";
// 	i = atoi(s);
// 	zisaku = ft_atoi(s);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	s = "9223372036854775809";
// 	i = atoi(s);
// 	zisaku = ft_atoi(s); // LongMax以上を入れると、１になってしまう
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	sprintf(str, "%d", INT_MAX);
// 	i = atoi(str);
// 	zisaku = ft_atoi(str);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	sprintf(str2, "%i", INT_MIN);
// 	i = atoi(str2);
// 	zisaku = ft_atoi(str2);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	sprintf(str3, "%li", LONG_MAX);
// 	i = atoi(str3);
// 	zisaku = ft_atoi(str3);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// 	sprintf(str4, "%li", LONG_MIN);
// 	i = atoi(str4);
// 	zisaku = ft_atoi(str4);
// 	printf("i = %d\n", i);
// 	printf("zisaku = %d\n", zisaku);
// }
