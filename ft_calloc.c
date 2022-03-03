/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:42:54 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/05 14:29:38 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elemnum, size_t elemsize)
{
	char	*result;
	size_t	size;

	size = elemsize * elemnum;
	result = malloc(size);
	if (!result)
		return (0);
	else
		ft_bzero(result, size);
	return (result);
}
/*allocates enough space for number of elements*/
/*that are elemsize bytes of memory each*/
/*eturns a pointer to the allocated memory.*/
/*The allocated memory is filled with bytes of value zero.*/
