/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:52:16 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 01:52:48 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char	to_find;
	char	*result;

	to_find = (char)c;
	i = 0;
	result = NULL;
	while (str[i])
	{
		if (str[i] == to_find)
			result = (char *)&str[i];
		i++;
	}
	if (to_find == '\0')
		result = (char *)&str[i];
	return (result);
}
