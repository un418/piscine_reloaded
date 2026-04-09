/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:26:58 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 23:43:04 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a program that displays its given arguments.
*/
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
			ft_putchar(argv[i][c++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
