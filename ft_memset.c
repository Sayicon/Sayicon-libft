#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*string;
	
	i = 0;
	string = (char *)s;
	while (i < n)
	{
		string[i] = c;
		i ++;
	}
	return (s);
}