/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:26:14 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/24 19:44:42 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	temp;
	int	min_val_index;
	int	i_cnt;

	start = 0;
	while (start < size - 1)
	{
		min_val_index = start;
		i_cnt = start;
		while (i_cnt < size - 1)
		{
			if (tab[min_val_index] > tab[i_cnt + 1])
			{
				min_val_index = i_cnt + 1;
			}
			i_cnt ++;
		}
		temp = tab[start];
		tab[start] = tab[min_val_index];
		tab[min_val_index] = temp;
		start++;
	}
}
/*
int main(void)
{
	int c[9] = {12, 3, 1, 55, 22, 100, 2, 7, 6};
	int i;
	int size;

	i = 0;
	size = 9;
	while (i < size)
	{
		printf("Element %d is: %d\n", i, c[i]);
		i++;
	}

	ft_sort_int_tab(c, size);

	i = 0;
        while (i < size)
        {
                printf("Element %d is: %d\n", i, c[i]);
		i++;
        }
}
*/
