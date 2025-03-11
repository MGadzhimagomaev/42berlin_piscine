/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:13:19 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/03 16:49:02 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	step;
	int	i;

	i = 0;
	step = 'A' - 'a';
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= step;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	x[] = "cheCk thIS STRing 312}{][";

	ft_strlowcase(x);
	printf("%s", x);
}//*/
