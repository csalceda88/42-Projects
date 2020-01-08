/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 01:48:49 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/06 23:58:51 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char		**x;
	size_t		word;
	size_t		index;
	size_t		i;
	size_t		t;

	index = 0;
	word = 0;
	i = -1;
	t = 0;
	if (!s || (!(x = (char **)ft_memalloc((
							ft_wcount(s, c) + 1) * sizeof(char *)))))
		return (NULL);
	while (s[++i])
	{
		if (word && s[i] == c)
			x[index++] = ft_strsub(s, t, i - t);
		if (!word && s[i] != c)
			t = i;
		word = (s[i] == c) ? 0 : 1;
	}
	if (word)
		x[index] = ft_strsub(s, t, i - t);
	return (x);
}
