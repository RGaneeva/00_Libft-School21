/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:59:52 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 13:58:40 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t number)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destin;

	i = 0;
	source = (unsigned char *)mem1;
	destin = (unsigned char *)mem2;
	while (i < number)
	{
		if (source[i] != destin[i])
			return (source[i] - destin[i]);
		i++;
	}
	return (0);
}
/*compares byte string s1 against byte string s2.*/
/*Both strings are assumed to be n bytes long*/
/*returns zero if the two strings are identical*/
/*otherwise returns the difference between the first two differing bytes*/
/*Zero-length strings are always identical.*/
