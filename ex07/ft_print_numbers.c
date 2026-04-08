/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:43:49 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/08 22:10:32 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.
*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

/* 
int	main(void)
{
	ft_print_numbers();
}
 */
