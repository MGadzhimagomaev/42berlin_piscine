/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:06:38 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/22 19:17:55 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush03(int x, int y);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush04(int x, int y);

int	main(void)
{
	rush03(0, 0);
	rush00(0, 0);
	rush01(0, 0);
	rush02(0, 0);
	rush04(5, 5);
	return (0);
}
