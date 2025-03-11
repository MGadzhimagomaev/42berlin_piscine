/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:44:06 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/03 16:41:26 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
void	ft_putchar(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;	
	}
}

int main(void)
{
	char	x[] = "Some words   . ";
	char	y[] = "Other stuff";
	unsigned int	length = 7;

	ft_putchar(x);
	write(1, "\n", 1);
	ft_strncpy(x, y, length);
	ft_putchar(x);
	
	write(1, "\n", 1);
	strncpy (x, y, length);
	ft_putchar(x);
}//*/
