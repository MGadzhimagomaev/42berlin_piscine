/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:23:36 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/09 17:17:41 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	int	a = 1;
	int     b = -47;
	int     c = 17;
	int     d = 24;
	int     e = 14583;
	int     f = 999;

	printf("Next for %d is: %d\n", a, ft_find_next_prime(a));
	printf("Next for %d is: %d\n", b, ft_find_next_prime(b));
	printf("Next for %d is: %d\n", c, ft_find_next_prime(c));
	printf("Next for %d is: %d\n", d, ft_find_next_prime(d));
	printf("Next for %d is: %d\n", e, ft_find_next_prime(e));
	printf("Next for %d is: %d\n", f, ft_find_next_prime(f));	
}*/
