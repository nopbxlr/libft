/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:31:48 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 17:39:42 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)s;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (ptr);
	while (i < len && d[start + i])
	{
		ptr[i] = d[i + start];
		i++;
	}
	return (ptr);
}
