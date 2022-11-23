#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s1);
}
