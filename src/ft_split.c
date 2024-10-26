/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:27:08 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:31:51 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_of_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

static int	split(char const *s, char c, char **new, int numOfWords)
{
	int	start;
	int	end;
	int	count;

	end = 0;
	count = 0;
	while (count < numOfWords)
	{
		while (s[end] == c && s[end])
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		new[count] = ft_substr(s, start, end - start);
		if (new[count] == NULL)
			return (-1);
		count++;
	}
	new[count] = 0;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**temp;
	int		x;
	int		check;
	int		y;

	if (!s)
		return (0);
	x = get_number_of_words(s, c);
	temp = (char **) malloc((x + 1) * sizeof(char *));
	if (!temp)
		return (NULL);
	check = split(s, c, temp, x);
	if (check == -1)
	{
		y = 0;
		while (temp[y])
		{
			free(temp[y]);
			y++;
		}
		free(temp);
		return (NULL);
	}
	return (temp);
}
