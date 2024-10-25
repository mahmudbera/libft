/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:26:52 by makarago          #+#    #+#             */
/*   Updated: 2024/10/10 10:33:25 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int ab, int fd)
{
	if (ab == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ab = 147483648;
	}
	if (ab < 0)
	{
		ft_putchar_fd('-', fd);
		ab *= -1;
	}
	if (ab <= 9)
		ft_putchar_fd(ab + '0', fd);
	if (ab > 9)
	{
		ft_putnbr(ab / 10, fd);
		ft_putnbr(ab % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
