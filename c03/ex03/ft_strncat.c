/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:19:16 by apayen            #+#    #+#             */
/*   Updated: 2022/09/27 10:52:36 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[] = "qwer";
	char	src[] = "tyuiop";

	ft_strncat(dest, src, 5);
	printf("%s", dest);
}
*/
