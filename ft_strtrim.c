/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:35:55 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:42:01 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	trimmed[len] = '\0';
	while (len--)
		trimmed[len] = s1[start + len];
	return (trimmed);
}

// int	main(void)
// {
// 	char const *s1;
// 	char const *set;
// 	char *result;

// 	// 1
// 	s1 = "12345ABC1234AB1231";
// 	set = "123";
// 	result = ft_strtrim(s1, set);

// 	printf("result 1: %s\n", result);
// 	free(result); // メモリを解放

// 	// 2
// 	s1 = "";
// 	set = "";
// 	result = ft_strtrim(s1, set);

// 	printf("result 2: %s\n", result);
// 	free(result); // メモリを解放

// 	// 3
// 	s1 = "abcd";
// 	set = "";
// 	result = ft_strtrim(s1, set);

// 	printf("result 3: %s\n", result);
// 	free(result); // メモリを解放

// 	// 4
// 	s1 = "";
// 	set = "cdef";
// 	result = ft_strtrim(s1, set);

// 	printf("result 4: %s\n", result);
// 	free(result); // メモリを解放

// 	// 5
// 	s1 = ". abcd";
// 	set = " ";
// 	result = ft_strtrim(s1, set);

// 	printf("result 5: %s\n", result);
// 	free(result); // メモリを解放

// 	// 6
// 	s1 = ".teste, bla ,.,.";
// 	set = ",.";
// 	result = ft_strtrim(s1, set);

// 	printf("result 6: %s\n", result);
// 	free(result); // メモリを解放

// 	return (0);
// }