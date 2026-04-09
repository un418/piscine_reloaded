/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 22:24:00 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 22:44:43 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that displays a string of characters on the standard output.
*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

/*
#include <stdio.h>
int main(void)
{
	char str[] = "coucou";

	ft_putstr(str);
	ft_putstr("toto");
}
 */
