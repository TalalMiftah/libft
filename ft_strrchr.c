#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		ssize;
	int		r;
	char	*c1;

	ssize = ft_strlen(s);
	c1 = (char *)s;
	r = 0;
	while (ssize >= 0)
	{
		if (c1[ssize] == (char)c)
			return (c1 + ssize);
		else
			ssize--;
	}
	return (0);
}
