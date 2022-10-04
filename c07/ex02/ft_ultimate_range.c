/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:00:25 by apayen            #+#    #+#             */
/*   Updated: 2022/10/04 12:18:44 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		tab = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/*
int	main(void)
{
	int	i;
	int	*range;

	i = ft_ultimate_range(&range, -100, 100);
	printf("%d", i);
}
*/
