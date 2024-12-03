/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:15:21 by opoure            #+#    #+#             */
/*   Updated: 2024/11/28 12:02:56 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size != 0)
	{
		if (count > 2147483647 / size)
			return (NULL);
	}
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	else
		ft_bzero(mem, (count * size));
	return (mem);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	size_t	a = 8;
	size_t	b = 18;
	void	*ft_Mem;
	void	*Mem;
	
	ft_Mem = ft_calloc(-5, -5);
	Mem = calloc(63823729, 28449270277 );
	printf("%d\n", memcmp(Mem, ft_Mem, 3));
	free(Mem);
	free(ft_Mem);
	return (0);
}
*/
