/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:02:48 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/03 02:05:08 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *c, const char *s)
{
	int i;
	int n;
	int len;

	i = 0;
	n = 0;
	len = 0;
	while (s[len])
		len++;
	if (len == 0)
		return ((char *)c);
	while (c[i])
	{
		while (s[n] == c[i + n])
		{
			if (n == len - 1)
				return ((char *)c + i);
			n++;
		}
		n = 0;
		i++;
	}
	return (0);
}
