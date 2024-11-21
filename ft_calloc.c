/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:15:21 by opoure            #+#    #+#             */
/*   Updated: 2024/11/20 18:21:35 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count * size > 2147483647)
		return (NULL);
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
//	size_t	count = -5;
//	size_t	size = -5;
	void	*ft_Mem;
	void	*Mem;
	
	ft_Mem = ft_calloc(-5, -5);
	Mem = calloc(63823729, 28449270277 );
	printf("%d\n", memcmp(Mem, ft_Mem, 3));
	free(Mem);
	return (0);
}
*/
