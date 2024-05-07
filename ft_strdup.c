/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:07:02 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 18:39:02 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*cal;
	size_t	str;
	size_t	i;

	i = 0;
	str = ft_strlen(string);
	cal = (char *)malloc((str + 1) * sizeof(const char));
	while (string[i])
	{
		cal[i] = string[i];
		i++;
	}
	cal[i] = '\0';
	return (cal);
}

// int	main(void)
// {
// 	char *string = "this is a copy"; //文字列分だけ確保
// 	char *newstr;
// 	char *zisaku_str;
// 	/* Make newstr point to a duplicate of string                              */
// 	if ((newstr = strdup(string)) != NULL)
// 		printf("The new string is: %s\n", newstr);

// 	if ((zisaku_str = ft_strdup(string)) != NULL)
// 		printf("The zisaku string is: %s\n", zisaku_str);

// 	return (0);
// }