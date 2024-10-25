/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:55 by makarago          #+#    #+#             */
/*   Updated: 2024/10/25 15:35:29 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
	{
		ptr = (char *)malloc(sizeof(char) * 1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = 0;
		return (ptr);
	}
	if (len > (str_len - start))
	{
		ptr = (char *)malloc(sizeof(char) * ((str_len - start) + 1));
		if (ptr == NULL)
			return (NULL);
		ft_strlcpy(ptr, s + start, str_len - start + 1);
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	str_len = ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
