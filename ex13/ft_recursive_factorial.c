/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:52:33 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/10 16:54:50 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 15)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/* 
#include <stdio.h>
int main(void)
{
	int	i;
	for (i = -2; i <= 30; i++)
		printf("Fact%d:%d\n",i,ft_recursive_factorial(i));
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

2147483647
2004310016
2004189184
Fact16:20922789888000 over int limit
*/
