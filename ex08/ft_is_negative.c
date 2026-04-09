/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:43:49 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 18:31:13 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 Create a function that displays ’N’ or ’P’ depending on the integer’s sign
entered as a parameter.
If n is negative, display ’N’. If n is positive or null, display ’P’.
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
