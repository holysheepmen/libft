/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:32:39 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 00:45:33 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp++) = (unsigned char) c;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ftstr[10];
	char	str[10];
	ft_memset(ftstr, 'A', sizeof(ftstr));
	memset(str, 'A', sizeof(str));
	printf("basic : %d\n", memcmp(ftstr, str, sizeof(str)));
	return (0);
}
*/
