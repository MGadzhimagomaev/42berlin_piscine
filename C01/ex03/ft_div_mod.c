/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:46:02 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/24 16:27:49 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int 	z;
	int	w;
	int 	x;
	int	y;
	int	*p;
	int	*p2;

	x = 14;
	y = 5;
	p = &z;
	p2 = &w;

        printf("Before z was %d and w was %d.", z, w);

	ft_div_mod(x, y, p, p2);

	printf("Now z is %d and w is %d.", z, w);

}
*/
