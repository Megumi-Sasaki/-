/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:07:02 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:59:06 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dst;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(string);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (string[i])
	{
		dst[i] = string[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	char *string = "this is a copy"; //文字列分だけ確保
// 	char *newstr;
// 	char *zisaku_str;
// 	Make newstr point to a duplicate of string
// 	if ((newstr = strdup(string)) != NULL)
// 		printf("The new string is: %s\n", newstr);

// 	if ((zisaku_str = ft_strdup(string)) != NULL)
// 		printf("The zisaku string is: %s\n", zisaku_str);

// 	return (0);
// }