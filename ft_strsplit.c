/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asubrama <asubrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:38:53 by asubrama          #+#    #+#             */
/*   Updated: 2019/09/07 22:02:23 by asubrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**t;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(t = (char **)ft_memalloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i + k] != c && s[i + k])
				k++;
			t[j++] = ft_strsub(s, i, k);
			i += k - 1;
			k = '\0';
		}
		i++;
	}
	return (t);
}
