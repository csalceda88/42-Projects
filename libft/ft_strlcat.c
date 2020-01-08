/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 05:45:27 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/02 06:00:24 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		n;
	size_t	len;
	int		s;

	i = 0;
	n = 0;
	s = 0;
	while (dst[i])
		++i;
	len = i;
	if (i < dstsize)
	{
		while (dstsize - i - 1 && src[n])
		{
			dst[i] = src[n];
			++i;
			++n;
		}
		dst[i] = '\0';
	}
	(dstsize < len) ? (s = len - dstsize) : 0;
	return (len + ft_strlen(src) - s);
}
