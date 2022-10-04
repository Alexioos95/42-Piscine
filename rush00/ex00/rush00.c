/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:41:15 by apayen            #+#    #+#             */
/*   Updated: 2022/09/19 10:09:58 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			first_line(x);
		}
		else if (i == y)
		{
			last_line(x);
		}
		else
		{
			line(x);
		}
		i++;
	}
}
