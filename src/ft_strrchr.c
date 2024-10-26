/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:29:36 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:25:30 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)(s + count));
		count--;
	}
	return (0);
}
