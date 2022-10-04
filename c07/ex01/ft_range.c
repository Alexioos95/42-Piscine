/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:45:41 by apayen            #+#    #+#             */
/*   Updated: 2022/10/02 11:00:46 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	*null;

	i = 0;
	null = NULL;
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		return (null);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
