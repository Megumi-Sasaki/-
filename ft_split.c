/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesasaki <mesasaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:37:03 by mesasaki          #+#    #+#             */
/*   Updated: 2024/05/18 17:36:52 by mesasaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char	*word_start;
	char	*word_end;
	size_t	word_len;
	size_t	i;
	char	*word;

	i = 0;
	while (**s == c)
		(*s)++;
	word_start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	word_end = (char *)*s;
	word_len = word_end - word_start;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = word_start[i];
		i++;
	}
	word[word_len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	num_words;
	size_t	i;

	i = 0;
	num_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	while (i < num_words)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[num_words] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	*moji;
// 	char	**result;

// 	moji = "bbABCbbDEFbb";
// 	result = ft_split(moji, 'b');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// 	moji = "hello!zzzzzzzz";
// 	result = ft_split(moji, 'z');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// 	moji = "\11\11\11\11hello!\11\11\11\11";
// 	result = ft_split(moji, '\11');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// 	moji = "";
// 	result = ft_split(moji, 'a');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// 	moji = "gggg";
// 	result = ft_split(moji, 'g');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// 	moji = "nonempty";
// 	result = ft_split(moji, '\0');
// 	while (*result)
// 	{
// 		printf("%s", *result);
// 		result++;
// 	}
// 	printf("\n");
// }
