/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:54 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 15:55:00 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_strchr(const void *s, int c)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	if (!len)
		return (NULL);
	ptr = (unsigned char *)s;
	while (i < len)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}