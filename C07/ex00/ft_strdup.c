/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:29:16 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/10 20:59:51 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char	*src)
{
	int	ln;

	ln = 0;
	while (*src)
	{
		ln++;
		src++;
	}
	return (ln);
}

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
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
#include <stdio.h>
int	main(void)
{
	char *src = "Copy this";

	printf("Original: %s\nResult: %s", src, ft_strdup(src));
}//*/
