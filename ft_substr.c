#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*c;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	while (i < len)
	{
		c[i] = s[start];
		i++;
		start++;
	}
	c[i] = '\0';
	return (c);
}
