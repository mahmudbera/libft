#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*srcTemp;
	unsigned char		*destTemp;
	size_t				i;

	destTemp = (unsigned char *) dest;
	srcTemp = (const unsigned char *) src;
	if(destTemp == srcTemp || n == 0)
		return (destTemp);
	if(destTemp > srcTemp)
	{
			while(n-- > 0)
				*(destTemp + n) = *(srcTemp + n);
			return (destTemp);
	}
	if(destTemp < srcTemp)
	{
		i = 0;
		while (i < n)
		{
			*(destTemp + i) = *(srcTemp + i);
			i++;
		}
		return (destTemp);
	}
	return (destTemp);
}