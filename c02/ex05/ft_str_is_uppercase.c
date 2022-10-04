/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:19:41 by apayen            #+#    #+#             */
/*   Updated: 2022/09/21 14:27:47 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')))
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
	char	str[] = "\0";
	j = ft_str_is_uppercase(str);
	printf("%d", j);
}
*/
