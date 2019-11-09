/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asubrama <asubrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 12:42:54 by asubrama          #+#    #+#             */
/*   Updated: 2019/09/07 03:21:02 by asubrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if (size <= 0)
		return (NULL);
	m = malloc(size);
	if (!m)
		return (NULL);
	ft_bzero(m, size);
	if (m)
		return (m);
	else
		return (NULL);
}
