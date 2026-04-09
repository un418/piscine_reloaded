/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 22:51:23 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/09 23:00:50 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the function strlen (man strlen)
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int main(void)
{

	printf("%d",ft_strlen("12345"));
	printf("%d",ft_strlen("123"));
	printf("%d",ft_strlen(""));
	return 0;
}
 */
