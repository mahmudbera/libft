/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:08 by makarago          #+#    #+#             */
/*   Updated: 2024/10/10 14:24:46 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	temp;

	if (!s || !f)
		return (NULL);
	temp = ft_strlen(s);
	ptr = (char *)malloc((temp + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	temp = 0;
	while (s[temp])
	{
		ptr[temp] = (*f)(temp, s[temp]);
		temp++;
	}
	ptr[temp] = '\0';
	return (ptr);
}
