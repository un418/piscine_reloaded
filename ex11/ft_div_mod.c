/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:49:15 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 19:06:35 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main(void)
{
	int	div,mod;

	ft_div_mod(4,2,&div,&mod);
	printf("debug: div=%d mod=%d\n",div,mod);
	ft_div_mod(4,3,&div,&mod);
	printf("debug: div=%d mod=%d\n",div,mod);
}
 */
