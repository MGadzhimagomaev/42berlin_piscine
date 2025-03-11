/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:48:56 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/26 13:00:16 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <unistd.h>
void    ft_putstr(char *str)
{
        while (*str != '\0')
        {
                write(1, str, 1);
                str++;
        }
}

int main()
{
	char	x[10] = "World";
	char	*y = "Hello";
	char	*p = &x[0];

	//p2 = &y;
	ft_putstr(p);
	write(1, "\n", 1);
	ft_strcpy(x, y);
	ft_putstr(p);
	write(1, "\n", 1);
	strcpy(x, y);
	ft_putstr(p);
}
*/
