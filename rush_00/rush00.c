/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:58:19 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/22 19:02:34 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if ((j > 0 && j < x - 1) && (i == 0 || i == y - 1))
				ft_putchar('-');
			else if ((i > 0 && i < x - 1) && (j == 0 || j == x - 1))
				ft_putchar('|');
			else if (i > 0 && i < y - 1 && j > 0 && j < x - 1)
				ft_putchar(' ');
			else
				ft_putchar('o');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
