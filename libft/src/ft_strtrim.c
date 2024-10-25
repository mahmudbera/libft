/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:45 by makarago          #+#    #+#             */
/*   Updated: 2024/10/12 14:23:58 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in(char const ch, char const *vec)
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
	char		*new;

	if (!s1 || !set)
		return (NULL);
	new = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!new)
		return (NULL);
	while (s1)
	{
		if (is_in((char)*s1, set))
			s1++;
		else
			break ;
	}
	end = ft_strlen(s1);
	while (end != 0)
	{
		if (is_in(s1[end - 1], set))
			end--;
		else
			break ;
	}
	ft_strlcpy(new, (char *)s1, end + 1);
	return (new);
}
