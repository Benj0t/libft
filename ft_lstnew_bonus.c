/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:53:40 by bemoreau          #+#    #+#             */
/*   Updated: 2019/11/06 16:53:42 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (0);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
