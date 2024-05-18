/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:44:10 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/15 22:10:53 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	uppercase(unsigned int i, char *c)
// {
// (void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32; // 大文字に変換
// }

// static void	add(unsigned int i, char *c)
// {
// 	*c = (char)(i + *c);
// }

// static void	to_char_zero(unsigned int i, char *c)
// {
// 	*c = i - i + '0';
// }

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	str2[] = "";
// 	char	str3[] = "abcd0";
// 	char	str4[] = "abcdfsdfs";

// 	ft_striteri(str, &uppercase);
// 	printf("%s\n", str); // 出力: HELLO
// 	ft_striteri(str2, &add);
// 	printf("%s\n", str2);
// 	ft_striteri(str3, &add); //テスターでは末尾に％が出てるので要確認
// 	printf("%s\n", str3);
// 	ft_striteri(str4, &to_char_zero);
// 	printf("%s\n", str4);
// 	return (0);
// }
