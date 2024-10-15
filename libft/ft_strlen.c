/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngibelli <ngibelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:04:37 by ngibelli          #+#    #+#             */
/*   Updated: 2024/10/07 20:33:41 by ngibelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *test1 = "hola";

//     printf("La longitud de '%s' es: %d", test1, ft_strlen(test1));

//     return(0);
// }