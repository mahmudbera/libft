/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:28:05 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:33:24 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	temp;

	if (!s || !f)
		return ;
	temp = 0;
	while (s[temp])
	{
		f(temp, &s[temp]);
		temp++;
	}
}
