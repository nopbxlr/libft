/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nop <nop@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:54 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/17 01:59:27 by nop              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			len;

	i = 0;
	len = ft_strlen(s) + 1;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
