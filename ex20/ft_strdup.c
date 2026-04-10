/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 12:01:44 by adaferna          #+#    #+#             */
/*   Updated: 2026/04/10 16:21:04 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Reproduce the behavior of the function strdup (man strdup)
DESCRIPTION
The  strdup()  function  returns a pointer to a new string 
which is a duplicate of the strings.
Memory for the new string is obtained with malloc(3),
and can be freed with free(3).
*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	return (dst);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) * sizeof(char));
	ft_strcpy(dst, src);
	return (dst);
}

/* 
#include <stdio.h>
int	main(void)
{
	char *dup;

	dup = ft_strdup("test");
	printf("%s", dup);
	free(dup);
	return 0;
}
 */
