/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:01:08 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 16:55:29 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *bufdst, const char *source, size_t bufdstsize)
{
	size_t	i;
	size_t	srclenght;

	i = 0;
	if (!bufdst || !source)
		return (0);
	srclenght = ft_strlen(source);
	if (!bufdstsize)
		return (srclenght);
	while (source[i] != '\0' && i < bufdstsize - 1)
	{
		bufdst[i] = source[i];
		i++;
	}
	if (bufdstsize < srclenght)
		bufdst[bufdstsize - 1] = '\0';
	else if (bufdstsize != 0)
		bufdst[i] = '\0';
	return (srclenght);
}

/*it copies no more than size - 1 characters*/
/*from the src string to the dst buffer*/
/*and is guaranteed to set the null character at the end of the string*/
/*it returns lenght of source and looking on the size of it we can check*/
/*did it copied or not*/
