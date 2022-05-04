/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:54 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/04 21:41:01 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_strrchr(const void *s, int c)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	if (!len)
		return (NULL);
	i = len - 1;
	ptr = (unsigned char *)s;
	while (i > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i--;
	}
	return (NULL);
}
