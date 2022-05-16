/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:54 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/16 16:28:40 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_strrchr(const void *s, int c)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			len;

	len = ft_strlen(s) + 1;
	i = len;
	ptr = (unsigned char *)s;
	while (i--)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
	}
	return (NULL);
}
