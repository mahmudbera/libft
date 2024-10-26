/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:23:13 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:27:19 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*temp;
	unsigned char			c_temp;
	size_t					i;

	temp = (const unsigned char *)s;
	c_temp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temp[i] == c_temp)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}
