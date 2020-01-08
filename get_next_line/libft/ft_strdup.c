/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 04:11:29 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/02 04:25:41 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	if ((p = (char *)malloc(sizeof(char) * (i + 1))))
	{
		i = 0;
		while (s1[i])
		{
			p[i] = s1[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
