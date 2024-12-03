/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:02:16 by opoure            #+#    #+#             */
/*   Updated: 2024/11/28 12:55:22 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int     main(int ac, char *av[])
{
        int     fd;

        fd = open(av[1], O_WRONLY);
        ft_putendl_fd("blabla", fd);
        close(fd);
        return (0);
}
*/
