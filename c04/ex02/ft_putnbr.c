/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:23:03 by apayen            #+#    #+#             */
/*   Updated: 2022/09/29 10:39:54 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long int	nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 *= -1;
	}
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
	else
	{
		ft_putchar(nb2 + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(21474458);
}
*/
