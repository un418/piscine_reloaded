/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 23:04:11 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 23:25:41 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the function strcmp (man strcmp)
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

/*
#include <stdio.h>
int main (void)
{
	printf("%d\n",ft_strcmp("toto","toto"));
	printf("%d\n",ft_strcmp("toto","t"));
	printf("%d\n",ft_strcmp("","toto"));
}
 */
