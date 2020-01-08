/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 04:35:09 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/05 05:12:46 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*n;
	t_list	*t;

	if (alst != NULL)
	{
		n = *alst;
		while (n != NULL)
		{
			if (del != NULL)
				(*del)(n->content, (*n).content_size);
			t = n->next;
			free(n);
			n = t;
		}
		*alst = NULL;
	}
}
