#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr(int ab, int fd)
{
	if (ab == -2147483648)
	{
		write(1, '-', 1);
		write(1, '-', 1);
		ab = 147483648;
	}
	if (ab < 0)
	{
		write (1, '-', 1);
		ab *= -1;
	}
	if (ab <= 9)
		ft_putchar(ab + '0', fd);
	if (ab > 9)
	{
		ft_putnbr(ab / 10, fd);
		ft_putnbr(ab % 10, fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}