/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:23:13 by makarago          #+#    #+#             */
/*   Updated: 2024/10/25 19:32:08 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t length)
{
	const unsigned char		*temp;
	unsigned char			ch_temp;
	size_t					i;

	temp = (const unsigned char *)ptr;
	ch_temp = (unsigned char)ch;
	i = 0;
	while (i < length)
	{
		if (temp[i] == ch_temp)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}
