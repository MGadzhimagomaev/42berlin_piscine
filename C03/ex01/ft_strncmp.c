/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:14:49 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 17:52:58 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
        const char      *a[4];
        const char      *b[4];
        char            *c[4];
        char            *d[4];

        *c = "ABJFCJ"; 
        *d = "ABJDSR";
        *a = *c;
        *b = *d;

        printf("%d\n",strncmp(a[0], b[0], 3));
        printf("%d",ft_strncmp(c[0], d[0], 3));
}//*/
