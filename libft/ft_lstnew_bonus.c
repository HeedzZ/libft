/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:51:50 by ymostows          #+#    #+#             */
/*   Updated: 2023/11/14 15:51:52 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlink;

	newlink = malloc(sizeof(t_list));
	if (!newlink)
		return (0);
	newlink->content = content;
	newlink->next = 0;
	return (newlink);
}
