/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:38:59 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/24 16:29:04 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main(void)
{
	int 	x;
	int	y;
	int	*p;
	int	*p2;

	x = 5;
	y = 10;
	p = &x;
	p2 = &y;

        printf("Before x was %d and y was %d.", x, y);

	ft_swap(p, p2);

	printf("Now x is %d and y is %d.", x, y);
}
*/
