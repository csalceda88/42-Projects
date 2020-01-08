/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 05:02:46 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/03 04:10:12 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;
	char	ch;

	n = 0;
	ch = c;
	while (s[n] != ch)
	{
		if ((ft_strlen(s) == n) && (s[n] != ch))
			return (NULL);
		n++;
	}
	return ((char *)&s[n]);
}
