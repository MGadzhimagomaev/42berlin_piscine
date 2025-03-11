/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:30:54 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/03 19:52:21 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	step;
	int	i;

	step = 'A' - 'a';
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ((str[i - 1] >= 32 && str[i - 1] <= 126)
					&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z') 
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))))
				str[i] += step;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!(i == 0 || ((str[i - 1] >= 32 && str[i - 1] <= 126)
						&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
							|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))))
				str[i] -= step;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	x[] = "salut, comMEnt tu vAs ? 42mots quarAnte-deux; cinq?uante+et+un";

	ft_strcapitalize(x);
	printf("%s", x);
}//*/
