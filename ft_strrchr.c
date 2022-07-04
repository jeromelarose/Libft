/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:29:02 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 15:46:28 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ret;

	ret = NULL;
	while (*s)
	{
		if (ft_strchr(s, c))
			ret = s;
		s++;
	}
	if (c == '\0')
		ret = s;
	return ((char*)ret);
}
