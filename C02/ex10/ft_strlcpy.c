/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:49:23 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/27 16:57:46 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcnt(char *src)
{
	int	len;

	len = 0;
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strcnt(src));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	x[] = "Hello, World";
	char	y[50];
	//char	y2[50];

	printf("x is %s, y is %s\n", x, y);
	ft_strlcpy(&y[0], &x[0], 13); 
        printf("x is %s, y is %s\n", x, y);
	strlcpy(&y2[0], &x[0], 12);
	printf("x is %s, y is %s", x, y);
}*/
