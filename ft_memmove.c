/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:25:05 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 00:32:20 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overlap(char *dst, char *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (overlap(tmp_dst, tmp_src, len))
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}

static int	overlap(char *dst, char *src, size_t len)
{
	if (src < dst && src + len > dst)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char a[] = "01234";
	char *b;

	b = a + 1;
	printf("normalement 1 : %d \n", overlap(a,b));
	
	char c[] = "blabla";
	char d[] = "brrrrrr";
	printf("normalement 0 : %d \n", overlap(c,d));	
	return (0);
}
*/
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "012345678";
	char	*dst;

	dst = src + 1;
	printf("dst avant ft_memmove :%s\n", src);
	ft_memmove(NULL, NULL, 8) ;
	printf("dst apres ft :%s\n", src);

	char	asrc[] = "012345678";
	char	*adst;

	adst = asrc + 1;
	printf("dst avant memmove :%s\n", asrc);
	memmove(NULL, NULL, 8);
	printf("dst apres :%s\n", asrc);
	return (0);
}
*/
