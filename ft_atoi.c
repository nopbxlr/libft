/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:40:16 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 15:55:50 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_is_whitespace(char c)
{
	if (c >= 0x08 && c <= 0x0D)
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	nb;
	int		mult;

	i = 0;
	nb = 0;
	mult = 1;
	while (ft_is_whitespace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb *= 10;
		nb += nptr[i] - '0';
		i++;
	}
	return (nb * mult);
}
