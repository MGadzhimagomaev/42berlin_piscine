/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:57:13 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 17:53:27 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	ln;
	int	i;

	ln = 0;
	while (dest[ln])
	{
		ln++;
	}
	i = 0;
	while (src[i])
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
    ft_strcat(dest, src);
    printf("After strcat: '%s'\n", dest);
    return 0;
}*/
