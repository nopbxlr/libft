/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:21:41 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/10 21:30:08 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	l = *lst;
	*lst = NULL;
	while (l)
	{
		tmp = l->next;
		ft_lstdelone(l, del);
		l = tmp;
	}
}
