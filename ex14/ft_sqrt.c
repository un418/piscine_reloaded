/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 20:15:15 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 20:45:56 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that returns the square root of a number (if it exists),
or 0 if the square root is an irrational number.
*/

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int	i;
	for (i = -2; i <= 20; i++)
		printf("i=%d  sqrt=%d\n",i,ft_sqrt(i));
}
 */
