/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:49:10 by apayen            #+#    #+#             */
/*   Updated: 2022/09/22 14:43:42 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	if_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	if_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	if_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (!if_number(str[i - 1]) && !if_upcase(str[i - 1])
			&& !if_lowcase(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
}
*/
