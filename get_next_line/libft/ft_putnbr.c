/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:03:57 by csalceda          #+#    #+#             */
/*   Updated: 2019/08/22 00:12:34 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int s;

	s = 0;
	if (n >= 0)
		s = n;
	if (n < 0)
	{
		s = n * -1;
		ft_putchar('-');
	}
	if (s > 9)
		ft_putnbr(s / 10);
	ft_putchar((s % 10) + '0');
}