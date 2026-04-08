/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:43:49 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/08 22:16:21 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.
*/

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/* 
int	main(void)
{
	ft_is_negative(123);
	ft_is_negative(0);
	ft_is_negative(-12);
}
 */
