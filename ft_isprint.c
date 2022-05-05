/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:05:12 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/02 18:23:20 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	printf("%d\n", ft_isprint(33));
	printf("%d\n", isprint(33));
	return (0);
}*/