/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:02:57 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/11 20:21:01 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_length(int n)
{
	unsigned int	negative;
	unsigned int	size;

	size = 1;
	negative = 0;
	if (n < 0)
	{
		n = -n;
		negative = 1;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		size++;
	}
	return (size + negative);
}

char				*ft_itoa(int n)
{
	int				n_copy;
	char			*result;
	unsigned int	size;

	n_copy = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = get_length(n);
	if (n < 0)
		n = -n;
	if (!(result = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	result[size] = '\0';
	while (n > 9)
	{
		result[--size] = n % 10 + 48;
		n = n / 10;
	}
	if (n % 10 != 0 || (n == 0 && size == 1))
		result[--size] = n % 10 + 48;
	if (n_copy < 0)
		result[--size] = '-';
	return (result);
}
