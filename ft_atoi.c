/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:39:13 by opoure            #+#    #+#             */
/*   Updated: 2024/11/20 18:14:07 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;

	i = 0;
	signe = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= signe;
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("ft_atoi : %d\n", ft_atoi("               -21474836487a537    "));
	printf("atoi : %d\n", atoi("               -21474836487a537    "));
	printf("ft_atoi : %d\n", ft_atoi(""));
	printf("atoi : %d\n", atoi(""));
}
*/
