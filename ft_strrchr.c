/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:36:16 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 17:06:56 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int sym)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while ((i + 1) > 0)
	{
		if (string[i] == (char)sym)
			return ((char *)string + i);
		i--;
	}
	return (0);
}
/*locates the first occurrence of i in the string*/
/*terminating null character is considered to be part of the string*/
/*therefore if c is `\0', the functions locate the terminating `\0'*/
