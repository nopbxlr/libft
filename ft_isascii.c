/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:57:47 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 15:59:16 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0x7F)
		return (1);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", isascii(-1));
	return (0);
}*/