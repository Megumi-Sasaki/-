/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:36:18 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:36:28 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *s;

// 	s = "abcdef";
// 	printf("ひとつめ:\n ");
// 	ft_putstr_fd(s, 1);
// 	printf("\n");

// 	s = "\n1234";
// 	printf("ふたつめ:\n ");
// 	ft_putstr_fd(s, 1);
// 	printf("\n");

// 	s = "";
// 	printf("みっつめ:\n ");
// 	ft_putstr_fd(s, 1);
// 	printf("\n");

// 	s = "\t567";
// 	printf("よっつめ:\n ");
// 	ft_putstr_fd(s, 1);
// 	printf("\n");
// }