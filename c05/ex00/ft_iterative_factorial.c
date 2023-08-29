/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:44:17 by aelkheta          #+#    #+#             */
/*   Updated: 2023/08/29 11:29:36 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (ft_iterative_factorial(nb - 1) == (nb - 1) % nb)
	{
		return (1);
	}
	return (0);
}
