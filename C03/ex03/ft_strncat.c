/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:54:29 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 18:04:19 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ln;
	unsigned int	i;

	ln = 0;
	while (dest[ln])
	{
		ln++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[ln + i] = src[i];
		i++;
	}
	dest[ln + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    printf("Before strcat: '%s'\n", dest);
    ft_strncat(dest, src, 3);
    printf("After strcat: '%s'\n", dest);
    return 0;
}*/
