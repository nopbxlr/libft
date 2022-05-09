/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:38:12 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/09 15:56:18 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	if (c >= 'A' && c <= 'Z')
		return (1024);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", isalpha('Z'));
	return (0);
}*/