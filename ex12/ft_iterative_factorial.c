/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:05:55 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 19:51:25 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create an iterated function that returns a number.
This number is the result of a factorial operation
based on the number given as a parameter.
 */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
			fact = fact * nb--;
		return (fact);
	}
}

/*
#include <stdio.h>
int main(void)
{
	int	i;
	for (i = -2; i <= 7; i++)
		printf("%d\n",ft_iterative_factorial(i));
}
 */

/*
0	1
1	1
2	2
3	6
4	24
5	120
6	720
7	5040
*/
