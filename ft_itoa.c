/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:58:14 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 17:22:48 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	get_nb_len(int n)
{
	long	nl;
	int		len;
	int		is_neg;

	nl = n;
	len = 0;
	is_neg = 0;
	if (nl == 0)
		return (1);
	if (nl < 0)
	{
		nl = -nl;
		is_neg = 1;
	}
	while (nl > 0)
	{
		len++;
		nl /= 10;
	}
	return (len + is_neg);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		nb_len;
	long	nl;

	nb_len = get_nb_len(n);
	nl = n;
	ptr = ft_calloc(nb_len, sizeof(char));
	if (!ptr)
		return (NULL);
	if (nl < 0)
	{
		nl = -nl;
		ptr[0] = '-';
	}
	if (nl == 0)
		ptr[0] = '0';
	while (nl > 0)
	{
		ptr[nb_len - 1] = (nl % 10) + '0';
		nl /= 10;
		nb_len--;
	}
	return (ptr);
}

/*#include<stdio.h>
int	main()
{
	printf("%s", ft_itoa(12));
	return (0);
}*/