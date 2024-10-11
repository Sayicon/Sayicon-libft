#include "libft.h"

/*
char	ft_test(unsigned int i, char s)
{
	s += i;
	return (s);
}
 */

void	ft_test(unsigned int i, char *s)
{
	*s += i;
}

int main(void)
{
	
	//printf("%d\n",ft_isalpha('a'));
	char metin[] = "Kerem";
	//char metin2[] = "Hello, World!";
	//printf("%s\n", metin);
	//printf("%d\n", ft_strlen(metin));
	//printf("%s\n", metin);
	//ft_memset(metin, '+', 3);
	//ft_bzero(metin + 2, 3);
	//printf("%s\n", metin);
	//ft_memcpy(metin, metin2, 2);
	//printf("%s\n", metin);
	//printf("%s\n", metin2);
	//ft_memmove(metin2 + 7, metin2, 5);
	//printf("%s\n", metin2);
	//ft_strlcpy(metin2, metin, 6);
	//printf("%s\n", metin2);
	
	/*char metin3[20] = "Merhaba";
	printf("%s\n", metin3);
	ft_strlcat(metin3, " Ben Kerem", 20);
	printf("%s\n", metin3);*/
	//printf("%d\n", ft_strncmp("Merhaba", "Merha45", 3));

	//printf("%s\n", ft_strnstr("Merhaba Ben mustafa kerem", "merhaba", 26));

	//printf("%d\n", ft_atoi(" \n -4234"));

	//char metin4[] = "Merhaba ben kerem";
	//printf("%s\n", ft_substr(metin4, 8, 6));

	//printf("%s\n", ft_strjoin("Merhaba"," ben Kerem"));

	//printf("%s\n", ft_strtrim("x, ", " ,x."));
	/*
	char	metin[] = "   Merhaba  ,   Ben   ,  Mustafa  ,Kerem  ,Cekici   ";
	char	sep = ',';
	char	**ptr = ft_split(metin, sep);

	while (*ptr)
	{
		printf("%s\n", *ptr);
		ptr ++;
	} */

	//printf("%s\n", ft_itoa(-2147483648));

	/*
	char	str[] = "Ola";
	printf("%s\n",ft_strmapi(str, ft_test));
	*/
	/*
	char	metin[] = "Abcd";
	printf("%s\n", metin);
	ft_striteri(metin,ft_test);
	printf("%s\n", metin);
	*/
	return (0);
}
