/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:13:32 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/09 15:01:22 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int	main()
{
	int a = 10;
	int b = 0;
	int c = -1;
	int d = 3;
	int e = 20;
	int f = 35;
	int g = 40;
	int h = 44;
	printf("%ith number is %d\n", a, ft_fibonacci(a));
	printf("%ith number is %d\n", b, ft_fibonacci(b));
	printf("%ist number is %d\n", c, ft_fibonacci(c));
	printf("%ird number is %d\n", d, ft_fibonacci(d));
	printf("%ith number is %d\n", e, ft_fibonacci(e));
	printf("%ith number is %d\n", f, ft_fibonacci(f));
	printf("%ith number is %d\n", g, ft_fibonacci(g));
	printf("%ith number is %d\n", h, ft_fibonacci(h));
}//*/
