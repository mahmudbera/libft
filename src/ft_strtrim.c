/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:45 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:31:21 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char const ch, char const *vec)
{
	int	count;

	count = 0;
	while (vec[count])
	{
		if (vec[count] == ch)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		end;
	size_t		start;
	char		*new;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in(s1[end - 1], set))
		end--;
	new = ft_substr(s1, start, end - start);
	if (!new)
		return (NULL);
	return (new);
}
