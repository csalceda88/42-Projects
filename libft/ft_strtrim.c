/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 01:24:24 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/05 02:59:58 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		a;
	int		b;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) == 0)
		return ((char *)s);
	a = ft_strlen(s) - 1;
	while (s[i] && ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' ')))
		i++;
	while ((a > i) && ((s[a] == '\t') || (s[a] == '\n') || (s[a] == ' ')))
		a--;
	if ((a - i) > 1)
		b = (a - i + 1);
	else
		b = 1;
	str = ft_strsub(s, i, b);
	return (str);
}
