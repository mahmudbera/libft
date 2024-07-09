#include "libft.h"

void *ft_memchr(const void *ptr, int ch, size_t length)
{
	const unsigned char	*temp;
	unsigned char		chTemp;
	size_t				i;

	temp = (const unsigned char *) ptr;
	chTemp = (unsigned char) ch;
	i = 0;
	while(i < length)
	{
		if(*(temp + i) == chTemp)
			return (temp + i);
		i++;
	}
	return (NULL);
}