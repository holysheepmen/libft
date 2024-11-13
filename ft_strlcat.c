#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	
//	if (!src)
//		len_src = 0;
//	else 
		len_src = ft_strlen(src);
	i = 0;
	if (!dst)
		len_dst = 0;
	else
		len_dst = ft_strlen(dst);
	if ((dstsize == 0) || (len_dst >= dstsize))
		return (len_src + dstsize);
	while (i < (dstsize - len_dst - 1) && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] =  '\0';
	return (len_src + len_dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *b = " aaaaaaaaaaah !";
	printf("%d\n", ft_strlcat(((void *)0), b, 0));
	printf("%d\n", strncat(((void *)0), b, 0));
	return(0);
}

 * src and dst must be nul terminated
 * dst + src 
 * dstsize - strlen(dst) - 1
 * => strlen(dst) est compris dans dstsize
 *if dstsize == 0 ou strlen(dst) >= dstsize)
 *	PAS DE NUL
 *lensrc + lendst
 */
