/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:54:35 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/06 17:25:04 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	ln;

	ln = 0;
	while (*str)
	{
		ln++;
		str++;
	}
	return (ln);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "Four";

	printf("The length of \"%s\" is %d", str, ft_strlen(str));
}//*/
