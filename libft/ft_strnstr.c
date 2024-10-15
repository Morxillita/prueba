/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:02 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:36:19 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	j = 0;
	while ((big[j]) && (j < len))
	{
		i = 0;
		while (little[i] && big[i + j] && (big[i + j] == little[i]) \
				&& (i + j < len))
		{
			i++;
		}
		if (!little[i])
			return ((char *)(&big[j]));
		j++;
	}
	return ((void *)0);
}
