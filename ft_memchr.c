#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;

	i = 0;
	c1 = (unsigned char *)str;
	while (i < n)
	{
		if (c1[i] == (unsigned char)c)
			return (c1 + i);
		i++;
	}
	return (0);
}
