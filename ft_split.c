/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:23:44 by mcekici           #+#    #+#             */
/*   Updated: 2024/10/16 14:23:44 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sepcounter(char const *s, char sep)
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
			splited[i] = ft_substr(s, 0, wordlen(s, sep) + 1);
			s += wordlen(s, sep);
			i ++;
		}
	}
	splited[i] = 0;
	return (splited);
}
