/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:00:56 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/06 18:10:40 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

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

static int	count_words(const char *s, char c)
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

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	int		i;
	int		idx;
	int		word_length;

	idx = 0;
	i = 0;
	word_length = 0;
	ptr = malloc(sizeof(char *) * (count_words(s, c) + 1));
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
	return (ptr);
}
