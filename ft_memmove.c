/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:05:39 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 16:19:16 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	return (d);
}
