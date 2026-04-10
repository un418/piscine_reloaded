/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 12:04:37 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/10 14:34:39 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
• Create a program that displays its given arguments sorted by ascii order.
• It should display all arguments, except for argv[0].
• All arguments have to have their own line.
*/

/* 
Notes:
Process to sort:
Bubble sort is one of simplest:
* Compare to i + 1 
* if (argv[i] > argv[i+1])
	ft_swap(argv[i],argv[i+1])

*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
			continue ;
		}
		i++;
	}
	return (0);
}

// Code with debug
/* 
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("argv[%d]:%s\n",i,argv[i]);
		i++;
	}
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i],argv[i+1]) > 0)
		{
			ft_swap(&argv[i],&argv[i+1]);
			i = 1;
			continue;
		}
		i++;
	}
	i = 0;
	while (i < argc)
	{
		printf("argv[%d]:%s\n",i,argv[i]);
		i++;
	}
	return (0);
}
 */
