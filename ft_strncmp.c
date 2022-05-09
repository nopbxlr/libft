/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:01:00 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 16:00:25 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (--n)
	{
		if (a[i] != b[i] || !a[i] || !b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
