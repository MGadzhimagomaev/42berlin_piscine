/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:36:54 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/05 20:17:38 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_ln(char *p);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_ln;
	unsigned int	total_ln;
	unsigned int	i;

	dest_ln = str_ln(dest);
	total_ln = 0;
	i = 0;
	if (size > 0)
	{
		total_ln = dest_ln;
		while (src[i] && total_ln < size - 1)
		{
			dest[dest_ln + i] = src[i];
			total_ln++;
			i++;
		}
	}
	if (size && size >= dest_ln)
		dest[total_ln] = '\0';
	return (total_ln);
}

int	str_ln(char *p)
{
	unsigned int	len;

	len = 0;
	while (*p)
	{
		len++;
		p++;
	}
	return (len);
}
/*
#include <stdio.h>
int main()
{
	char	dest[50] = "Add here: ";
	char	src[] = "added!";
	char	*p1;
	char	*p2;

	p1 = &dest[0];
	p2 = &src[0];
	printf("dest: %s \nsrc: %s", p1, p2);
	ft_strlcat(dest, src, 17);
	printf("\nNew dest:%s", p1);
}*/
