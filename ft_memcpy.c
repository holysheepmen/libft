/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:40:47 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 15:24:02 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if ((!dst && !src) && n > 0)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
//tester avec un seul null
int	main(void)
{
	char	*src1 = "hello";
	char	dst1[10] = {0};
	ft_memcpy(dst1, "hello", 5);
	printf("basic : %d\n", strcmp(dst1, src1));

	ft_memcpy(dst1, "blabla", 0);
	printf("size zero : %d\n", strcmp(dst1, src1));
//	memcpy(((void*)0), ((void*)0), 3);
//	ft_memcpy(((void*)0), ((void*)0), 3);
	return (0);
}
*/
