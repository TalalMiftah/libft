#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	if (size > len_dst)
		res = len_src + len_dst;
	else
		return (len_src + size);
	while (src[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
