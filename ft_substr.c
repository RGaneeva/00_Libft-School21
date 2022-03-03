/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:42:35 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 17:10:32 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t lenght)
{
	char			*substr;
	t_list_substr	count;

	count.i = 0;
	count.j = 0;
	if (!string)
		return (0);
	if ((unsigned int) ft_strlen(string) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(string) <= lenght)
		lenght = ft_strlen(string) - start;
	substr = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!substr)
		return (0);
	while (string[count.i] != '\0' && ((unsigned int)ft_strlen(string) >= start))
	{
		if (count.i >= start && count.j < lenght)
		{
			substr[count.j] = string[count.i];
			count.j++;
		}
		count.i++;
	}
	substr[count.j] = '\0';
	return (substr);
}
/*allocates (with malloc) and returns a substring from the start*/
/*substr begins at index 'start' and it's lenght is not more than lenght*/
