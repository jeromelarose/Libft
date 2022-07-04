/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:50:59 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 16:17:06 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j;
	size_t	ret;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		ret = len_src + size;
	else
		ret = len_src + len_dest;
	j = 0;
	if (size > len_dest)
	{
		while (src[j] != '\0' && (len_dest + j + 1) < size)
		{
			dest[len_dest + j] = src[j];
			j++;
		}
		dest[len_dest + j] = '\0';
	}
	return (ret);
}
