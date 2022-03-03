/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:45:41 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/05 14:59:25 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_symbcount(long int nbr)
{
	int	symbcount;

	symbcount = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		symbcount = 1;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		symbcount++;
	}
	return (symbcount);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*result;
	long int	numb;

	numb = (long int)n;
	i = ft_symbcount(numb);
	if (numb < 0)
		numb = -numb;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (0);
	result[i] = '\0';
	while (i > 0)
	{
		result[i - 1] = (numb % 10) + '0';
		numb = numb / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

/* makes integer as a string (include negative number)*/
