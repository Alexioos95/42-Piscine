/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:08:13 by apayen            #+#    #+#             */
/*   Updated: 2022/09/20 11:37:27 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	*div;
	int	*mod;
	int	a;
	int	b;

	div = &a;
	mod = &b;
	ft_div_mod(101, 5, div, mod);
	printf("%i and %i", a, b);
}
*/
