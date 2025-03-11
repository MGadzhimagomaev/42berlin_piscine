/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:14:02 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/09 15:34:31 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	odd;
	int	cnt;

	odd = 1;
	cnt = 0;
	while (nb - odd >= 0)
	{
		nb -= odd;
		odd += 2;
		cnt++;
	}
	if (nb == 0)
		return (cnt);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int	a = 225;
	int	b = 16;
	int	c = 229;
	int	d = 0;
	int	e = -16;

	printf("sqrt of %d is %d\n", a, ft_sqrt(a));
	printf("sqrt of %d is %d\n", b, ft_sqrt(b));
	printf("sqrt of %d is %d\n", c, ft_sqrt(c));
	printf("sqrt of %d is %d\n", d, ft_sqrt(d));
	printf("sqrt of %d is %d\n", e, ft_sqrt(e));
}*/
