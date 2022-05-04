/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:07:38 by ctherin           #+#    #+#             */
/*   Updated: 2022/05/04 21:10:45 by ctherin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 'a' && a <= 'z')
		return (c - 32);
	return (c);
}