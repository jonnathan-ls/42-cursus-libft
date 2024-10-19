#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	s_len;

	if (!s)
		return ;
	s_len = ft_strlen(s);
	write(fd, s, s_len);
	write(fd, "\n", 1);
}
