/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:19:53 by opoure            #+#    #+#             */
/*   Updated: 2024/11/20 23:35:23 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	if (ft_memcmp("AAA", "AAB", 3) != memcmp("AAA", "AAB", 3))
		printf("basic fail\n");
        if (ft_memcmp("AAB", "AAA", 2) != memcmp("AAB", "AAA", 2))
                printf("limites fail\n");
        if (ft_memcmp("\x01\x02\x03", "\x01\x02\x04", 3) != memcmp("\x01\x02\x03", "\x01\x02\x04", 3))
                printf("speciaux fail\n");
        if (ft_memcmp("AAB", "AAA", 0) != memcmp("AAB", "AAA", 0))
                printf("empty fail");
        if (ft_memcmp(NULL,NULL, 0) != memcmp(NULL, NULL, 0))
		printf("null fail");
	printf("fin\n");
        return (0);
}
*/
