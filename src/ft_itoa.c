/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarago <makarago@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:22:28 by makarago          #+#    #+#             */
/*   Updated: 2024/10/26 18:36:24 by makarago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_size(int number)
{
	int	size;

	size = 0;
	if (number <= 0)
		size = 1;
	while (number != 0)
	{
		size++;
		number /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	unsigned int	temp;
	int				size;
	char			*str;

	size = get_number_size(n);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		temp = n * -1;
		str[0] = '-';
	}
	else
		temp = n;
	while (temp > 0)
	{
		str[size--] = 48 + (temp % 10);
		temp = temp / 10;
	}
	return (str);
}
