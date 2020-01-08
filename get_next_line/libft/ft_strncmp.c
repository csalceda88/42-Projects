/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:26:22 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/02 04:00:40 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((*p1 && (*p1 == *p2)) && --n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1 += 1;
		p2 += 1;
	}
	return (*p1 - *p2);
}
