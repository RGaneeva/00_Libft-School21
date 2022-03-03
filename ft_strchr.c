/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:06:07 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 16:59:16 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int i)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == (char)i)
			return ((char *)string + index);
		index++;
	}
	if ((char)i == '\0')
		return ((char *)string + index);
	return (0);
}
