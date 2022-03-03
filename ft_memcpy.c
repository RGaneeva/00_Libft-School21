/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 10:17:31 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 13:59:28 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destin, const void *source, size_t lenght)
{
	size_t	i;

	if (!destin && !source)
		return (0);
	i = 0;
	while (i < lenght)
	{
		*(char *)(destin + i) = *(char *)(source + i);
		i++;
	}
	return (destin);
}
/*copies n bytes from memory area src to memory area dst.*/
/*If dst and src overlap, behavior is undefined*/
/*applications in which dst and src might overlap should use */
/*memmove(3) instead*/
/*returns the original value of dst*/
