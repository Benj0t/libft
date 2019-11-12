/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:10:34 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/05 15:48:35 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
		if (charset[i++] == c)
			return (1);
	return (0);
}
