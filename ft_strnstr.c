/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:00:08 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 16:19:48 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;

	if (*src == '\0')
		return ((char*)dest);
	if (len == 0)
		return (NULL);
	while (*dest && ft_strlen(dest) >= ft_strlen(src) && len > 0)
	{
		i = 0;
		while (dest[i] == src[i] && i < len && src[i])
			i++;
		if (src[i] == '\0')
			return ((char*)dest);
		dest++;
		len--;
	}
	return (NULL);
}
