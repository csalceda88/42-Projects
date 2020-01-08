/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 05:26:45 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/02 05:42:54 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	ch;

	ch = c;
	i = ft_strlen(s);
	while (s[i] != ch)
	{
		if ((i == 0) && (s[i] != ch))
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}
