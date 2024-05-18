/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:52:35 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/15 21:26:19 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char buffer[10];
// 	char buffer2[10];
// 	size_t bufferS = sizeof(buffer);
// 	size_t buffer2S = sizeof(buffer2);
// 	int i = 0;

// 	char str01[] = "0123456789";
// 	char str02[] = "0123456789";

// 	ft_bzero(buffer, bufferS);
// 	bzero(buffer2, buffer2S);

// 	printf("zisaku ");
// 	while (i < bufferS)
// 	{
// 		printf("%d ", buffer[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nlibrary ");
// 	while (i < buffer2S)
// 	{
// 		printf("%d ", buffer2[i]);
// 		i++;
// 	}

// 	ft_bzero(str01, 3);
// 	bzero(str02, 3);
// 	printf("\n");
// 	//ポインタごと０にしてるので文字は見えない？？？？？？
// 	printf("zisaku  : %s\n", str01);
// 	printf("library : %s\n", str02);

// 	return (0);
// }