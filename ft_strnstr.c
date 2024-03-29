/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:39 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/09 19:01:11 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i <= len)
	{
		if (ft_strncmp(str + i, to_find, ft_strlen(to_find)) == 0)
			if ((i + ft_strlen(to_find)) <= len)
				return ((char *)str + i);
		i++;
	}
	return (0);
}
