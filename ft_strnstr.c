/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:32:38 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/08 17:59:55 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strbig, const char *strsmall, size_t lent)
{
	size_t	lenght2;

	lenght2 = ft_strlen(strsmall);
	if (strsmall[0] == '\0')
		return ((char *)strbig);
	while (*strbig && lent >= lenght2)
	{
		if (*strbig == *strsmall && !(ft_strncmp(strbig, strsmall, lenght2)))
			return ((char *)strbig);
		strbig++;
		lent--;
	}
	return (0);
}
/*locates the first occurrence of the null-terminated strsmall*/
/*in the strbig, where not more than lenght characters are searched.*/
/*Characters that appear after a `\0' character are not searched*/
/* If strsmall is an empty string, strbig is returned;*/
/*if strsmall occurs nowhere in strbig, NULL is returned;*/
/*otherwise a pointer to the first character of the first occurrence of*/
/*strsmall is returned*/
