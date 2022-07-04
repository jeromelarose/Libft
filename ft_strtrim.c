/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:23:17 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 21:46:48 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		size;
	int		end;
	char	*copy;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (--end >= 0)
		if (ft_strchr(set, s1[end]) == NULL)
			break ;
	index = -1;
	while (++index < end)
		if (ft_strchr(set, s1[index]) == NULL)
			break ;
	size = end - index + 1;
	copy = ft_substr(s1, index, size);
	return (copy);
}
