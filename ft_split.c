/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:00:56 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 17:55:56 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static inline int	is_sep(char c1, char c2)
{
	return (c1 == c2);
}

static void	got_word(char *str, char **ptr, int *idx, int *word_length)
{
	ptr[*idx] = malloc(sizeof(char) * (*word_length + 1));
	ft_memcpy(ptr[*idx], str, *word_length);
	ptr[*idx][*word_length] = '\0';
	*word_length = 0;
	*idx += 1;
}

static int	count_words(char *s, char c)
{
	int	count;
	int	word_length;
	int	i;

	count = 0;
	word_length = 0;
	i = 0;
	while (s[i])
	{
		if (is_sep(s[i], c))
		{
			if (word_length)
			{
				word_length = 0;
				count++;
			}
		}
		else
			word_length++;
		i++;
	}
	if (word_length)
		count++;
	return (count);
}

void	put_data(char *s, char c, char **ptr)
{
	int		i;
	int		idx;
	int		word_length;

	idx = 0;
	i = 0;
	word_length = 0;
	while (s[i])
	{
		if (is_sep(s[i], c))
		{
			if (word_length)
				got_word(&s[i - word_length], ptr, &idx, &word_length);
		}
		else
			word_length++;
		i++;
	}
	if (word_length)
		got_word(&s[i - word_length], ptr, &idx, &word_length);
	ptr[idx] = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!ptr)
		return (NULL);
	put_data((char *)s, c, ptr);
	return (ptr);
}
