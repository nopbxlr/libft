/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:04:57 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/04 21:05:37 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	int		sz;
	int		i;
	char	*dest;

	sz = 0;
	i = 0;
	while (s[sz])
		sz++;
	dest = malloc (sizeof(char) * (sz + 1));
	while (i < sz)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
