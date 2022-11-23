#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int ln)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!d && !s)
		return (0);
	if (d > s)
	{
		while (ln > 0)
		{
			d[ln - 1] = s[ln - 1];
			ln--;
		}
	}
	else
		ft_memcpy(d, s, ln);
	return (dst);
}
