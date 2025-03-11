/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:11:11 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/10 21:00:21 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = (int *) malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i++] = min++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main (int argc, char **argv)
{
	int	i;
	int	*s = ft_range(atoi(argv[1]), atoi(argv[2]));

	i = 0;
	if (argc != 3)
		return (0);
	else 
		while (i < atoi(argv[2]) - atoi(argv[1]))
		{
			printf("%d\n", s[i]);
			i++;
		}
	return (0);
}*/
