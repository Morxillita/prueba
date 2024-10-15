/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:40 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:05:33 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	char test1 = 'A';
	char test2 = 128;
	char test3 = 127;

	printf("Test con 'A' (65): %d\n", ft_isascii(test1));
	printf("Test con 128: %d\n", ft_isascii(test2));
	printf("Test con 127: %d\n", ft_isascii(test3));

	return (0);
}*/