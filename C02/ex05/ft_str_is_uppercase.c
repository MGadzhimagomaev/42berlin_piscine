/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:26:24 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 15:40:54 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			is_uppercase = 0;
			break ;
		}
		str++;
	}
	return (is_uppercase);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "ALPHA bETA";
	char y[] = "THIS2ISNOT7";
	char z[] = "";
	char w[] = "ALPHABET";

	printf("Result 1: %d\n", ft_str_is_uppercase(x));
        printf("Result 2: %d\n", ft_str_is_uppercase(y));
        printf("Result 3: %d\n", ft_str_is_uppercase(z));
	printf("Result 3: %d\n", ft_str_is_uppercase(w));
}*/
