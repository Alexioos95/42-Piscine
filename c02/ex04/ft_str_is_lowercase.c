/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:19:41 by apayen            #+#    #+#             */
/*   Updated: 2022/09/21 14:26:27 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] == '\0')))
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
	j = ft_str_is_lowercase(str);
	printf("%d", j);
}
*/
