#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	if (!c1 && !c2)
		return (0);
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
	}
	return (dest);
}
