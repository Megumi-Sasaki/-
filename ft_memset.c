/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:50:00 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 19:54:29 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	uc;
	size_t			i;

	p = b;
	uc = c;
	i = 0;
	while (i < len)
	{
		p[i] = uc;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	char buffer[10];
// 	char bufferZisaku[10];
// 	int i = 0;

// 	char str01[] = "0123456789";
// 	char str02[] = "0123456789";
// 	char str05[] = "0123456789";

// 	char *str03;
// 	char *str04;

// 	if (!(str03 = (char *)malloc(sizeof(char) * 10)))
// 		return (0);
// 	if (!(str04 = (char *)malloc(sizeof(char) * 10)))
// 		return (0);

// 	memset(str03, 'a', 10);
// 	ft_memset(str04, 'a', 10);
// 	for (int i = 0; i < 15; i++)
// 	{
// 		printf("library %d : %c\n", i, str03[i]);
// 		printf("zisaku  %d : %c\n", i, str04[i]);
// 	}

// 	ft_memset(str01 + 2, '*', 5);
// 	memset(str02 + 2, '*', 5);
// 	memset(str05 + 2, 0, 5);

// 	printf("zisaku  : %s\n", str01);
// 	printf("library : %s\n", str02);
// 	printf("library str05 :");
// 	while (i < sizeof(str05))
// 	{
// 		printf("%hhu ", str05[i]);
// 		i++;
// 	}

// 	printf("\n");
// 	ft_memset(buffer, 'a', 5);
// 	memset(bufferZisaku, 'a', 5);
// 	printf("zisaku  :%s\n", buffer);
// 	printf("library : %s\n", bufferZisaku);

// 	// unsigned char は0から255までの範囲の符号なし整数の値
// 	ft_memset(bufferZisaku, 232, sizeof(bufferZisaku));

// 	while (i < sizeof(bufferZisaku))
// 	{
// 		printf("%hhu ", bufferZisaku[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	i = 0;
// 	memset(buffer, 232, sizeof(buffer));
// 	while (i < sizeof(buffer))
// 	{
// 		printf("%hhu ", buffer[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }