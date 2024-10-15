/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:10:46 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:03:54 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>   // Para printf

int	main(void)
{
	// Prueba con un dígito
	char c1 = '5';
	if (ft_isalnum(c1))
		printf("El carácter '%c' es alfanumérico.\n", c1);
	else
		printf("El carácter '%c' NO es alfanumérico.\n", c1);
}*/