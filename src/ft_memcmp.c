#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;
	size_t				i;

	temp1 = (const unsigned char *)s1;
	temp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}	
	return (0);
}