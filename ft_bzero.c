/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 09:19:34 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/04 09:02:53 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *string, size_t number)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)string;
	while (i < number)
	{
		result[i] = 0;
		i++;
	}
}
