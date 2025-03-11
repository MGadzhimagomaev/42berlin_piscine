/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:06:56 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/06 21:23:09 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = '\0';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write (1, &c, 1);
}
/*
#include <limits.h>
#include <stdio.h>
int	main()
{
	int	i = INT_MIN;
	int     i2 = INT_MAX;
        int     i3 = -7483648;
	int     i4 = 0;
        int     i5 = 73648;

	ft_putnbr(i);
	printf("\n");
	ft_putnbr(i2);
	printf("\n");
	ft_putnbr(i3);
	printf("\n");
	ft_putnbr(i4);
	printf("\n");
	ft_putnbr(i5);
}//*/
