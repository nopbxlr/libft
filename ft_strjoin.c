/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:29:14 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/06 17:58:43 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<limits.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nmemb > LONG_MAX || size > LONG_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len + size);
	i = dest_len;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (src_len + dest_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	ptr = ft_calloc(sizeof(char), total + 1);
	if (!ptr)
		return (NULL);
	ft_strlcat(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcat(ptr, s2, total + 1);
	return (ptr);
}
