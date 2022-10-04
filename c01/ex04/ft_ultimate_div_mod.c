/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:27:33 by apayen            #+#    #+#             */
/*   Updated: 2022/09/20 13:00:46 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	a = &c;
	b = &d;
	c = 10;
	d = 15;
	ft_ultimate_div_mod(&c, b);
	printf("%i and %i", c, d);
	return (0);
}
*/
