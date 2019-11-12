/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:29:50 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/09 19:15:38 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	if (!s || (ft_strlen(s) < start) || len > ft_strlen(s) ||
		(!(str = (char *)malloc(sizeof(char) * (len + 1)))))
	{
		if (!(str = (char *)malloc(sizeof(char) * (1))))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	while (len-- > 0)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
