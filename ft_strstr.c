/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asubrama <asubrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:43:28 by asubrama          #+#    #+#             */
/*   Updated: 2019/08/11 16:08:12 by asubrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	int len;

	if (!*needle)
		return ((char *)hay);
	len = ft_strlen(needle);
	while (*hay)
	{
		if (ft_strncmp(hay, needle, len) == 0)
			return ((char *)hay);
		hay++;
	}
	return (NULL);
}
