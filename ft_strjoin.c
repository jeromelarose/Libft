/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:11:32 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 21:10:56 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		index;
	int		index2;
	char	*copy;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(copy = malloc(sizeof(char) * size + 1)))
		return (NULL);
	index = -1;
	while (s1[++index])
		copy[index] = s1[index];
	index2 = -1;
	while (s2[++index2])
		copy[index++] = s2[index2];
	copy[index] = 0;
	return (copy);
}
