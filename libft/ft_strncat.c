/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:47:50 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/02 02:53:38 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t	s;
	size_t	i;
	char	*ptr;

	s = 0;
	i = 0;
	ptr = s1;
	while (s1[s] != '\0')
		s++;
	while ((s2[i] != '\0') && i < n)
	{
		s1[s] = s2[i];
		i++;
		s++;
	}
	s1[s] = '\0';
	s1 = ptr;
	return (s1);
}
