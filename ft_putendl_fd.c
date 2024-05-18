/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:38:26 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:36:20 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char *s;

// 	s = "abcdef";
// 	printf("ひとつめ:\n ");
// 	ft_putendl_fd(s, 1);

// 	s = "\n1234";
// 	printf("ふたつめ:\n ");
// 	ft_putendl_fd(s, 1);

// 	s = "";
// 	printf("みっつめ:\n ");
// 	ft_putendl_fd(s, 1);

// 	s = "\t567";
// 	printf("よっつめ:\n ");
// 	ft_putendl_fd(s, 1);
// }