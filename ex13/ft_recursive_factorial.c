/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:52:33 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 20:14:13 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
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
	for (i = -2; i <= 7; i++)
		printf("%d\n",ft_recursive_factorial(i));
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
