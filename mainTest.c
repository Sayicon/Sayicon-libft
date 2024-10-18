/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:24:52 by mcekici           #+#    #+#             */
/*   Updated: 2024/10/18 19:04:01 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
/*test_func1
static char	test_func1(unsigned int num, char c)
{
	return (c + (char)num);
}
*/
/*test_func2
static void	test_func2(unsigned int num, char *c)
{
	*c += num;
}
*/
/*del_func1
static void	del_test(void *content)
{
	free(content);
}
*/

int	main(void)
{
	return (0);
}
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
	printf("%s\n", ft_strnstr("Merhaba ben", "ba", sizeof("Merhaba ben")));
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
	printf("%s\n", ft_strmapi("abcdefg", test_func1));
*/
/*striteri
	char str[] = "abcdefg";
	printf("%s\n", str);
	ft_striteri(str, test_func2);
	printf("%s\n", str);
*/
/*putchar_fd
	int	fd = open("../Test_code.txt", O_CREAT | O_TRUNC | O_RDWR, 0666);
		// O_CREAT		Eğer dosya yoksa oluştur
		// O_TRUNC		Eğer dosya varsa içeriğini siler
		// O_WRONLY		Write Only Modunda açılyor
		// 0666			Dosya izlinlerini belirleme (umask 000 yapılmalı) 
	
	if (fd == -1)
	{
		ft_putstr_fd("Dosya Acilamadi!\n", 1);
		return (1);
	}
	ft_putchar_fd('g', fd);
	close(fd);
*/
/*struct t_list & lstnew
	t_list lst1;
	lst1.content = "Merhaba 42";
	lst1.next = 0;
	printf("%s\n", lst1.content);
	t_list *lst = ft_lstnew("Echole 42");
	printf("%s\n", lst->content);
	lst->next = &lst1;
	printf("%s\n", lst->next->content);
*/
/*lstadd_front
	t_list	*head = ft_lstnew("Merhaba ben lst1");
	t_list	*lst2 = ft_lstnew("Merhaba ben lst2");
	t_list	*lst3 = ft_lstnew("Merhaba ben lst3");
	ft_lstadd_front(&head, lst2);
	ft_lstadd_front(&head, lst3);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
*/
/*lstadd_back
	t_list	*head = ft_lstnew("Merhaba ben lst1");
	t_list	*lst2 = ft_lstnew("Merhaba ben lst2");
	t_list	*lst3 = ft_lstnew("Merhaba ben lst3");
	ft_lstadd_back(&head, lst2);
	ft_lstadd_back(&head, lst3);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
*/
/*lstlast
	t_list	*head = ft_lstnew("Merhaba ben lst1");
	t_list	lst2 = *ft_lstnew("Merhaba ben lst2");
	t_list	lst3 = *ft_lstnew("Merhaba ben lst3");
	ft_lstadd_back(&head, &lst2);
	ft_lstadd_back(&head, &lst3);
	printf("%s\n", ft_lstlast(head)->content);
*/
/*lstdelone
	t_list	*head = ft_lstnew(ft_strdup("Merhaba ben lst1"));
	t_list	*lst2 = ft_lstnew(ft_strdup("Merhaba ben lst2"));
	t_list	*lst3 = ft_lstnew(ft_strdup("Merhaba ben lst3"));
	ft_lstadd_back(&head, lst2);
	ft_lstadd_back(&head, lst3);
	printf("%s\n", (char *)head->content);
	ft_lstdelone(head, del_test);
	printf("%s\n", (char *)head->content);
*/