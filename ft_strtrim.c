#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
	size_t	startInd;
	size_t	endInd;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	startInd = 0;
	//endInd = ft_strlen(s1);
	while (s1[startInd] && strchr(set, s1[startInd]))
		startInd ++;
	endInd = ft_strlen(s1) - 1;
	while (s1[endInd] && strchr(set, s1[endInd]))
		endInd --;
	return (ft_substr(s1, startInd, endInd - startInd + 1));
}