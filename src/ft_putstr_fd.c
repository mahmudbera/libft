#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t temp;

	if (!s)
		return (NULL);
	temp = 0;
	while (s[temp])
	{
		write(fd, &s[temp++], 1);
	}
}