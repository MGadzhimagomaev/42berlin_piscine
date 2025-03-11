/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:51:53 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/11 19:36:33 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;
	int	j;

	i = 0;
	total_len = 0;
	while (sep[i])
	{
		i++;
	}
	total_len = (size - 1) * i;
	i = 0;
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			total_len += 1;
			j++;
		}
		i++;
	}
	total_len++;
	return (total_len);
}

int	str_cpy(char *dest, char *src, int pos)
{
	while (*src)
	{
		dest[pos++] = *src;
		src++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		total_len;
	int		i;
	int		pos;

	if (size <= 0)
	{
		output = (char *) malloc(sizeof(char));
		pos = 0;
	}
	else
	{
		total_len = str_total_len(size, strs, sep);
		output = (char *) malloc(sizeof(char) * total_len);
		i = 0;
		pos = 0;
		while (i < size && strs[i])
		{
			pos = str_cpy(output, strs[i++], pos);
			if (i - 1 < size - 1)
				pos = str_cpy(output, sep, pos);
		}
	}
	output[pos] = '\0';
	return (output);
}
/*
int	main(int argc, char **argv)
{
	char	**s = (char **) malloc(sizeof(char *) * (argc - 1));
	char	*sep = " --- ";
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		s[i] = argv[i + 1];
		i++;
	}
	printf("Result: %s", ft_strjoin(argc - 1, s, sep));
	return (0);
}//*/
