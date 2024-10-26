/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:26:05 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:19:52 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s_temp;

	i = 0;
	s_temp = (unsigned char *)b;
	while (i < len)
	{
		s_temp[i] = c;
		i++;
	}
	return (b);
}
