/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:26:24 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 15:41:23 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			is_lowercase = 0;
			break ;
		}
		str++;
	}
	return (is_lowercase);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "alphaBeta";
	char y[] = "This 2 is not 1";
	char z[] = "";
	char w[] = "alphabet";

	printf("Result 1: %d\n", ft_str_is_lowercase(x));
        printf("Result 2: %d\n", ft_str_is_lowercase(y));
        printf("Result 3: %d\n", ft_str_is_lowercase(z));
	printf("Result 3: %d\n", ft_str_is_lowercase(w));
}*/
