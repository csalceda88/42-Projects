/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:41:05 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/06 04:41:09 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		*p1++ = *p2++;
	return (dest);
}
