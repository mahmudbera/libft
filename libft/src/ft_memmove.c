/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:25:30 by makarago          #+#    #+#             */
/*   Updated: 2024/10/18 16:18:15 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*src_temp;
	unsigned char			*dest_temp;
	size_t					i;

	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
	if (dest_temp == src_temp || n == 0)
		return (dest_temp);
	if (dest_temp > src_temp)
	{
		while (n-- > 0)
			*(dest_temp + n) = *(src_temp + n);
		return (dest_temp);
	}
	if (dest_temp < src_temp)
	{
		i = 0;
		while (i < n)
		{
			*(dest_temp + i) = *(src_temp + i);
			i++;
		}
		return (dest_temp);
	}
	return (dest_temp);
}
