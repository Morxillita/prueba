/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:21:49 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:32:32 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	n1;
	size_t	n2;

	if (!s1 || !s2)
		return ((void *)0);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	result = (char *)malloc((n1 + n2 + 1) * sizeof (char));
	if (!result)
		return (result);
	ft_strlcpy(result, s1, n1 + 1);
	ft_strlcat(result, s2, n1 + n2 + 1);
	return (result);
}
