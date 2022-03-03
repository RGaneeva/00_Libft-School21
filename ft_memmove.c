/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 10:21:42 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 14:00:52 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destin, const void *source, size_t lenght)
{
	size_t			i;
	unsigned char	*temps;
	unsigned char	*tempd;

	i = 0;
	temps = (unsigned char *)source;
	tempd = (unsigned char *)destin;
	if (!destin && !source)
		return (0);
	if (temps > tempd)
	{
		while (lenght--)
		{
			tempd[i] = temps[i];
			i++;
		}
	}
	else
		while (lenght--)
			tempd[lenght] = temps[lenght];
	return (tempd);
}
/*copies len bytes from string src to string dst*/
/*two strings may overlap*/
/*the copy is always done in a non-destructive manner*/
/*returns the original value of dst*/
