/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:54:05 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 14:09:53 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chars(char symb, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == symb)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	begin;
	size_t	lenght;
	char	*newstr;

	i = 0;
	begin = 0;
	if (!str || !set)
		return (0);
	while (str[begin] != '\0' && ft_chars(str[begin], set))
		begin++;
	lenght = ft_strlen(str);
	while (begin < lenght && ft_chars(str[lenght - 1], set))
		lenght--;
	newstr = (char *)malloc(sizeof(*str) * (lenght - begin + 1));
	if (!newstr)
		return (0);
	while (begin < lenght)
		newstr[i++] = str[begin++];
	newstr[i] = '\0';
	return (newstr);
}
/*allocates memory in substr func. and returns a newstr which is copy of s1*/
/*where chars specified in 'set' is removed fom begining and end of s1*/
/*strchr returns * to a needed character in string*/
