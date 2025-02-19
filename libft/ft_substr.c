/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:08:09 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:37:26 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	min(size_t n1, size_t n2)
{
	if (n1 < n2)
	{
		return (n1);
	}
	return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n_s;
	size_t	n_res;
	char	*result;

	if (!s)
		return (NULL);
	n_s = ft_strlen(s);
	if (start >= n_s)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	n_res = min(n_s - start, len);
	result = (char *)malloc((n_res + 1) * sizeof (char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s[start], n_res + 1);
	return (result);
}
