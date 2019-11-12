/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:44:27 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/08 14:51:07 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char *str)
{
	int i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}
