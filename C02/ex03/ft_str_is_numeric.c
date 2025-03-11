/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:04:20 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 15:20:06 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			is_numeric = 0;
			break ;
		}
		str++;
	}
	return (is_numeric);
}
/*
#include <stdio.h>
int main()
{
	char	w[] = "Alphabet";
	char	x[] = "1121212222";
	char	y[] = "";
	char	z[] = "111a22";
	char	a[] = "111 22";

	printf("Result 1 is: %d\n", ft_str_is_numeric(w));
	printf("Result 2 is: %d\n", ft_str_is_numeric(x));
	printf("Result 3 is: %d\n", ft_str_is_numeric(y));
	printf("Result 4 is: %d\n", ft_str_is_numeric(z));
	printf("Result 5 is: %d\n", ft_str_is_numeric(a));
}*/
