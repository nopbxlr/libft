/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nop <nop@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:54 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/17 01:59:39 by nop              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
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
