/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:05:05 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/06 13:17:40 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t number)
{
	size_t	i;

	i = 0;
	while ((string1[i] || string2[i]) && i < number)
	{
		if (string1[i] != (unsigned char)string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i++;
	}
	return (0);
}
/* lexicographically compare the null-terminated strings s1 and s2*/
/* function compares not more than n characters.*/
/* characters that appear after a `\0' character are not compared*/
