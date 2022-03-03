/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarmeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:38:25 by pcarmeli          #+#    #+#             */
/*   Updated: 2021/05/07 12:39:11 by pcarmeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int						i;
	int						ifminus;
	unsigned long long		result;

	i = 0;
	result = 0;
	ifminus = 1;
	while ((string[i] >= 9 && string [i] <= 13) || string[i] == ' ')
		i++;
	if (string[i] == '+' || string[i] == '-')
	{
		if (string[i] == '-')
			ifminus = -1;
		i++;
	}
	while (string[i] >= '0' && string[i] <= '9')
	{
		result = ((result * 10) + ((int)string[i] - '0'));
		i++;
	}
	return (result * ifminus);
}
