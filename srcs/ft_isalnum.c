/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:53:23 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/02 16:57:16 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	if (c >= 'a' && c <= 'z')
		return (8);
	if (c >= 'A' && c <= 'Z')
		return (8);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	printf("%d\n", ft_isalnum('$'));
	printf("%d\n", isalnum('$'));
	return (0);
}*/