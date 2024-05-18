/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:46:29 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/15 21:30:07 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	cal = (void *)malloc(nmemb * size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, nmemb * size);
	return (cal);
}
// int	main(void)
// {
// 	int no;
// 	int *p;
// 	int *zisaku;
// 	int i;

// 	no = 16;
// 	p = calloc(no, sizeof(int));
// 	zisaku = ft_calloc(no, sizeof(int));
// 	i = 0;
// 	while (i < no)
// 	{
// 		printf("p[%d] = %d\n", i, p[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < no)
// 	{
// 		printf("zisaku[%d] = %d\n", i, zisaku[i]);
// 		i++;
// 	}
// 	free(p);
// 	free(zisaku);
// }