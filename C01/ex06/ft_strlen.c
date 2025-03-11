/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadzhim <mgadzhim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:17:02 by mgadzhim          #+#    #+#             */
/*   Updated: 2025/02/25 20:23:18 by mgadzhim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
int main(void)
{
	char	x[] = "severance";
	int	y;

	printf("Length of string a = %zu \n",strlen(x));
	y = ft_strlen(&x[0]);
	printf("The val is %d",y);
}
*/
