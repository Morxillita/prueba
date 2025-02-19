/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:51:53 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:33:02 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	destl;
	size_t	strl;

	d = 0;
	s = 0;
	while (dst[d] != '\0' && d < size)
	{
		d++;
	}
	destl = d;
	strl = ft_strlen(src);
	if (size <= destl)
	{
		return (size + strl);
	}
	s = 0;
	while (src[s] != '\0' && (destl + s) < (size - 1))
	{
		dst[destl + s] = src[s];
		s++;
	}
	dst[destl + s] = '\0';
	return (destl + strl);
}
