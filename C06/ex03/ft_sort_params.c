/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:37:18 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/03/08 17:31:02 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ascii_diff(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (*c1 && *c2 && c1[i] == c2[i])
	{
		i++;
	}
	return (c1[i] - c2[i]);
}

void	str_swap(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swapper;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (i + j + 1 < argc)
		{
			if (ascii_diff(argv[i], argv[i + j + 1]) > 0)
			{
				swapper = argv[i];
				argv[i] = argv[i + j + 1];
				argv[i + j + 1] = swapper;
			}
			j++;
		}
		i++;
	}
}

void	str_print(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	str_swap(argc, argv);
	str_print(argv);
}
