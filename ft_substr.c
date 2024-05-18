/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:34:25 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:42:08 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	s_len = 0;
	if (s == NULL)
		return (NULL);
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// int	main(void)
// {
// 	char			*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*result;

// 	str = "123456789";
// 	start = 3;
// 	len = 5;
// 	result = ft_substr(str, start, len);
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (0);
// 	}
// 	printf("Result: %s\n", result);
// 	free(result); // メモリを解放する
// 	str = "123456789";
// 	start = 3;
// 	len = 15;
// 	result = ft_substr(str, start, len);
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (0);
// 	}
// 	printf("Result: %s\n", result);
// 	free(result); // メモリを解放する
// 	return (0);
// }
