/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:50:48 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/04 10:19:12 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destin, int symbol, size_t numb)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)destin;
	while (i < numb)
	{
		result[i] = symbol;
		i++;
	}
	return (destin);
}
