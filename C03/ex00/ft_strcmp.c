/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:42:16 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 17:52:06 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char	*a[4];
	const char	*b[4];
	char		*c[4];
	char		*d[4];

	*c = "JBJ"; 
	*d = "ABJ";
	*a = *c;
	*b = *d;

	printf("%d\n",strcmp(a[0], b[0]));
	printf("%d",ft_strcmp(c[0], d[0]));
}//*/
