/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:10:32 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/04 19:18:53 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nmemb > LONG_MAX || size > LONG_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*int main()
{
	int *ptr = ft_calloc(1, 1);
	(void)ptr;
	return (0);
}*/
