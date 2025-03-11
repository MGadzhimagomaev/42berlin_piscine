/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:05:09 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 20:27:57 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_match(char *str, char *to_find, int pos)
{
	int	j;

	j = 1;
	while (to_find[j])
	{
		if (str[pos + j] != to_find[j])
			return (0);
		else
			j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	match = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			match = find_match(str, to_find, i);
			if (match == 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *c = "Abcdefghij";
	char *f = "zaas";

	printf("%s", ft_strstr(c, f));
	
}*/
