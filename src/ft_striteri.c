#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t temp;

	if (!s || !f)
		return (NULL);
	temp = 0;
	while (s[temp])
		f(temp, &s[temp++]);
}