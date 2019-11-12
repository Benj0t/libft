/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:47:32 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/12 15:43:12 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(const char *str, char charset)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i] && str[i] != charset)
			count++;
		while (str[i] && str[i] != charset)
			i++;
	}
	return (count);
}

static int		ft_len_word(const char *str, char charset)
{
	static int	i;
	int			count;

	count = 0;
	while (str[i] && str[i] == charset)
		i++;
	while (str[i] && str[i] != charset)
	{
		count++;
		i++;
	}
	return (count);
}

static void		ft_fill(char *tab, const char *str, char charset)
{
	static int	i;
	int			j;

	j = 0;
	while (str[i] && str[i] == charset)
		i++;
	while (str[i] && str[i] != charset)
	{
		tab[j] = str[i];
		j++;
		i++;
	}
}

static void		*ft_free(char ***tab, int i)
{
	while (--i >= 0)
		free((*tab)[i]);
	free(*tab);
	return (NULL);
}

char			**ft_split(char const *str, char charset)
{
	char	**tab;
	int		i;
	int		tmp;
	int		count;

	if (!str)
		return (NULL);
	count = ft_count_word(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	tab[count] = 0;
	i = 0;
	while (i < count)
	{
		tmp = ft_len_word(str, charset);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (tmp + 1))))
			return (ft_free(&tab, i));
		tab[i++][tmp] = '\0';
	}
	i = 0;
	while (i <= count)
		ft_fill(tab[i++], str, charset);
	return (tab);
}
