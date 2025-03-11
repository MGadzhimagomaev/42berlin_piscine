/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:05:47 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/10 21:03:27 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *) malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i++] = min++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*rng = NULL;
	int	i = 0;
	int	len;
	
	len = ft_ultimate_range(&rng, atoi(argv[1]), atoi(argv[2]));
	if (argc == 3)
	{
		printf("Len is %d\n", len);
		while (i < atoi(argv[2]) - atoi(argv[1]))
		{
			printf("%d\n", rng[i++]);
		}
	}
	//free(rng);
}*/
