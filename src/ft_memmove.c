/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:25:30 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:22:18 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*src_temp;
	unsigned char			*dst_temp;
	size_t					i;

	dst_temp = (unsigned char *)dst;
	src_temp = (const unsigned char *)src;
	if (dst_temp == src_temp || len == 0)
		return (dst_temp);
	if (dst_temp > src_temp)
	{
		while (len-- > 0)
			*(dst_temp + len) = *(src_temp + len);
		return (dst_temp);
	}
	if (dst_temp < src_temp)
	{
		i = 0;
		while (i < len)
		{
			*(dst_temp + i) = *(src_temp + i);
			i++;
		}
		return (dst_temp);
	}
	return (dst_temp);
}
