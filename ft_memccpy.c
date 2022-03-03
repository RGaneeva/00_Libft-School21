/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 09:46:39 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/08 17:58:33 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int symbol, size_t number)
{
	unsigned char	*string1;
	unsigned char	*string2;
	int				i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	string1 = (unsigned char *) src;
	string2 = (unsigned char *) dest;
	while (i < (int)number)
	{
		string2[i] = string1[i];
		if (string1[i] == (unsigned char) symbol)
			return (dest + 1 + i);
		i++;
	}
	return (0);
}
/*copies no more that number bytes from memory area source*/
/* to destin, stopping when symbol is found*/
/*if memory areas overlaped - the result is undefined*/
/* returns a pointer to the next char in dest after symbol*/
/*or null if c wasnt found in first number of characters*/
