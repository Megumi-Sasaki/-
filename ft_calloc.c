/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:46:29 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/06 18:38:12 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*cal;

	cal = (void *)malloc(nmemb * size);
	if (!cal)
		return (NULL);
	return (cal);
}
// int	main(void)
// {
// 	int no;
// 	int *p;
// 	int *zisaku;
// 	int i;
// 	int i_zisaku;

// 	no = 5;
// 	i = 0;
// 	p = calloc(no, sizeof(char));
// 	zisaku = calloc(no, sizeof(int));
// 	if (p == NULL && zisaku == NULL)
// 		return (0);

// 	while (i < no)
// 	{
// 		p[i] = i;
// 		i++;
// 	}
// 	i = 0;
// 	while (i < no)
// 	{
// 		printf("p[%d] = %d\n", i, p[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < no)
// 	{
// 		zisaku[i] = i;
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