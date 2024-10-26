/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:27:00 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:34:07 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	temp;

	if (!s)
		return ;
	temp = 0;
	while (s[temp])
	{
		write(fd, &s[temp++], 1);
	}
}
