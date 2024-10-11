#include "libft.h"

static int sepcounter(char const *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == sep)
			count ++;
		i ++;
	}
	return (count);
}

static int	wordlen(char const *s, char sep)
{
	int	len;

	len = 0;
	while (s[len] != sep && s[len])
		len ++;
	return (len);
}

char	**ft_split(char const *s, char sep)
{
	char	**splited;
	int		i;
	if (!s || !*s)
		return (NULL);
	splited = (char **)malloc(sizeof(char *) * (sepcounter(s, sep) + 2));
	if (!splited)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == sep)
			s ++;
		if (*s && *s != sep)
		{
			splited[i++] = ft_substr(s, 0, wordlen(s, sep));
			s += wordlen(s, sep);
		}
	}
	splited[i] = NULL;
	return (splited);
}