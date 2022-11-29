#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s1;

	i = ft_strlen(s) + 1;
	s1 = malloc(i);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
