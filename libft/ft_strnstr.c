/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 00:57:09 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/04 00:43:30 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t l;

	i = 0;
	if (!*n)
		return ((char*)h);
	while (h[i] != '\0' && i < len)
	{
		l = 0;
		while (n[l] == h[i + l] && i + l < len)
		{
			if (n[l++ + 1] == '\0')
				return ((char*)h + i);
		}
		i++;
	}
	return (0);
}
