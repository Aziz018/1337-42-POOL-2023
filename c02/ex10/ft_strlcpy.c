/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:53:14 by aelkheta          #+#    #+#             */
/*   Updated: 2023/08/23 10:20:37 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlen(char *src)
{
	unsigned int	lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = strlen(*src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
