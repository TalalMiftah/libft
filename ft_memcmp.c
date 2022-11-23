#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)str1;
	c2 = (unsigned char *)str2;
	while (i < n)
	{
		if (c1[i] == c2[i])
			i++;
		else
			return (c1[i] - c2[i]);
	}
	return (0);
}
