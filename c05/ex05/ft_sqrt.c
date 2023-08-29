/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:23:20 by aelkheta          #+#    #+#             */
/*   Updated: 2023/08/29 10:14:53 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	sqrt = 2;
	while ((sqrt * sqrt < nb) && (sqrt < nb / 2))
		++sqrt;
	if (sqrt == nb / sqrt)
		return (sqrt);
	return (0);
}
