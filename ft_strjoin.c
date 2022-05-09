/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:29:14 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 15:54:53 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
