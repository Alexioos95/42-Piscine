/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apayen <apayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:52:39 by apayen            #+#    #+#             */
/*   Updated: 2022/10/04 14:37:08 by apayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strs_len(char **strs, int size)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	j = ft_strs_len(strs, size);
	k = ft_strlen(sep);
	dest = malloc(sizeof(char) * (j * k + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
