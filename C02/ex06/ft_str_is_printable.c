/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:25:45 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 17:25:52 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			is_printable = 0;
			break ;
		}
		str++;
	}
	return (is_printable);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "ALPHA bETA	";
	char y[] = "THIS2ISNOT7\0";
	char z[] = "";
	char w[] = "ALPHABET";

	printf("Result 1: %d\n", ft_str_is_printable(x));
        printf("Result 2: %d\n", ft_str_is_printable(y));
        printf("Result 3: %d\n", ft_str_is_printable(z));
	printf("Result 3: %d\n", ft_str_is_printable(w));
}*/
