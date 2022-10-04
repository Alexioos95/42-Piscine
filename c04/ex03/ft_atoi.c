/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:06:38 by apayen            #+#    #+#             */
/*   Updated: 2022/09/29 13:22:29 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign_count;

	i = 0;
	result = 0;
	sign_count = 1;
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign_count * result);
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = ft_atoi(argv[1]);
	printf("%d", i);
}
