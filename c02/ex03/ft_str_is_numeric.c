/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:19:41 by apayen            #+#    #+#             */
/*   Updated: 2022/09/21 14:18:06 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= '0' && str[i] <= '9') && !(str[i] == '\0')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	int		j;
	char	str[];

	str[] = "\0";
	j = ft_str_is_numeric(str);
	printf("%d", j);
}
*/
