/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalceda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 04:03:12 by csalceda          #+#    #+#             */
/*   Updated: 2019/09/05 04:33:26 by csalceda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n;

	if (!(n = (t_list *)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		n->content = NULL;
		n->content_size = 0;
	}
	else
	{
		if (!(n->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(n->content, content, content_size);
		n->content_size = content_size;
	}
	n->next = NULL;
	return (n);
}
