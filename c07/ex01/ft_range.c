/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:01 by aelkheta          #+#    #+#             */
/*   Updated: 2023/09/03 12:13:11 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i++] = min++;
	}
	return (array);
}
