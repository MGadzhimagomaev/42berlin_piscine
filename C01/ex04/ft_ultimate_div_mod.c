/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:47:58 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/24 20:02:04 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_rem;

	temp_div = *a / *b;
	temp_rem = *a % *b;
	*a = temp_div;
	*b = temp_rem;
}
/*
int main(void)
{
	int x = 14;
	int y = 5;

	printf("Old values are:%d and %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);

	printf("New values are:%d and %d", x, y);
}
*/
