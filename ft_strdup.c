/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nop <nop@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:04:57 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/11 02:36:03 by nop              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	size_t		sz;
	size_t		i;
	char		*dest;

	sz = 0;
	i = 0;
	while (s[sz])
		sz++;
	dest = ft_calloc(sz + 1, sizeof(char));
	if (!dest)
		return (NULL);
	while (i < sz)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
