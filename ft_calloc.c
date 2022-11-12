#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if ((size != 0) && (((size * count) / size) != count))
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
