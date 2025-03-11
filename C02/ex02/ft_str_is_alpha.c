/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:26:24 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 15:02:36 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			is_alpha = 0;
			break ;
		}
		str++;
	}
	return (is_alpha);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "alpha beta";
	char y[] = "This 2 is not 1";
	char z[] = "";
	char w[] = "alphabet";

	printf("Result 1: %d\n", ft_str_is_alpha(x));
        printf("Result 2: %d\n", ft_str_is_alpha(y));
        printf("Result 3: %d\n", ft_str_is_alpha(z));
	printf("Result 3: %d\n", ft_str_is_alpha(w));
}*/
