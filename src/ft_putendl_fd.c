#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	size_t temp;

	if (!s)
		return;
	temp = 0;
	while (s[temp])
		write(fd, &s[temp], 1);
	write(fd, '\n', 1);
}