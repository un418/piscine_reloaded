/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:30:05 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 18:30:08 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that takes a pointer to int as a parameter,
and sets the value "42" to that int.
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* 
#include <stdio.h>
int	main(void)
{
	int	n;

	n = 1;
	
	ft_ft(&n);
	printf("debug:%d",n);
}
 */
