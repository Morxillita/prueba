/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:21:53 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/15 18:12:53 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
//#include <stdio.h>

/*int main(void)
{
	char c1 = 'A';
	if (ft_isalpha(c1))
		printf("El carácter '%c' es una letra.\n", c1);
	else
		printf("El carácter '%c' NO es una letra.\n", c1);
}*/
