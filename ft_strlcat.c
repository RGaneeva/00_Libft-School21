/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:45:22 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/05 18:06:10 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *bufdst, const char *source, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;
	size_t	srcdstlen;

	i = 0;
	srclen = ft_strlen(source);
	dstlen = ft_strlen(bufdst);
	j = dstlen;
	if (size <= dstlen)
		dstlen = size;
	if (dstlen < (size - 1) && (size > 0))
	{
		while (source[i] && (dstlen + i) < (size - 1))
		{
			bufdst[j] = source[i];
			j++;
			i++;
		}
		bufdst[j] = 0;
	}
	srcdstlen = dstlen + srclen;
	return (srcdstlen);
}
/*it copies no more than size - 1 characters*/
/*from the src string to the dst buffer*/
/*putting it to the end of the of the dst and continue it*/
/*it returns summ of lenghts of source and dst*/
