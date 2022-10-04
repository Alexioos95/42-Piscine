/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:23:03 by apayen            #+#    #+#             */
/*   Updated: 2022/09/29 13:18:35 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] != base[i])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_base_special(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| (base[i] >= '\t' && base[i] <= '\v'))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	nbr2;
	int				base_len;

	nbr2 = nbr;
	base_len = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return ;
	if (ft_check_base_special(base) == 0)
		return ;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	if (nbr2 >= base_len)
	{
		ft_putnbr_base(nbr2 / base_len, base);
	}
	ft_putchar(base[nbr2 % base_len]);
}

/*
int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = atoi(argv[1]);
	ft_putnbr_base(i, argv[2]);
}
*/
