/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:22:40 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/10 17:26:03 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
• Create a function ft_range which returns an array ofints.
	This int array should contain all values between min and max.
• Min included - max excluded
• If min´value is greater or equal to max’s value,
	a null pointer should be returned.
*/

#include <stdlib.h>

int	ft_count_range(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	i_max;
	int	*range;

	if (min >= max)
		return (0);
	i = 0;
	i_max = ft_count_range(min, max);
	range = malloc(i_max * sizeof(int));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/* 
#include <stdio.h>
int main(void)
{
	int	*array;
	int	size;

	size = ft_count_range(-2,6);
	printf("size:%d\n",size);

	array = ft_range(-2,6);
	for (int i = 0; i < size; i++ )
		printf("%d\n",array[i]);
	return 0;
}
 */
