/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:24:52 by mcekici           #+#    #+#             */
/*   Updated: 2024/10/16 14:24:52 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	test_func(unsigned int num, char c)
{
	return (c + (char)num);
}

int	main(void)
{
/*memset
	char	dizi[] = "Merhaba";
	printf("%s\n", (char *)ft_memset((void *)dizi, 'x', 2));
*/
/*memcpy
	char	dizi[] = "Merhaba";
	char	*ptr = (char *)malloc(sizeof(dizi));
	printf("%s\n", (char *)ft_memcpy(ptr, dizi, sizeof(dizi)));
*/
/*memmove
	char	dizi1[30] = "\0\0\0\0\0Merhaba";
	char	dizi2[30] = "Merhaba";
	printf("%s\n", (char *)ft_memmove(dizi1, dizi1 + 5, 7));
	printf("%s\n", (char *)ft_memmove(dizi2 + 2, dizi2, 7));
*/
/*strlcat
	char src1[] = " Dunya";
	char dst1[25] = "Merhaba";
	printf("%d\n", (int)ft_strlcat(dst1, src1, 25));
	char src2[] = " Dunya";
	char dst2[25] = "Merhaba";
	printf("%d\n", (int)strlcat(dst2, src2, 25));
*/
/*strchr
	char metin[] = "Merhaba";
	printf("%s\n", ft_strchr(metin, 'a'));
*/
/*strrchr
	char metin[] = "Merhaba ben kerem";
	printf("%s\n", ft_strrchr(metin, 'a'));
*/
/*strnstr
	printf("%s\n", ft_strnstr("Merhaba ben kerem", "ben", sizeof("Merhaba ben kerem")));
*/
/*atoi	
	printf("%d\n", ft_atoi("   \n24  asd"));
	printf("%d\n", atoi("   \n24  sad"));
*/
/*strdup
	printf("%s\n", ft_strdup("Merhaba"));
*/
/*substr
	printf("%s\n", ft_substr("Merhaba Ben kerem", 7, 7));
*/
/*strjoin
	printf("%s\n", ft_strjoin("Merhaba ben ", "  Kerem"));
*/
/*strtrim
	printf("%s\n", ft_strtrim(",.  Hello World!,,.. ..,", ",. "));
*/
/*split
	char **ptr = ft_split("Merhaba,42,Libft,Yapiyoruz", ',');
	while (*ptr)
	{
		printf("%s\n", *ptr);
		ptr++;
	}
*/
/*itoa
	printf("%s\n", ft_itoa(-234));
	printf("%s\n", ft_itoa(235434));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
*/
/*strmapi
	printf("%s\n", ft_strmapi("abcdefg", test_func));
*/
	return (0);
}
