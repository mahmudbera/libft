/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:20:20 by makarago          #+#    #+#             */
/*   Updated: 2024/10/25 15:28:26 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			p_size;

	p_size = count * size;
	ptr = (unsigned char *)malloc(p_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < p_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
