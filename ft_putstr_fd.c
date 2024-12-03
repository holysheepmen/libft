/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:21:16 by opoure            #+#    #+#             */
/*   Updated: 2024/11/28 12:36:01 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <fcntl.h>
int     main(int ac, char *av[])
{
        int     fd;

        fd = open(av[1], O_RDWR);
        ft_putstr_fd("\nend!", fd);
        close(fd);
		return (0);
}
*/
