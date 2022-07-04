/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:37:32 by jelarose          #+#    #+#             */
/*   Updated: 2019/11/17 15:51:30 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_word(char const *s, char c)
{
	unsigned int	index;
	unsigned int	word;
	unsigned int	active;

	index = -1;
	word = 0;
	active = 1;
	while (s[++index])
	{
		if (s[index] != c && active == 1)
		{
			word++;
			active = 0;
		}
		else if (s[index] == c && active == 0)
			active = 1;
	}
	return (word);
}

static char			*fill_cell(char const *s, char c, unsigned int index)
{
	int		x;
	char	*cell;

	x = 0;
	while (s[index + x] && s[index + x] != c)
		x++;
	if (!(cell = malloc(sizeof(char) * x + 1)))
		return (NULL);
	cell[x] = '\0';
	x = -1;
	while (s[index + ++x] != c && s[index + x])
		cell[x] = s[index + x];
	return (cell);
}

static int			fill_array(char **array, char const *s, char c)
{
	int				index;
	unsigned int	index_y;
	unsigned int	index_x;
	unsigned int	active;

	active = 1;
	index = 0;
	index_y = -1;
	index_x = -1;
	while (s[index])
	{
		if (s[index] != c && active == 1)
		{
			active = 0;
			if (!(array[++index_y] = fill_cell(s, c, index)))
				return (-1);
		}
		if (s[index] == c && active == 0)
			active = 1;
		if (s[index])
			index++;
	}
	return (0);
}

static void			free_double_array(char **array)
{
	int	x;

	if (!array)
		return ;
	x = -1;
	while (array[++x])
		free(array[x]);
	array = NULL;
}

char				**ft_split(const char *str, char charset)
{
	char			**array;
	unsigned int	size;

	if (!str)
		return (NULL);
	size = count_word(str, charset);
	if (!(array = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	array[size] = NULL;
	if (size == 0)
		return (array);
	if (fill_array(array, str, charset) == -1)
	{
		free_double_array(array);
		return (NULL);
	}
	return (array);
}
