/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:30:05 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 18:47:00 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that swaps the value of two integers 
whose addresses are entered as parameters.
*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/* 
#include <stdio.h>
int	main(void)
{
	int	a,b;
	a = 1;
	b = 2;
	ft_swap(&a,&b);
	printf("debug: a=%d, b=%d",a,b);
}
 */
