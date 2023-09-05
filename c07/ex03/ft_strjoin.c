/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:22:16 by aelkheta          #+#    #+#             */
/*   Updated: 2023/09/04 18:47:00 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		len++;
	return (len);
}

void	ft_strcat(int size, char **strs, char *sep, char *array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
			array[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			array[k++] = sep[j++];
		j = 0;
		i++;
	}
	array[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	char	*array;
	int		i;

	i = 0;
	counter = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		counter += ft_strlen(strs[i++]);
	}
	counter += (ft_strlen(sep) * (size - 1)) + 1;
	array = (char *)malloc(counter * sizeof(char));
	if (!array)
		return (0);
	ft_strcat(size, strs, sep, array);
	return (array);
}
