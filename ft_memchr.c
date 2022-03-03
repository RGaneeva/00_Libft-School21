/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 09:52:55 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/05 11:59:30 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int symbol, size_t number)
{
	size_t			i;
	unsigned char	*result;

	i = 0;
	result = (unsigned char *)source;
	while (i < number)
	{
		if (result[i] == (unsigned char)symbol)
			return (result + i);
		i++;
	}
	return (0);
}
