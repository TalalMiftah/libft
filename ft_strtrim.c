#include "libft.h"

static int	start(char const *s1, char const *set)
{
	int		ln;
	int		i;

	i = 0;
	ln = ft_strlen(s1);
	while (i < ln)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	end(char const *s1, char const *set)
{
	int		ln;
	char	*s;

	s = (char *)s1;
	ln = ft_strlen(s);
	while (ln > 0)
	{
		if (ft_strchr(set, s[ln - 1]) == 0)
			break ;
		ln--;
	}
	return (ln);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		st;
	int		ed;

	if (!s1)
		return (NULL);
	st = start(s1, set);
	ed = end(s1, set);
	if (!set)
		return (ft_strdup(s1));
	if (st >= ed)
		return (ft_strdup(""));
	else
		ptr = malloc(ed - st + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (s1 + st), (ed - st + 1));
	return (ptr);
}
