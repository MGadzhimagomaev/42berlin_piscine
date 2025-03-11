/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:35:23 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/09 15:52:24 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int	a = 1;
	int     b = 7;
	int     c = 17;
	int     d = 24;
	int     e = 14583;
	int     f = 999;

	printf("Result for %d is: %d\n", a, ft_is_prime(a));
	printf("Result for %d is: %d\n", b, ft_is_prime(b));
	printf("Result for %d is: %d\n", c, ft_is_prime(c));
	printf("Result for %d is: %d\n", d, ft_is_prime(d));
	printf("Result for %d is: %d\n", e, ft_is_prime(e));
	printf("Result for %d is: %d\n", f, ft_is_prime(f));
}*/
