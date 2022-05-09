/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:04:03 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 19:23:57 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	is_in_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_ofs;
	size_t	end_ofs;
	char	*s;
	int		len;

	if (!s1 || !set)
		return (NULL);
	s = (char *)s1;
	start_ofs = 0;
	end_ofs = ft_strlen(s1) - 1;
	while (is_in_charset(s[start_ofs], set))
		start_ofs++;
	while (is_in_charset(s[end_ofs], set))
		end_ofs--;
	len = end_ofs - start_ofs + 1;
	if (len <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, start_ofs, len));
}
