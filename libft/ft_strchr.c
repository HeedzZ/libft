/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:23:02 by ymostows          #+#    #+#             */
/*   Updated: 2023/11/08 12:23:02 by ymostows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (unsigned char)c)
		return ((char *)s);
	if (!*s)
		return (0);
	return (ft_strchr(s + 1, c));
}
