/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:30:45 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/14 16:32:50 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && *lst && del)
	{
		if (*lst)
		{
			del((*lst)->content);
			ft_lstclear(&(*lst)->next, del);
			free(*lst);
			*lst = NULL;
		}
	}
}
