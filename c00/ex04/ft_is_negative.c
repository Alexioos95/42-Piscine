/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:51:59 by apayen            #+#    #+#             */
/*   Updated: 2022/09/19 09:37:38 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	print_n;
	char	print_p;

	print_n = 'N';
	print_p = 'P';
	if (n < 0)
		write(1, &print_n, 1);
	else
		write(1, &print_p, 1);
}
