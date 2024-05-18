/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:43:44 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/15 22:12:53 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// static char	add_one(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 		return (c);
// 	else
// 		return ('1');
// }

// int	main(void)
// {
// 	char	*a;
// 	char	*s;
// 	char	*result;

// 	s = "abcdefg";
// 	result = ft_strmapi(s, &add_one);
// 	printf("%s\n", result); // 出力: "bcd"
// 	free(result);           // メモリの解放
// 	// a = strdup_len(INT_MAX);
// 	// if (a)
// 	//     printf("%lu\n", strlen(a));
// 	// else
// 	//     printf("NULL returned");
// 	return (0);
// }
