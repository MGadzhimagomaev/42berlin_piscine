/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:57:10 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/09 17:17:22 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	x = 1;
	while (i <= power)
	{
		x *= nb;
		i++;
	}
	return (x);
}
/*
#include <stdio.h>
int	main()
{
	int	x = 2;
	int	power = 6;

	printf("%d", x, power, ft_iterative_power(x, power));	
}*/
