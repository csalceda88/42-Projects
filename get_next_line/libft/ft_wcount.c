/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:10:37 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/06 21:01:39 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcount(char const *s, char c)
{
	int r;
	int i;
	int stch;

	r = 0;
	i = 0;
	stch = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (stch == 1)
			{
				r = r + 1;
				stch = 0;
			}
		}
		else
			stch = 1;
		i = i + 1;
	}
	return (r);
}
