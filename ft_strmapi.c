/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:09:50 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/17 13:51:10 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*copy;

	index = -1;
	if (!s || !(copy = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++index])
		copy[index] = (*f)(index, s[index]);
	copy[index] = '\0';
	return (copy);
}
