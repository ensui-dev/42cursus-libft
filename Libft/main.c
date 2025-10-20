#include "libft.h"

int	main(void)
{
	int fd = open("test.txt", O_RDWR | O_CREAT, 0644);
	ft_putstr_fd("Hello", fd);
	return (0);
}