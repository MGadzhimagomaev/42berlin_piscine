/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:56:09 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/24 18:24:34 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[end];
		tab[end] = tab[start];
		tab[start] = temp;
		start++;
		end--;
	}
}
/*
int main(void)
{
	int	c[5] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = 5;

	while(i < size)
	{
		printf("Value %d: %d\n", i, c[i]);
		i++;
	}

	ft_rev_int_tab(c, size);

	i = 0;
	while(i < size)
        {
                printf("Value %d: %d\n", i, c[i]);
		i++;
        }

}*/
