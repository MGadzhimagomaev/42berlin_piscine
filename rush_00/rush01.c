/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:58:19 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/22 19:06:20 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
				ft_putchar('/');
			else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('\\');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
