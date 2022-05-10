/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:00:46 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/10 21:08:12 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (*lst)
	{
		l = *lst;
		l = ft_lstlast(l);
		l->next = new;
	}
	else
		*lst = new;
}
